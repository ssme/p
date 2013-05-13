/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : error.h
*
* Author       : S. Klar        ; Siemens AG ANL A26PR; (09131) 7-25793
*
* Language     : C
*
* Description  : Makros zur Fehlerbehandlung
*
* PVCS-Header  : $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/error.h,v 1.5 2006/11/22 11:59:18 alexander_m Exp $
*
\************************************************************************/
/* Gegen Wiedereintritt sichern */
#ifndef ERROR
#define ERROR
/************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: error.h,v $
* Revision 1.5  2006/11/22 11:59:18  alexander_m
* Fehlernummernband erweitert
*
* Revision 1.4  2006/10/04 09:36:27  michael
* *** empty log message ***
*
* Revision 1.3  2006/07/17 15:08:45  michael
* AXN Client XCU mu� laufen befor andere Axnclients angemeldet werden
*
* Revision 1.2  2005/11/23 09:58:23  michael
* se_xcs2can task
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
*
*    Rev /main/18   2003/12/03
* Powerdown-Fehler 46 definiert.
*
*    Rev /main/17   2000/04/17 10:00:00   toni
* Defines f�r Arcnet-Fehler erweitert (Charm ?????).
*
*    Rev /main/16   1999/10/26 14:30:47   andrea
* Define f�r Battery fail - Anzeige (36) eintragen (Charm 7839)
*
*    Rev /main/15   1999/3/3 13:42:40   achim
* Fehlernummer fuer Power-Fail (Charm 8950).
*
*    Rev /main/14   1999/1/22 12:54:55   achim
* Fehlernummern als Einschaltmeldung der XCU, fuer SPC Start und

* Ende und fuer Arcnet-Fehler.
*
*    Rev /main/13   1997/9/1 11:37:45   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.11   04 Apr 1997 15:41:18   udo
 * Fehlernummern von IPC durch fdbs ersetzt.
 *
 *    Rev 1.10   12 Nov 1996 11:55:06   gaby
 * Funktion int_fehler auf far geaendert wegen Speicherprblemen beim Booten.
 *
 *    Rev 1.9   16 Jul 1996 15:24:16   gaby
 *
 * Globale Fehlernummer fuer Oeffnen von Directorys eingefuegt.
 *
 *    Rev 1.8   14 Nov 1995 15:05:24   udo
 * Define fuer Use-Anzeige U_ORGPROG_NOT_FOUND eingebaut.
 *
 *    Rev 1.7   10 Oct 1995 16:34:40   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.6   22 May 1995 16:55:02   hans
 * Defines fuer Fehlernummern der USE-Anzeigen eingefuegt.
 *
 *    Rev 1.5   15 May 1995 10:30:46   udo
 * Fehlernummern fuer Disk-Task auf 950 gelegt.
 * Fehlernummern fuer Hochlauf-Task auf 850 gesetzt.
 *
 *    Rev 1.4   20 Apr 1995 17:39:34   udo
 * USER_E_MIN eingefuegt, Service-Fehlernummern auf 100 gesetzt
 *
 *    Rev 1.3   20 Dec 1994 16:29:58   udo
 * Fehlerbereich fuer Aufnahmetask um 50 erhoeht
 *
 *    Rev 1.2   13 Dec 1994 11:49:32   achim
 *
 * Define fuer SYSERROR(x) geaendert (es wird immer 'int_fehler' aufgerufen)
 *
 *    Rev 1.1   07 Oct 1994 12:19:04   susi
 * neue Defines fuer RLR, DISK, DFR, Trace, ...
 *
 *    Rev 1.0   10 Aug 1994 09:35:34   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/
/* Fkt in Modul error.c (im Boot-Teil: Dir.: USW_BOOT): */
//extern void far int_fehler( ushort fehlernr, uchar kategorie,
//				uchar fk, uchar task_id,
 //               char* modul, ushort zeilennr);

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

/*] END: common definitions */

#define SYSERROR(x) int_fehler( x, (uchar)_THISTASK_, (char *)_THISFILE_,(ushort)__LINE__)
//#define SYSERROR(x) int_fehler( x, (uchar)_THISTASK_, (char *)__FILE__,(ushort)__LINE__)


#define USE_SET		5
#define USE_RESET	0



/*----------------------------------------------------------------------*/
/* DECLARATION: Fehlernummernbereiche pro TASK                          */
/*----------------------------------------------------------------------*/

/* Fehlernummern: 0...9999 */
/* -> 10000 Nummern f. ca. 20 Task -> 500 Nummern pro Task */

#define DLD_E_MIN			 10				/* 0 = OK / kein Fehler */
#define FDBS_E_MIN			 50
#define BVFS_E_MIN			1000
#define GG_E_MIN			1500
#define KS_E_MIN			2000
#define SE_E_MIN			2500
#define SYSW_E_MIN			3000
#define ORGW_E_MIN			3500
#define AUFN_E_MIN			4000
#define DL_E_MIN			5000
#define SM_E_MIN			5500
#define SRV_E_MIN			6000			/* f. Service 1000 Fehlernr.! */
#define ERR_E_MIN			7000
#define ALARM_E_MIN			7500
#define RLR_E_MIN			8000
#define HOCHL_E_MIN			8500
#define DFR_E_MIN			9000
#define DSK_E_MIN			9500


