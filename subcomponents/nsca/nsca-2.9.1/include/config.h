/* include/config.h.  Generated by configure.  */
/************************************************************************
 *
 * NSCA Common Config Header File
 * Copyright (c) 2000-2007 Ethan Galstad (nagios@nagios.org)
 * Last Modified: 11-23-2007
 *
 * License:
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 ************************************************************************/

#ifndef _CONFIG_H
#define _CONFIG_H


#include <stdio.h>
#include <stdlib.h>

#define DEFAULT_SERVER_PORT 5667

#define NSCA_LOG_FACILITY "daemon"

/* #undef socklen_t */

#define STDC_HEADERS 1
#define HAVE_SYSLOG_H 1
#define HAVE_STRDUP 1
#define HAVE_STRSTR 1
#define HAVE_STRTOUL 1
/* #undef HAVE_INITGROUPS */
/* #undef HAVE_LIMITS_H */
#define HAVE_SYS_RESOURCE_H 1

#define HAVE_LIBWRAP 1

#define SOCKET_SIZE_TYPE size_t
#define GETGROUPS_T gid_t
#define RETSIGTYPE void


#define SIZEOF_INT 4
#define SIZEOF_SHORT 2
#define SIZEOF_LONG 8

/* stupid stuff for u_int32_t */
/* #undef U_INT32_T_IS_USHORT */
/* #undef U_INT32_T_IS_UINT */
/* #undef U_INT32_T_IS_ULONG */
/* #undef U_INT32_T_IS_UINT32_T */

#ifdef U_INT32_T_IS_USHORT
typedef unsigned short u_int32_t;
#endif
#ifdef U_INT32_T_IS_ULONG
typedef unsigned long u_int32_t;
#endif
#ifdef U_INT32_T_IS_UINT
typedef unsigned int u_int32_t;
#endif
#ifdef U_INT32_T_IS_UINT32_t
typedef uint32_t u_int32_t;
#endif

/* stupid stuff for int32_t */
/* #undef INT32_T_IS_SHORT */
/* #undef INT32_T_IS_INT */
/* #undef INT32_T_IS_LONG */

#ifdef INT32_T_IS_USHORT
typedef short int32_t;
#endif
#ifdef INT32_T_IS_ULONG
typedef long int32_t;
#endif
#ifdef INT32_T_IS_UINT
typedef int int32_t;
#endif

#define HAVE_REGEX_H 1
#ifdef HAVE_REGEX_H
#include <regex.h>
#endif

#define HAVE_STRINGS_H 1
#define HAVE_STRING_H 1
#ifdef HAVE_STRINGS_H
#include <strings.h>
#endif
#ifdef HAVE_STRINGS_H
#include <string.h>
#endif

#define HAVE_UNISTD_H 1
#ifdef HAVE_UNISTD_H
#include <unistd.h>
#endif


#define HAVE_SIGNAL_H 1
#ifdef HAVE_SIGNAL_H
#include <signal.h>
#endif

#define HAVE_SYSLOG_H 1
#ifdef HAVE_SYSLOG_H
#include <syslog.h>
#endif

/* #undef HAVE_SYS_INT_TYPES_H */
#ifdef HAVE_SYS_INT_TYPES_H
#include <sys/int_types.h>
#endif

#define HAVE_SYS_STAT_H 1
#ifdef HAVE_SYS_STAT_H
#include <sys/stat.h>
#endif

#define HAVE_FCNTL_H 1
#ifdef HAVE_FCNTL_H
#include <fcntl.h>
#endif

#define HAVE_STDINT_H 1
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif

#define HAVE_SYS_POLL_H 1
#ifdef HAVE_SYS_POLL_H
#include <sys/poll.h>
#endif

#define HAVE_SYS_TYPES_H 1
#ifdef HAVE_SYS_TYPES_H
#include <sys/types.h>
#endif

#define HAVE_SYS_WAIT_H 1
#ifdef HAVE_SYS_WAIT_H
#include <sys/wait.h>
#endif

#ifndef WEXITSTATUS
# define WEXITSTATUS(stat_val) ((unsigned)(stat_val) >> 8)
#endif
#ifndef WIFEXITED
# define WIFEXITED(stat_val) (((stat_val) & 255) == 0)
#endif

#define HAVE_ERRNO_H 1
#ifdef HAVE_ERRNO_H
#include <errno.h>
#endif

/* needed for the time_t structures we use later... */
#define TIME_WITH_SYS_TIME 1
#define HAVE_SYS_TIME_H 1
#if TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# if HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif


#define HAVE_SYS_SOCKET_H 1
#ifdef HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif

/* #undef HAVE_SOCKET */
#ifdef HAVE_SOCKET_H
#include <socket.h>
#endif

#define HAVE_TCPD_H 1
#ifdef HAVE_TCPD_H
#include <tcpd.h>
#endif

#define HAVE_NETINET_IN_H 1
#ifdef HAVE_NETINET_IN_H
#include <netinet/in.h>
#endif

#define HAVE_ARPA_INET_H 1
#ifdef HAVE_ARPA_INET_H
#include <arpa/inet.h>
#endif

#define HAVE_NETDB_H 1
#ifdef HAVE_NETDB_H
#include <netdb.h>
#endif

#define HAVE_CTYPE_H 1
#ifdef HAVE_CTYPE_H
#include <ctype.h>
#endif

/* #undef HAVE_LIBMCRYPT */
#ifdef HAVE_LIBMCRYPT
#include <mcrypt.h>
#endif

/* #undef HAVE_DB_H */
#ifdef HAVE_DB_H
#include <db.h>
#endif

#define HAVE_PWD_H 1
#ifdef HAVE_PWD_H
#include <pwd.h>
#endif

#define HAVE_GRP_H 1
#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#define HAVE_INTTYPES_H 1
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#endif

/* #undef HAVE_SYS_CONFIG_H */
#ifdef HAVE_SYS_CONFIG_H
#include <sys/config.h>
#endif

#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#ifdef HAVE_INTTYPES_H
#include <inttypes.h>
#else
#ifdef HAVE_STDINT_H
#include <stdint.h>
#endif
#endif

#endif
