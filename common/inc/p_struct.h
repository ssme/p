/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : p_struct.h
*
* Author       : We           ; Siemens AG ANL A26PR; (09131) 7-25627
*
* Language     : C
*
* Description  : globale Daten fuer XCU
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/p_struct.h,v 1.1 2005/08/18 15:02:00 christian_l Exp $
*
\************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef P_STRUCT
#define P_STRUCT
/************************************************************************/


/*********************** Changes ****************************************\
*
* $Log: p_struct.h,v $
* Revision 1.2  2009/04/14 13:17:45  Yang Zhiming
* Collimator size increases by offset after release the Pre-contact
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
*
*    Rev /main/27   2001/11/12 09:00:00   toni 
* Globale Variable "G_Druckeroption" neu eingeführt
*
*    Rev /main/26   2001/03/12 13:00:00   toni 
* Globale Variable "G_HU_Simulator" fuer HU-Simulator neu eingeführt
*
*    Rev /main/25   1999/8/13 16:31:49   achim
* Globale Variable dfr_acqstoprequest eingebaut
*
*    Rev /main/24   1999/3/29 14:32:49   achim
* Service-Status fuer Fl-Top merken ( Charm 8975 ).
*
*    Rev /main/23   1998/10/29 15:52:4   achim
* Globale Variable um Screensaver, bei anstehendem Fehler zu sperren

* ( Charm 8904 ).
*
*    Rev /main/22   1998/2/3 12:58:58   achim
* Bei sBypass == AUS wird ein Dlprog.-Update nur durchgefuehrt,

* wenn wirklich ein sBypass mit Nachverarbeitung, bzw. Notbetrieb

* gesendet wurde.

*
*
*    Rev /main/21   1997/9/1 11:36:22   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
*
*    Rev /main/20   1997/8/1 9:58:40   achim
* Dl-Programme werden um die Memory-Nummern 41, 42, 43, fuer Kennlinie 4
* erweitert.
*
*    Rev \main\19   1997/4/25 15:13:50   achim
* Passwort-Struktur fuer History-Liste erweitert
 *
 *    Rev 1.17   12 Mar 1997 10:21:14   achim
 *
 * Datenstruktur fur erw_allg_anz_daten jetzt global fuer Screen-
 * saver.
 *
 *    Rev 1.16   25 Feb 1997 13:18:46   achim
 *
 * Globale Variable fuer Screen-Saver.
 *
 *    Rev 1.15   17 Dec 1996 08:37:44   achim
 *
 * In Structur fuer Passwort, String fuer aktuell-gueltiges Passwort
 * eingefuegt.
 *
 *    Rev 1.14   25 Nov 1996 09:32:14   achim
 * Anpassung der NV-Passwortstruktur an neue Datenbasis.
 *
 *    Rev 1.13   05 Jul 1996 10:52:52   achim
 *
 * Neue Dl-Memorynummer ( 7 ) fuer SPC.
 *
 *    Rev 1.12   13 Jun 1996 15:44:22   achim
 * Fuer Telegramm iInfoKomp Struktur mit 10 Pointern declariert.
 *
 *    Rev 1.11   03 Jun 1996 16:23:48   achim
 *
 * Globale Variable um das Telegramm iBinOk zu aktivieren.
 *
 *    Rev 1.10   31 May 1996 13:56:48   achim
 * Globale Variable fuer Bypass AUS Aktivierung.
 *
 *    Rev 1.9   09 Apr 1996 13:27:08   achim
 *
 * Passwort-Struktur global deklariert.
 * Neue Service-DL-Programme.
 *
 *    Rev 1.8   25 Nov 1995 13:22:34   achim
 * Defines fuer Dl-Memory-Nr. jetzt uchar.
 *
 *    Rev 1.7   21 Nov 1995 16:31:30   andrea
 *
 * Defines und Array fuer DL-Memory-Nr. eingebracht
 *
 *    Rev 1.6   10 Oct 1995 16:37:14   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.5   27 Sep 1995 15:18:28   achim
 * Fehlernummern fuer 7-Segmentanzeige erweitert und neue hinzugefuegt.
 *
 *    Rev 1.4   15 Sep 1995 12:11:22   hans
 * Variable raumlicht_zustand eingefuehrt, damit ein toggeln des Raumlichtes
 * moeglich ist.
 *
 *    Rev 1.3   01 Aug 1995 15:15:26   achim
 *
 * Variable fuer Raumlicht ( raumlicht_on_off ) und Kennung in Betriebs-
 * datenstruktur erweitert ( uchar betr_data_ok ).
 *
 *    Rev 1.2   26 Jun 1995 15:30:10   hans
 *
 * defines fuer 7-Segment-Anzeige eingefuegt.
 *
 *    Rev 1.1   04 May 1995 17:51:30   andrea
 *
 * srv_qt_apid und srv_qt_initkennung eingebracht
 *
 *    Rev 1.0   10 Aug 1994 09:49:20   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/
#include <konfig.h>
#include <crypt.h>

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

/*] END: common definitions */



