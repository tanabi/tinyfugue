# $Id: vars.mak,v 1.23 1999/01/31 00:27:58 hawkeye Exp $
########################################################################
#  TinyFugue - programmable mud client
#  Copyright (C) 1998 - 1999 Ken Keys
#
#  TinyFugue (aka "tf") is protected under the terms of the GNU
#  General Public License.  See the file "COPYING" for details.
#
#  DO NOT EDIT THIS FILE.
#  Any configuration changes should be made to the Config file.
########################################################################

# Makefile variables common to all systems.
# This file should be included or concatenated into a system Makefile.
# Predefined variables:
#   O - object file suffix (e.g., "o" or "obj")

TFVER=40s1

SOURCE = command.c dstring.c expand.c help.c history.c keyboard.c \
  macro.c main.c malloc.c output.c process.c search.c signals.c \
  socket.c tfio.c tty.c util.c variable.c world.c

OBJS = command.$O dstring.$O expand.$O expr.$O help.$O history.$O keyboard.$O \
  macro.$O main.$O malloc.$O output.$O process.$O search.$O signals.$O \
  socket.$O tfio.$O tty.$O util.$O variable.$O world.$O \
  regexp.$O $(OTHER_OBJS)
