###############################
# Makefile for NSCA
#
# Last Modified: 10-23-2003
###############################

srcdir=.

# Source code directories
SRC_INCLUDE=./../include

CC=gcc
CFLAGS=-g -O2 -DHAVE_LIBMCRYPT -I/usr/include -DHAVE_CONFIG_H
LDFLAGS= -L/usr/lib -lmcrypt 
SOCKETLIBS= -lnsl
LIBWRAPLIBS= -lwrap

CP=@CP@


all: nsca send_nsca

nsca: $(srcdir)/nsca.c $(srcdir)/netutils.c $(srcdir)/utils.c $(SRC_INCLUDE)/netutils.h $(SRC_INCLUDE)/utils.h $(SRC_INCLUDE)/common.h $(SRC_INCLUDE)/config.h
	$(CC) $(CFLAGS) -o $@ $(srcdir)/nsca.c $(srcdir)/netutils.c $(srcdir)/utils.c $(LDFLAGS) $(SOCKETLIBS) $(LIBWRAPLIBS)

send_nsca: $(srcdir)/send_nsca.c $(srcdir)/netutils.c $(srcdir)/utils.c $(SRC_INCLUDE)/netutils.h $(SRC_INCLUDE)/utils.h $(SRC_INCLUDE)/common.h $(SRC_INCLUDE)/config.h
	$(CC) $(CFLAGS) -o $@ $(srcdir)/send_nsca.c $(srcdir)/netutils.c $(srcdir)/utils.c $(LDFLAGS) $(SOCKETLIBS)

clean:
	rm -f core nsca send_nsca
	rm -f *~ */*~

distclean: clean
	rm -f Makefile

devclean: distclean
