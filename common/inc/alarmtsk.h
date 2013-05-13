/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product		: XCU XRAY Communication Unit
*
* Name			: alarmtsk.h
*
* Author		: Janschitz      ; Siemens AG ANL A426PR; (09131) 7-25627
*
* Language		: C
*
* Description	: Prototypdefinitionen f. alarmtsk.c
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/alarmtsk.h,v 1.1 2005/08/18 15:02:00 christian_l Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: alarmtsk.h,v $
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/5   1997/9/1 11:38:32   hans 
* uint durch ushort und sint durch sshort ersetzt 
* wegen neuem RMOS
 *
 *    Rev 1.3   07 Nov 1996 16:59:58   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.2   15 Jan 1996 15:49:18   hans
 *
 * Kommentare im Kopf geaendert.
 *
 *    Rev 1.1   10 Oct 1995 16:33:56   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.0   10 Aug 1994 09:24:58   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/
/*[ Function ************************************************************\
*
* Name        : create_alarm
*
* Description : Erzeugt einen Alarm. Nach der abgelaufenen Zeit wird eine
*               Message losgeschickt, die mit message-Pointer uebergeben
*               wird. Die Message darf vom Sender nicht veraendert werden
*               bis der Alarm empfangen oder mit delete_alarm geloescht
*               wird. Im IPC-Header muss die Receiver-ID angegeben werden,
*               damit die Message nicht an alle geschickt wird.
*
* Parameters  : time_unit: (Makros in svc.h)
*               time_count: Multiplikator fuer time-unit ( !!! max 255 !!! )
*               message: Zeiger auf message , die mit IPC_Send verschickt
*                       werden kann. (! muss static sein!)
*				tid		: Timer-ID fuer Alarm Loeschen
*
* Return      :  0: Alarm kann nicht erzeugt werden
*               >0: Nummer des Alarms. muss bei delete_alarm angegeben
*                                      werden
*
\************************************************************************/

extern ushort far create_alarm (ushort time_unit, ushort time_count, IPC_TransBuf_t *message, tid_t tid);

/*[ Function ************************************************************\
*
* Name        : delete_alarm
*
* Description : loescht einen mit create_alarm erzeugten Alarm.
*
* Parameters  : alarm_nummer von create_alarm
*
* Return      : OK: Alarm konnte geloescht werden.
*               NOT_OK: Alarm konnte nicht geloescht werden.
*
\************************************************************************/
extern  ushort far delete_alarm( tid_t tid);

