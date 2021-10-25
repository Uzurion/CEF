# Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
# reserved. Use of this source code is governed by a BSD-style license that
# can be found in the LICENSE file.

from __future__ import absolute_import
from date_util import *
from file_util import *
from optparse import OptionParser
import sys

# cannot be loaded as a module
if __name__ != "__main__":
  sys.stderr.write('This file cannot be loaded as a module!')
  sys.exit()

# parse command-line options
disc = """
This utility creates the config header file.
"""
parser = OptionParser(description=disc)
parser.add_option(
    '--header',
    dest='header',
    metavar='FILE',
    help='output config header file [required]')
parser.add_option(
    '--cef_gn_config',
    dest='cef_gn_config',
    metavar='FILE',
    help='input CEF gn config file [required]')
parser.add_option(
    '-q',
    '--quiet',
    action='store_true',
    dest='quiet',
    default=False,
    help='do not output detailed status information')
(options, args) = parser.parse_args()

# the header option is required
if options.header is None or options.cef_gn_config is None:
  parser.print_help(sys.stdout)
  sys.exit()


def check_x11_build(gn_config):
  """ Scan gn configuration file and decide whether it's x11 build or not """
  lines = read_file(gn_config).split("\n")
  for line in lines:
    parts = line.split('=', 1)
    if (parts[0] == "use_x11" and
        parts[1] == "false") or (parts[0] == "use_ozone" and
                                 parts[1] == "true"):
      return False

  return True


def write_config_header(header, cef_gn_config):
  """ Creates the header file for the cef build configuration
       if the information has changed or if the file doesn't already exist. """

  if not path_exists(cef_gn_config):
    raise Exception('file ' + cef_gn_config + ' does not exist.')

  if path_exists(header):
    oldcontents = read_file(header)
  else:
    oldcontents = ''

  year = get_year()

  cef_x11_defines = "#define CEF_X11 1" if check_x11_build(
      cef_gn_config) else ""

  newcontents = '// Copyright (c) '+year+' Marshall A. Greenblatt. All rights reserved.\n'+\
                '//\n'+\
                '// Redistribution and use in source and binary forms, with or without\n'+\
                '// modification, are permitted provided that the following conditions are\n'+\
                '// met:\n'+\
                '//\n'+\
                '//    * Redistributions of source code must retain the above copyright\n'+\
                '// notice, this list of conditions and the following disclaimer.\n'+\
                '//    * Redistributions in binary form must reproduce the above\n'+\
                '// copyright notice, this list of conditions and the following disclaimer\n'+\
                '// in the documentation and/or other materials provided with the\n'+\
                '// distribution.\n'+\
                '//    * Neither the name of Google Inc. nor the name Chromium Embedded\n'+\
                '// Framework nor the names of its contributors may be used to endorse\n'+\
                '// or promote products derived from this software without specific prior\n'+\
                '// written permission.\n'+\
                '//\n'+\
                '// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS\n'+\
                '// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT\n'+\
                '// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR\n'+\
                '// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT\n'+\
                '// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,\n'+\
                '// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT\n'+\
                '// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,\n'+\
                '// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY\n'+\
                '// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT\n'+\
                '// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE\n'+\
                '// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.\n'+\
                '//\n'+\
                '// ---------------------------------------------------------------------------\n'+\
                '//\n'+\
                '// This file is generated by the make_config_header.py tool.\n'+\
                '//\n\n'+\
                '#ifndef CEF_INCLUDE_CEF_CONFIG_H_\n'+\
                '#define CEF_INCLUDE_CEF_CONFIG_H_\n\n'+\
                '' + cef_x11_defines + '\n'+\
                '#endif  // CEF_INCLUDE_CEF_CONFIG_H_\n'
  if newcontents != oldcontents:
    write_file(header, newcontents)
    return True
  return False


written = write_config_header(options.header, options.cef_gn_config)
if not options.quiet:
  if written:
    sys.stdout.write('File ' + options.header + ' updated.\n')
  else:
    sys.stdout.write('File ' + options.header + ' is already up to date.\n')
