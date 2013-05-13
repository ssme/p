/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : r_time.h
*
* Author       : We          ; Siemens AG ANL A 426 PR; (09131) 7-25627
*
* Language     : C
*
* Description  : allgemeine Daten fuer Uhrenbaustein
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/r_time.h,v 1.5 2007/08/03 12:06:17 alexander_s Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: r_time.h,v $
* Revision 1.5  2007/08/03 12:06:17  alexander_s
* Moved some blanks.
*
* Revision 1.4  2007/08/03 11:57:08  hans
* Throw() in Deklaration eingebaut
*
* Revision 1.3  2007/07/19 13:32:40  fabian
* Bug 2193 gelöst
*
* Revision 1.2  2007/01/09 14:01:33  michael
* Concurrent Problem with xcu_time
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/6   1997/9/15 11:3:1   hans 
* Anpassungen fuer neue RMOS-Version ( Deklarationen aus time.h)
*
*    Rev /main/5   1997/9/1 11:36:5   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.3   07 Nov 1996 17:00:22   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.2   15 Jan 1996 15:54:18   hans
 *
 * Anpassung ORGANON Compiler.
 *
 *    Rev 1.1   10 Oct 1995 16:38:06   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.0   10 Aug 1994 09:51:48   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/
#include <time.h>
/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

typedef struct tm tm_t;
typedef struct time_struct_tag
			{
				uchar	day [2];
				uchar	delim0;
				uchar	month [3];
				uchar	delim1;
				uchar	year [4];
				uchar	blank;
				uchar	hours [2];
				uchar	colon0;
				uchar	minutes [2];
				uchar	colon1;
				uchar	seconds [2];
				uchar	dummy;
			} time_struct_t;


typedef struct xcu_time_struct_tag
			{
				uchar	year;
				uchar	month;
				uchar	day;
				uchar	hours;
				uchar	minutes;
				uchar	seconds;
			} xcu_time_struct_t;


                                /* Prototypen fuer Echtzeituhr */
extern int  far time_set (xcu_time_struct_t *);
extern xcu_time_struct_t far time_get (void);
extern void init_time_set( long ) throw ();
extern long init_time_get( void ) throw ();

