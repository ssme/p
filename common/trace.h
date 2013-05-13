/*****************************************************************************/
/*                                                                           */
/* File name: trace.h                Version: 1.0                            */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Type: Header File                 Programming language: C++               */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*                                                                           */
/* Changes:                                                                  */
/*                                                                           */
/* Date     | Name |   Charm   | Reason                                      */
/* ---------+------+-----------+-------------------------------------------- */
/*          |      |           |                                             */
/*          |      |           |                                             */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Description:                                                              */
/* ============                                                              */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*              Copyright (c) Siemens AG 2011. All rights reserved           */
/*                                                                           */
/*****************************************************************************/


#ifndef MAIN_TRACE_H_
#define MAIN_TRACE_H_

//////////////////////////////////////////////////
// Include trace stuff

#include "libs/libtrace/trace.h"


//////////////////////////////////////////////////

// Define which trace flags are initially active (e.g. "| MK_FLAG(EEPROM, TEST1) | MK_FLAG(EEPROM, TEST2)")
#define TRACE_FLAGS_INIT

// Defines the flagset 'TRACEAPP' (capital letters by convention for FlagSet- and Flag-names e.g. 'TESTFLAG0')
// usage: FLAGSET(FlagSet name, Parent name, Flag 1 name, Flag 1 description, Flag 2 name, Flag 2 description, ...)
FLAGSET(MAIN_APP_FLAGS, FLAGSET_ROOT, \
    APPLICATION,     "show connection messages", \
    TF01, "", \
    TF02,       "", \
    TF03,   "", \
	TF04,         "", \
	TF05,		 "", \
		TF06, "", \
		TF07, "", \
		TF08, "", \
		TF09, "", \
		TF10, "", \
		TF11, "", \
		TF12, "", \
		TF13, "", \
		TF14, "", \
		TF15, "", \
		TF16, "", \
		TF17, "", \
		TF18, "", \
		TF19, "");

// Define which trace flags are initially active (e.g. "| MK_FLAG(EEPROM, TEST1) | MK_FLAG(EEPROM, TEST2)")
#undef TRACE_FLAGS_INIT
#define TRACE_FLAGS_INIT

// Defines the flagset 'FLAGSET2' (capital letters by convention for FlagSet- and Flag-names e.g. 'BIT0')
// usage: FLAGSET(FlagSet name, Parent name, Flag 1 name, Flag 1 description, Flag 2 name, Flag 2 description, ...)

FLAGSET(GEN_IF_FLAGS, FLAGSET_ROOT, \
    CAN_TX, "receive CAN message", \
    CAN_RX, "transmit CAN message", \
    STATE,       "show current state", \
    TELEGRAM_TX,   "transmit internal telegram", \
    TELEGRAM_RX,         "receive internal telegram", \
    ERRORS, "error", \
	WARNINGS, "warning", \
	INFO, "info", \
	TIMER, "timer", \
	TF09, "", \
	TF10, "", \
	TF11, "", \
	TF12, "", \
	TF13, "", \
	TF14, "", \
	TF15, "", \
	TF16, "", \
	TF17, "", \
	TF18, "", \
	TF19, "");


//////////////////////////////////////////////////
// Clean up

#undef FLAGSET
#undef TRACE_FLAGS_INIT

//////////////////////////////////////////////////


#endif /*TRACE_INTERTHREAD_H_*/
