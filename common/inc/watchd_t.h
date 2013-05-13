/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : watchd_t.h
*
* Author       : Janschitz    ; Siemens AG ANL A451 SR; (09131) 7-25627
*
* Language     : C
*
* Description  : Deklarationen der Watchdog-Task
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/watchd_t.h,v 1.2 2005/09/01 13:28:54 christian_l Exp $
*
\************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef WATCHD_T_H
#define WATCHD_T_H
/************************************************************************/


/*********************** Changes ****************************************\
*
* $Log: watchd_t.h,v $
* Revision 1.2  2005/09/01 13:28:54  christian_l
* Changes to include the SysLib.
*
* Revision 1.2  2008/03/10 11:02:00  Yang Zhiming
* Changes to include the "xcuglobalinc.h"

* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/2   1997/9/1 11:34:31   hans 
* uint durch ushort und sint durch sshort ersetzt 
* wegen neuem RMOS
 * 
 *    Rev 1.0   11 Dec 1996 16:23:22   hans
 * Initial revision.
 * 
 *    Rev 1.2   07 Nov 1996 16:13:08   gaby
 * Einige Funktionen auf far geandert wegen Speicherproblemen beim Booten der XCU.
 * 
 *    Rev 1.1   28 Sep 1995 08:14:36   achim
 * 
 * Prototyp f. show_display und Definition v. MSG_BUFFER_SIZE.
 *
 *    Rev 1.0   26 Jun 1995 15:52:38   hans
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/

//#include <i86.h>

//for IconosM development,10/03/2008,Yang Zhi Ming
#include <xcuglobalinc.h> 
//end for IconosM development add
/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

//Layh, 01.09.05, watchdog disabled  extern void far reset_xcu ();
extern void hexdisplay (uchar);
extern void wd_trig ();
//Layh, 01.09.05, watchdog disabled extern void far show_display ( uchar );

/*----------------------------------------------------------------------*/
/* DECLARATION: external data                                           */
/*----------------------------------------------------------------------*/
#define ACTIVATE_WATCHDOG_BASE	 	0xDA700
#define ACTIVATE_WATCHDOG_LIMIT		0x100

#define WATCHDOG_BASE	 	0xDA200
#define WATCHDOG_LIMIT		0x100

#define _7_SEGMENT_LOW_BASE	 	0xDA000
#define _7_SEGMENT_LOW_LIMIT	0x100

#define _7_SEGMENT_HIGH_BASE	0xDA100
#define _7_SEGMENT_HIGH_LIMIT	0x100

#define MSG_BUFFER_SIZE			8 /* max. 8 Eintr„ge f?r 7-Segment-Anzeige */

/* Wieoft muessen 150 Millisekunden ablaufen, bis eine Minute */
/* erreicht ist. wird benoetigt fuer den Betriebsstundenzaehler */

#define MS_150_MAX 400

/* Wieviele Minuten hat eine Stunde */
#define BETR_STD 60


/************************************************************************/
/* Ende v. Wiedereintrittssicherung */
#endif


