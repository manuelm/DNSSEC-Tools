/*
 * Copyright 2005-2007 SPARTA, Inc.  All rights reserved.
 * See the COPYING file distributed with this software for details.
 */
#ifndef RES_MKQUERY_H
#define RES_MKQUERY_H

#include <resolv.h>

/*
 * should be in resolv.h; define it if not. this value is from
 * the OS X header (linux uses a different value)
 */
#ifndef RES_USE_EDNS0
#define RES_USE_EDNS0   0x40000000
#endif

#ifndef T_OPT
#define T_OPT   41
#endif

#ifndef NS_OPT_DNSSEC_OK
#define NS_OPT_DNSSEC_OK   0x8000U
#endif

int
                res_val_nmkquery(struct name_server *pref_ns, int op,   /* opcode of query */
                                 const char *dname,     /* domain name */
                                 u_int16_t class, u_int16_t type,   /* class and type of query */
                                 const u_char * data,   /* resource record data */
                                 int datalen,   /* length of data */
                                 const u_char * newrr_in,       /* new rr for modify or append */
                                 u_char * buf,  /* buffer to put query */
                                 int buflen);   /* size of buffer */

int
                res_val_nopt(struct name_server *pref_ns, int n0,       /* current offset in buffer */
                             u_char * buf,      /* buffer to put query */
                             int buflen,        /* size of buffer */
                             int anslen);       /* UDP answer buffer size */


#endif                          /* RES_MKQUERY_H */