/*----------------------------------------------------------------------*/
/* DECLARATION: allg. Fehlernummern werden auf Min-Wert v. Bereich add. */
/*----------------------------------------------------------------------*/

/* !!! Bitte bei Fehlernummern fuer Individuelle Task-Fehler (entspr. */
/* ( Headerfile xxx_tsk.h) Bereich 0..19 fuer diese Fehlernummern */
/* aussparen!!*/

#define E_OS_CALL			0			/* Betriebssystemaufruf ging schief */

#define E_IPCINIT			1			/* Fehler bei Initialisierung des Telegrammempfangs*/
#define E_IPCRECV			2			/* Fehler beim Empfang eines Telegr. */
#define E_IPCSEND			3			/* Fehler beim Senden eines Telegr. */

#define E_NO_TELFKT			4			/* keine Bearbeitungsfkt. zu Telegr. */
#define E_TELPARAM			5			/* ungueltige Telegrammparameter */

#define E_ALARMCR			6			/* Fehler beim Kreieren eines Alarmtelegr. */
#define E_ALARMDEL			7			/* Fehler beim Loeschen eines Alarmtelegr. */
#define E_TIMEOUT			8			/* Timeout abgelaufen */

#define E_MEMORY			9			/* nicht genuegend Speicher */

#define E_KONFIGDAT			10			/* falsche Konfigurationsdaten */

#define E_FKTPARAM			11			/* ungueltige Funktionsparamter */

#define	E_OPEN_DIR			12          /*Fehler beim oeffnen oder erstellen eines Directorys*/

#define E_USER_MIN			20			/* erster vom Anwender verwendbarer Fehleroffset */

#define E_ARCNET			30			/* Basis fuer Arcnet-Fehler */

#define E_BATT_FAIL         36          /* Fehlerausgabe wenn Battery leer ist */
                                        /* wird als BEHEB_FEHLER (2) angezeigt */
#define E_POWER_FAIL		39			/* Fehlerausgabe 4 sec nach Power-Fail */
										/* alle 5 Fehlereintraege als Warnung */
#define XCU_HOCHL			40			/* Einschaltmeldung der XCU */
#define	SPC_ON				41			/* Einschaltmeldung vom SPC */
#define	SPC_OFF				42			/* Abschaltmeldung vom SPC */
#define E_POWER_FAIL_ANZ    48          /* Anzeigefehler Power Fail */


/* Fehlerausgaben */

#define ERR_ARCNET_REKONF_INT	(ushort) (E_ARCNET),      1, 1		/* Warn.Nr.: 30 */
					 /* Fehlernummern 31-33 sind verbrannt (Downloadtask: HD-Error) */
#define ERR_ARCNET_TEL_LNG		(ushort) (E_ARCNET  + 4), 1, 1		/* Warn.Nr.: 34 */
#define ERR_ARCNET_TEL_MODE		(ushort) (E_ARCNET  + 5), 1, 1		/* Warn.Nr.: 35 */
#define ERR_BATT_FAIL			(ushort) (E_BATT_FAIL),   2, 1		/* Err.Nr.:  36 */
#define ERR_ARCNET_MODEM_AKT	(ushort) (E_ARCNET  + 7), 1, 1		/* Warn.Nr.: 37 */
#define ERR_ARCNET_INLIST_LNG	(ushort) (E_ARCNET  + 8), 1, 1		/* Warn.Nr.: 38 */
#define ERR_POWER_FAIL			(ushort) (E_POWER_FAIL),  1, 1		/* Warn.Nr.: 39 */
#define XCU_START				(ushort) (XCU_HOCHL),     1, 1		/* Warn.Nr.: 40 */
#define SPC_START				(ushort) (SPC_ON),        1, 1		/* Warn.Nr.: 41 */
#define SPC_ENDE				(ushort) (SPC_OFF),       1, 1		/* Warn.Nr.: 42 */
#define ERR_ARCNET_NO_PARTNER	(ushort) (E_ARCNET + 13), 1, 1		/* Warn.Nr.: 43 */
#define ERR_ARCNET_DOUBLE_ID	(ushort) (E_ARCNET + 14), 1, 1		/* Warn.Nr.: 44 */
#define ERR_ARCNET_PARITY_CHK	(ushort) (E_ARCNET + 15), 1, 1		/* Warn.Nr.: 45 */
#define ERRANZ_POWER_FAIL       (ushort) E_POWER_FAIL_ANZ,2, 1      /* Err.Nr.: 46 */


/************************************************************************/
/* Fehlermakros fuer USE-Anzeigen                                       */
/************************************************************************/

#define COMPONENT_TURN_OFF	7
#define DEVICE_NOT_READY	8
#define U_ORGPROG_NOT_FOUND	9

/************************************************************************/
/* Ende v. Wiedereintrittssicherung */
#endif




