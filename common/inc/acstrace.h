/* Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : acstrace.h
*
* Author       : Kapp   ; Siemens AG RXE5; (09131) 846543
*
* Language     : C
*
* Description  : Prototypendefinition fuer acstrace.c
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/acstrace.h,v 1.1 2005/08/18 15:02:00 christian_l Exp $
*
\************************************************************************/


/*********************** Changes ****************************************\
*
* $Log: acstrace.h,v $
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/5   1997/9/1 11:38:42   hans 
* uint durch ushort und sint durch sshort ersetzt 
* wegen neuem RMOS
 * 
 *    Rev 1.3   07 Nov 1996 15:54:58   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der 
 * XCU.
 * 
 *    Rev 1.2   10 Oct 1995 16:33:36   susi
 * Hazard-Classification und Copyright eingefuegt.
 * 
 *    Rev 1.1   27 Sep 1995 16:06:48   udo
 * 
 * Unnoetige Strukturen geloescht
 * 
 *    Rev 1.0   10 Aug 1994 09:23:42   susi
 * Initial revision.
*
\************************************************************************/

#define MAX_TRACEBUF_ENTRY 48

enum TRACE_MODE
  {
  TRACE_SEND,
  TRACE_RECEIVE
  };
  
#ifndef acstrace
  extern short int far trace_init (void);
  extern void trace_write (unsigned int trace_mode, acs_obj_header_t* tel_hdr_p);
#endif     