#ifdef init_tsk
	#define XCU_GLOB
#else
	#define XCU_GLOB extern
#endif


XCU_GLOB	uchar	erstanlauf;

/*************************************************************\
*                                                             *
* Statusliste fuer Funktionseinheiten:                        *
*  Parameter FESTATUS                                         *
* BASIS_HW_TEST_AKTIV      ( uchar )  1                       *
* WARTEND                  ( uchar )  2                       *
* DLD_BEREIT               ( uchar )  3                       *
* DLD_HARDWARETEST_AKTIV   ( uchar )  4                       *
* DLD_HARDWARETEST_OK      ( uchar )  5                       *
* DLD_LOESCHEN_AKTIV       ( uchar )  6                       *
* DLD_LOESCHEN_OK          ( uchar )  7                       *
* DLD_PROGRAMMIERUNG_AKTIV ( uchar )  8                       *
* DLD_PROGRAMMIERUNG_OK    ( uchar )  9                       *
* APPLIKATIONSVORBEREITUNG ( uchar )  10                      *
* SERVICEMODE              ( uchar )  11                      *
* BETRIEBSBEREIT           ( uchar )  12                      *
* NICHT_FUNKTIONSFAEHIG    ( uchar )  13                      *
*                                                             *
* TURN OFF                 ( uchar ) 0x80 Maske fuer TURN OFF *
*                                                             *
\*************************************************************/
#define		STATUS_TURN_OFF (uchar) 0x80


/* Die Boot-SW-Version muss bei jeder Aenderung im Boot-EPROM */
/* Nachgezogen werden. Sie Wird auch im APPL_TASK_INIT_ARRAY eingetragen */
/* und dient zur ueberpruefung, ob die Boot-SW mit der Anwendersoftware */
/* kompatibel ist. */

typedef struct iservbetrieb_tag
			{
				uchar			betr_data_ok;
                ushort            betriebs_min;
				iservbetrieb_t1	betr_count;
				iservbetrieb_t2	strahler_dat [STRAHLER_MAX];
			}__attribute__ ((packed)) iservbetrieb_t;

XCU_GLOB iservbetrieb_t	*NV_betr_data;

XCU_GLOB	uchar	                G_HU_Simulator; 
XCU_GLOB	uchar	                G_NeueDruckerOption; 

XCU_GLOB	uchar					dfr_srv_aktiv;
XCU_GLOB	uchar					dfr_dlprg_update;
XCU_GLOB	uchar					dfr_acqstoprequest;
XCU_GLOB	uchar					raumlicht_on_off;
XCU_GLOB	uchar					raumlicht_zustand;

XCU_GLOB	uchar					screensave_gesp;
XCU_GLOB	ulong					screensave_cnt;
XCU_GLOB	uchar					bypass_aus_aktiv;
XCU_GLOB	uchar					ibinok_frei;

XCU_GLOB	uchar					fe_statusliste[FE_MAX];
XCU_GLOB	konfigurationsdaten_t	*konfig_dat;
XCU_GLOB	fe_fk_list_t			fe_fk_list;
XCU_GLOB	fk_sys_list_t			fk_sys_list;

XCU_GLOB ushort blend_offset [BLENDENANZAHL_MAX+1]; //for IconosM development,04/14, 2009, Yang Zhiming
 
//Yang Zhiming for MD+ development 2010-06-09
//add for digital fluoro and exposure adjustment
XCU_GLOB ushort Caf_aec_type[7]; //max AEC channel is 6
XCU_GLOB ushort Technic4Saufndaten[7]; 
//Yang Zhiming for MD+ development end
 
XCU_GLOB uchar org_aufn_technik; //if dRF technic exposure, Generator will wait for the high-voltage trigger from FLC


#define MAX_IINFOCOMP_BLOCKS 10
XCU_GLOB    ushort    iinfocomp_len[MAX_IINFOCOMP_BLOCKS];
XCU_GLOB    ushort    anz_iinfocomp_blocks;

typedef struct iinfocomp_t_tag
				{
					iinfocomp_t1 infohead;
					char		data[ANZAHLDATEN_MAX];
                } iinfocomp_t;

XCU_GLOB iinfocomp_t *iinfocomp_block[MAX_IINFOCOMP_BLOCKS];
XCU_GLOB iinfocomp_t first_iinfocomp_block;

XCU_GLOB ierwallganz_t1	erw_allg_anz_daten;

/* AP-ID und Initkennung, die bei 'iServQuit' erwartet werden */
/* Schnittstelle zwischen disk_r.c und srv_qt.c */
XCU_GLOB	uchar srv_qt_apid;
XCU_GLOB	uchar srv_qt_initkennung;


