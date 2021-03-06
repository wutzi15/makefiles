//
//  defines.h
//  root_graph
//
//  Created by Wutzi on 26.05.11.
//  Copyright 2011 me. All rights reserved.
//

	//#define RENDER
#ifndef _DEFINES
#define _DEFINES


#define LINES 5001

#define ROWS 4

#define MIN -70.0

	//#define NUM_ARGS 3

#define WARNING_PERC_ASY 2

#define NOTICE_PER_ASY 1

#define WARNING_PERC_CEN 1

#define NOTICE_PER_CEN 0.5

#define WARNING_ALONE_ASY 4

#define WARNING_PERC_INT 50

#define NOTICE_PERC_INT 30

#define PM_OFFSET 100

#define THRS_EXPAND -65

#define RATIO_EXPAND 10

#define _VERSION "1.0.1"

#define _ROOT_VERSION "5.30rc1"

#define _BOOST_VERSION "1.46.1"

#ifndef INFINITY
#define INFINITY 10000
#endif

enum Level{
	NOTICE = 1,
	WARNING = 2
};

#endif