/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : rw_disk.h
*
* Author       : Seitz        ; Siemens AG ANL A451SR; (09131) 7-25424
*
* Language     : C
*
* Description  : allgemeine Funktionsdeklaration
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/rw_disk.h,v 1.1 2005/08/18 15:02:00 christian_l Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: rw_disk.h,v $
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/7   1997/9/1 11:35:53   hans 
* uint durch ushort und sint durch sshort ersetzt 
* wegen neuem RMOS
 *
 *    Rev 1.5   07 Nov 1996 15:56:56   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.4   03 May 1996 14:04:06   gaby
 * Prototyp der Subkennung von uchar -> ushort in read_initblock_direkt.
 *
 *    Rev 1.3   09 Feb 1996 13:01:24   gaby
 * Keine Aenderung seit letztem Branch. Nur putten aufs Ref.
 *
 *    Rev 1.2.1.0   01 Dec 1995 16:13:04   gaby
 *
 * Deklaration fuer Funktion write_initblock_direct Prototyp
 * fuer subkennung von uchar auf ushort geaendert.
 *
 *    Rev 1.2   10 Oct 1995 16:38:32   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.1   24 Jun 1995 15:16:34   andrea
 *
 * Ueberarbeitung nach Code-Review.
 *
 *    Rev 1.0   10 Aug 1994 09:55:04   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/

#include <error.h>

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

extern ushort far read_initblock_direkt (uchar, uchar, ushort, int_iinit_t1*);
extern ushort far write_initblock_direkt (uchar, uchar, ushort, int_iinit_t1*);
extern void far write_initblock_fuer_XCU_APID (void);

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

/*] END: common definitions */
