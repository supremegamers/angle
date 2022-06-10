# Copyright 2022 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

PRESUBMIT_VERSION = '2.0.0'

# This line is 'magic' in that git-cl looks for it to decide whether to
# use Python3 instead of Python2 when running the code in this file.
USE_PYTHON3 = True

import textwrap


def CheckNoBadDeps(input_api, output_api):
  """Prevent additions of bad dependencies from the //build prefix."""
  build_file_patterns = [
      r'(.+/)?BUILD\.gn',
      r'.+\.gni',
  ]
  blocklist_pattern = input_api.re.compile(
      r'^[^#]*//(?:base|third_party|components)')
  allowlist_pattern = input_api.re.compile(r'^[^#]*//third_party/junit')

  warning_message = textwrap.dedent("""
      The //build directory is meant to be as hermetic as possible so that
      other projects (webrtc, v8, angle) can make use of it. If you are adding
      a new dep from //build onto another directory, you should consider:
      1) Can that dep live within //build?
      2) Can the dep be guarded by "build_with_chromium"?
      3) Have you made this new dep easy to pull in for other projects (ideally
      a matter of adding a DEPS entry).:""")

  def FilterFile(affected_file):
    return input_api.FilterSourceFile(affected_file,
                                      files_to_check=build_file_patterns)

  problems = []
  for f in input_api.AffectedSourceFiles(FilterFile):
    local_path = f.LocalPath()
    for line_number, line in f.ChangedContents():
      if blocklist_pattern.search(line) and not allowlist_pattern.search(line):
        problems.append('%s:%d\n    %s' %
                        (local_path, line_number, line.strip()))
  if problems:
    return [output_api.PresubmitPromptOrNotify(warning_message, problems)]
  else:
    return []
