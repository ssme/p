/* Compilation unit ****************************************************\
*
* Product      : XCU XRAY Communication Unit
*
* Name         : acsendis.h
*
* Author       : Kapp   ; Siemens AG RXE5; (09131) 846543
*
* Language     : C
*
* Description  : Prototypendefinition fuer acsendis.c
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/acsendis.h,v 1.1 2005/08/18 15:02:00 christian_l Exp $
*
\************************************************************************/


/*********************** Changes ****************************************\
*
* $Log: acsendis.h,v $
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/4   1997/9/1 11:38:52   hans 
* uint durch ushort und sint durch sshort ersetzt 
* wegen neuem RMOS
 * 
 *    Rev 1.2   07 Nov 1996 15:54:36   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der 
 * XCU.
 * 
 *    Rev 1.1   10 Oct 1995 16:33:14   susi
 * Hazard-Classification und Copyright eingefuegt.
 * 
 *    Rev 1.0   10 Aug 1994 09:22:22   susi
 * Initial revision.
*
\************************************************************************/

#ifndef acsendis
  extern void far enable_acs (void);
  extern void disable_acs (void);
#endif     


