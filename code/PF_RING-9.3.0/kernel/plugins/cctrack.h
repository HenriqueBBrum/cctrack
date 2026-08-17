/*
 * cctrack.h
 *
 *
 * Copyright (c) 2011, Cornelius Diekmann
 * All rights reserved.
 */

#ifndef CCTRACK_H_
#define CCTRACK_H_


#include <linux/spinlock.h>
#include <linux/version.h>

#if LINUX_VERSION_CODE >= KERNEL_VERSION(5,6,0)
#include <linux/time64.h>
#include <linux/ktime.h>
#ifndef _PF_RING_TIME_COMPAT_
#define _PF_RING_TIME_COMPAT_
typedef long __kernel_time_t;
struct timeval  { long tv_sec; long tv_usec; };
struct timespec { long tv_sec; long tv_nsec;  };
#endif
#endif

#define DEBUG
//#define DEBUG_VERBOSE

struct cctrack_properties{
	/* timeout of a connection in seconds */
	__kernel_time_t timeout;

	/* sampling limit in bytes, including l4 headers */
	/* active sampling limit */
	uint32_t sampling_limit;

	/* sampling limit calculated but not yet applied */
	uint32_t sampling_limit_fut;

	/* sampling_limit is only applied every @inertia_pkt packets */
	uint32_t inertia_pkt_cnt;

	/* mutex for locking this data structure */
	rwlock_t lock;
};

extern unsigned int warn_min_sample_rate; /*module param */
extern int timeout; /*module param */
extern int sample_limit; /*module param */

#endif /* CCTRACK_H_ */