#define MAX_PASSWD_HISTORY	10		/* Max. Anzahl der jemals eingegebenen, gueltigen Passwoerter */
#define NV_PASSWD_OK		0x14	/* muss bei jeder Strukturaenderung von */
									/* nvram_passwd_t1 erhoeht werden, damit */
									/* die NVram-Informationen beim Hochlauf */
									/* erstmalig geloescht wird   !!!!!!	*/

typedef struct passwort_t_tag
				{
					char		data[PASSWORT_LENGTH];
                } passwort_t;

typedef struct nvram_passwd_tag
			{
				uchar			nv_data_ok;
				uchar			first_passwd_aktiv;
				long			delta_time;
				passwort_t		gueltiges_passwd;
				uchar			passwd_history_cnt;
				passwort_t		passwd_history[MAX_PASSWD_HISTORY];
				crypt_id		host_id;
				crypt_time		pwd_start_time;
				crypt_time		service_time;
				crypt_time		change_time;
				spasswort_t1	spasswort;
			} nvram_passwd_t1;
extern void tf_put_passwd(nvram_passwd_t1 *passwort);
extern void tf_get_passwd(nvram_passwd_t1 *passwort);


XCU_GLOB uchar					passwd_activ;

XCU_GLOB nvram_passwd_t1		*nvram_passwd;



/* Makros fuer 7-Segment-Anzeige */
#define	DRIVE_D_NOT_MOUNTED       	( uchar ) 0xF0
#define	WATCHDOG_RESET 				( uchar ) 0xF1
#define	HOST_ID_NOT_FOUND         	( uchar ) 0xF2
#define	SOFT_RESET                	( uchar ) 0xF3
#define POWER_FAIL_DISPLAY			( uchar ) 0xF4
#define	LOW_BATTERY					( uchar ) 0xF5
#define KONFIG_SET_TO_DEFAULTS		( uchar ) 0xF6
#define ERRLOG_CHECKSUM_FAILED		( uchar ) 0xF7
#define ROEDOK_CHECKSUM_FAILED      ( uchar ) 0xF8 /* = Betriebsdaten */
#define PASSWD_CHECKSUM_FAILED		( uchar ) 0xF9
#define	RLR_CHECKSUM_FAILED       	( uchar ) 0xFA


/* Makros fuer DFR-DL-Programme */
#define	DL_MEM_NR_1		(uchar) 1
#define	DL_MEM_NR_2		(uchar) 2
#define	DL_MEM_NR_3		(uchar) 3
#define	DL_MEM_NR_4		(uchar) 4
#define	DL_MEM_NR_6		(uchar) 6	/* Dl-Programm SPC */
#define	DL_MEM_NR_7		(uchar) 7	/* Dl-Programm SPC */
#define	DL_MEM_NR_8		(uchar) 8	/* Dl-Programm SPC */
#define	DL_MEM_NR_9		(uchar) 9
#define	DL_MEM_NR_11	(uchar) 11
#define	DL_MEM_NR_12	(uchar) 12
#define	DL_MEM_NR_13	(uchar) 13
#define	DL_MEM_NR_14	(uchar) 14
#define	DL_MEM_NR_16	(uchar) 16	/* Dl-Programm SPC */
#define	DL_MEM_NR_18	(uchar) 18	/* Dl-Programm SPC */
#define	DL_MEM_NR_19	(uchar) 19
#define	DL_MEM_NR_21	(uchar) 21
#define	DL_MEM_NR_22	(uchar) 22
#define	DL_MEM_NR_23	(uchar) 23
#define	DL_MEM_NR_31	(uchar) 31
#define	DL_MEM_NR_32	(uchar) 32
#define	DL_MEM_NR_33	(uchar) 33
#define	DL_MEM_NR_41	(uchar) 41
#define	DL_MEM_NR_42	(uchar) 42
#define	DL_MEM_NR_43	(uchar) 43
#define	DL_MEM_NR_71	(uchar) 71	/* Dl-Programm SPC */
#define	DL_MEM_NR_72	(uchar) 72	/* Dl-Programm SPC */
#define	DL_MEM_NR_73	(uchar) 73	/* Dl-Programm SPC */
#define	DL_MEM_NR_81	(uchar) 81	/* Dl-Programm SPC */
#define	DL_MEM_NR_82	(uchar) 82	/* Dl-Programm SPC */
#define	DL_MEM_NR_83	(uchar) 83	/* Dl-Programm SPC */
#define	DL_MEM_NR_91	(uchar) 91
#define	DL_MEM_NR_92	(uchar) 92
#define	DL_MEM_NR_93	(uchar) 93

/* Zuweisung der DFR-DL-Programme */
XCU_GLOB	uchar	dl_memory_nr[DL_MEM_ANZ];

/************************************************************************/
/* Ende v. Wiedereintrittssicherung */
#endif

