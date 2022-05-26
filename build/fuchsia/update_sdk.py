#!/usr/bin/env python
# Copyright 2017 The Chromium Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

"""Updates the Fuchsia SDK to the given revision. Should be used in a 'hooks_os'
entry so that it only runs when .gclient's target_os includes 'fuchsia'."""

import argparse
import logging
import os
import re
import shutil
import subprocess
import sys
import tarfile

from common import GetHostOsFromPlatform, GetHostArchFromPlatform, \
                   DIR_SOURCE_ROOT, SDK_ROOT

sys.path.append(os.path.join(DIR_SOURCE_ROOT, 'build'))
import find_depot_tools

LICENSE_FILE = 'LICENSE'
SDK_SIGNATURE_FILE = '.hash'
SDK_TARBALL_PATH_TEMPLATE = (
    'gs://{bucket}/development/{sdk_hash}/sdk/{platform}-amd64/gn.tar.gz')


def _GetSdkGeneration(bucket, hash):
  if not hash:
    return None

  sdk_path = _GetSdkTarballPath(bucket, hash)
  cmd = [
      os.path.join(find_depot_tools.DEPOT_TOOLS_PATH, 'gsutil.py'), 'ls', '-L',
      sdk_path
  ]
  logging.debug("Running '%s'", " ".join(cmd))
  sdk_details = subprocess.check_output(cmd).decode('utf-8')
  m = re.search('Generation:\s*(\d*)', sdk_details)
  if not m:
    raise RuntimeError('Could not find SDK generation for {sdk_path}'.format(
        sdk_path=sdk_path))
  return int(m.group(1))


def _GetSdkHashList(bucket):
  """Read filename entries from sdk-hash-files.list (one per line), substitute
  {platform} in each entry if present, and read from each filename."""
  if bucket == 'fuchsia-sdk':
    assert (GetHostOsFromPlatform() == 'linux')
    platform = 'linux_internal'
  else:
    platform = GetHostOsFromPlatform()
  filenames = [
      line.strip() for line in _ReadFile('sdk-hash-files.list').replace(
          '{platform}', platform).splitlines()
  ]
  sdk_hashes = [_ReadFile(filename).strip() for filename in filenames]
  return sdk_hashes


def _GetSdkTarballPath(bucket, sdk_hash):
  return SDK_TARBALL_PATH_TEMPLATE.format(
      bucket=bucket, sdk_hash=sdk_hash, platform=GetHostOsFromPlatform())


def _ReadFile(filename):
  """Read a file in this directory."""
  with open(os.path.join(os.path.dirname(__file__), filename), 'r') as f:
    return f.read()


def _UpdateTimestampsRecursive():
  """Updates the modification timestamps of |path| and its contents to the
  current time."""
  for root, dirs, files in os.walk(SDK_ROOT):
    for f in files:
      os.utime(os.path.join(root, f), None)
    for d in dirs:
      os.utime(os.path.join(root, d), None)


def DownloadAndUnpackFromCloudStorage(url, output_dir):
  """Fetches a tarball from GCS and uncompresses it to |output_dir|."""

  # Pass the compressed stream directly to 'tarfile'; don't bother writing it
  # to disk first.
  cmd = [os.path.join(find_depot_tools.DEPOT_TOOLS_PATH, 'gsutil.py'),
         'cp', url, '-']
  logging.debug('Running "%s"', ' '.join(cmd))
  task = subprocess.Popen(cmd, stderr=subprocess.PIPE, stdout=subprocess.PIPE)
  try:
    tarfile.open(mode='r|gz', fileobj=task.stdout).extractall(path=output_dir)
  except tarfile.ReadError:
    task.wait()
    stderr = task.stderr.read()
    raise subprocess.CalledProcessError(task.returncode, cmd,
      "Failed to read a tarfile from gsutil.py.{}".format(
        stderr if stderr else ""))
  task.wait()
  if task.returncode:
    raise subprocess.CalledProcessError(task.returncode, cmd,
                                        task.stderr.read())


# TODO(crbug.com/1138433): Investigate whether we can deprecate
# use of sdk_bucket.txt.
def GetOverrideCloudStorageBucket():
  """Read bucket entry from sdk_bucket.txt"""
  return _ReadFile('sdk-bucket.txt').strip()


def GetSdkHash(bucket):
  """Gets the hash identifier of the newest generation SDK."""
  hashes = _GetSdkHashList(bucket)
  return (max(hashes, key=lambda sdk: _GetSdkGeneration(bucket, sdk))
          if hashes else None)


def MakeCleanDirectory(directory_name):
  if (os.path.exists(directory_name)):
    shutil.rmtree(directory_name)
  os.mkdir(directory_name)


def main():
  parser = argparse.ArgumentParser()
  parser.add_argument('--verbose', '-v',
    action='store_true',
    help='Enable debug-level logging.')
  parser.add_argument(
      '--default-bucket',
      type=str,
      default='fuchsia',
      help='The Google Cloud Storage bucket in which the Fuchsia SDK is '
      'stored. Entry in sdk-bucket.txt will override this flag.')
  args = parser.parse_args()

  logging.basicConfig(level=logging.DEBUG if args.verbose else logging.INFO)

  # Quietly exit if there's no SDK support for this platform.
  try:
    GetHostOsFromPlatform()
  except:
    return 0

  # Use the bucket in sdk-bucket.txt if an entry exists.
  # Otherwise use the default bucket.
  bucket = GetOverrideCloudStorageBucket() or args.default_bucket

  sdk_hash = GetSdkHash(bucket)
  if not sdk_hash:
    return 1

  signature_filename = os.path.join(SDK_ROOT, SDK_SIGNATURE_FILE)

  # crbug.com/1325179: Need to check LICENSE file existence due to transition
  # to using CIPD to download the SDK.
  license_filename = os.path.join(SDK_ROOT, LICENSE_FILE)

  current_signature = (open(signature_filename, 'r').read().strip()
                       if os.path.exists(signature_filename) else '')
  if current_signature != sdk_hash or not os.path.exists(license_filename):
    logging.info('Downloading GN SDK %s...' % sdk_hash)

    MakeCleanDirectory(SDK_ROOT)
    DownloadAndUnpackFromCloudStorage(_GetSdkTarballPath(bucket, sdk_hash),
                                      SDK_ROOT)

  with open(signature_filename, 'w') as f:
    f.write(sdk_hash)

  _UpdateTimestampsRecursive()

  return 0


if __name__ == '__main__':
  sys.exit(main())
