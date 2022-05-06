#!/usr/bin/env python
# Copyright 2015 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

# This writes headers for build flags. See buildflag_header.gni for usage of
# this system as a whole.
#
# The parameters are passed in a response file so we don't have to worry
# about command line lengths. The name of the response file is passed on the
# command line.
#
# The format of the response file is:
#    [--flags <list of one or more flag values>]

import optparse
import os
import re
import shlex


class Options:
  def __init__(self, output, rulename, header_guard, flags):
    self.output = output
    self.rulename = rulename
    self.header_guard = header_guard
    self.flags = flags


def GetOptions():
  parser = optparse.OptionParser()
  parser.add_option('--output', help="Output header name inside --gen-dir.")
  parser.add_option('--rulename',
                    help="Helpful name of build rule for including in the " +
                         "comment at the top of the file.")
  parser.add_option('--gen-dir',
                    help="Path to root of generated file directory tree.")
  parser.add_option('--definitions',
                    help="Name of the response file containing the flags.")
  cmdline_options, cmdline_flags = parser.parse_args()

  # Compute a valid C++ header guard by replacing non valid chars with '_',
  # upper-casing everything and prepending '_' if first symbol is digit.
  header_guard = cmdline_options.output.upper()
  if header_guard[0].isdigit():
    header_guard = '_' + header_guard
  header_guard = re.sub('[^\w]', '_', header_guard)
  header_guard += '_'

  # The actual output file is inside the gen dir.
  output = os.path.join(cmdline_options.gen_dir, cmdline_options.output)

  # Definition file in GYP is newline separated, in GN they are shell formatted.
  # shlex can parse both of these.
  with open(cmdline_options.definitions, 'r') as def_file:
    defs = shlex.split(def_file.read())
  flags_index = defs.index('--flags')

  # Everything after --flags are flags. true/false are remapped to 1/0,
  # everything else is passed through.
  flags = []
  for flag in defs[flags_index + 1 :]:
    equals_index = flag.index('=')
    key = flag[:equals_index]
    value = flag[equals_index + 1:]

    # Canonicalize and validate the value.
    if value == 'true':
      value = '1'
    elif value == 'false':
      value = '0'
    flags.append((key, str(value)))

  return Options(output=output,
                 rulename=cmdline_options.rulename,
                 header_guard=header_guard,
                 flags=flags)


def WriteHeader(options):
  with open(options.output, 'w') as output_file:
    output_file.write("// Generated by build/write_buildflag_header.py\n")
    if options.rulename:
      output_file.write('// From "' + options.rulename + '"\n')

    output_file.write('\n#ifndef %s\n' % options.header_guard)
    output_file.write('#define %s\n\n' % options.header_guard)
    output_file.write('#include "build/buildflag.h"\n\n')

    for pair in options.flags:
      output_file.write('#define BUILDFLAG_INTERNAL_%s() (%s)\n' % pair)

    output_file.write('\n#endif  // %s\n' % options.header_guard)


options = GetOptions()
WriteHeader(options)
