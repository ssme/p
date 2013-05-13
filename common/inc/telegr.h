/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : telegr.h
*
* Author       : Weigelt     ; Siemens AG ANL A 426 PR; (09131) 7-25627
*
* Language     : C
*
* Description  : Telegrammdefinitionen, die nicht im xcsobj.h stehen
*				 (XCU-interne Telegr. & Typedefs fuer Telegr. mit
*													variabler Laenge)
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/telegr.h,v 1.15 2007/06/26 11:34:42 hans Exp $
*
\************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef TELEGR
#define TELEGR
/************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: telegr.h,v $
* Revision 1.16  2008-6-18   Wuhuihui
* add struct define ikollision_t.
*
* Revision 1.15  2007/06/26 11:34:42  hans
* Telegramm int_sorgdaten definiert
*
* Revision 1.14  2007/05/23 08:44:04  mesut
* Telegramm IDELTADAPDATEN hinzugefügt
*
* Revision 1.13  2006/12/06 12:20:15  michael
* *** empty log message ***
*
* Revision 1.12  2006/12/01 15:54:50  michael
* Interne Telegramme
*
* Revision 1.11  2006/11/30 15:28:31  michael
* Internes Telegramm für Generatorfehlermeldungen
*
* Revision 1.10  2006/11/09 09:37:51  alexander_m
* *** empty log message ***
*
* Revision 1.9  2006/10/24 09:19:08  reinhold
* Die Telegram-ID von INT_LIST_VAR auf  0x0785 geändert
*
* Revision 1.8  2006/10/24 08:25:56  reinhold
* Die Struktur fürs interne Telegramm INT_LIST_VAR eingefügt
*
* Revision 1.7  2006/08/24 12:49:23  michael
* KK_ABWAHL defined in xcsobj.h
*
* Revision 1.6  2006/07/31 09:16:03  alexander_m
* INT_ERR_WRITE_HDD hinzugefuegt.
* INT_ERR_RD_QUIT entfernt.
*
* Revision 1.5  2006/04/27 07:18:36  hans
* sOrgandaten zu sOrgDaten umbenannt
*
* Revision 1.4  2006/04/27 07:08:02  hans
* Neues Organprogramm sOrganDaten implementiert
*
* Revision 1.3  2006/03/10 17:44:06  christian_l
* Wrong definition of TIMEOUT.
*
* Revision 1.2  2006/02/13 15:03:52  christian_l
* RMOS-Changes made in QNX-Version
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
*
*    Rev /main/51   2005/02/23   hans
* Internes Telegramm fï¿½r int_defaultsys_anwahl definiert
*
*    Rev /main/50   2003/05/26 17:33:00   hans
*  internes Telegramm INT_IAUFNDATEN angelegt
*
*    Rev /main/49   2000/02/29 12:30:00   toni
* Internes Telegramm "INT_DL_PRG_UPDATE" neu eingefï¿½gt (Charm 9625)
*
*    Rev /main/48   1999/10/14 10:4:48   andrea
* Telegramm 'int_set_dl_orgdat' um den Parameter 'Technik' erweitert. (Charm 8498)
*
*    Rev /main/47   1998/2/24 15:26:29   gaby
* Timeout fuer Warten auf Antwort fuer image acquisition request von 150ms auf 600ms erhohet, da bei Aufnahme im Offset noch image-data-stop kommt und die Antwort deshalb laenger dauert.
*
*    Rev /main/46   1998/2/17 15:7:33   andrea
* Parameter fuer Telegramm 'int_rDoseAnz' geaendert (Charm 7800)
*
*    Rev /main/45   1998/2/3 13:5:12   andrea
* Fuer die Anzeige der Restdosis ein neues Telegramm 'int_rDoseAnz' eingebaut. (Charm 7800)
*
*    Rev /main/44   1998/1/29 11:15:1   gaby
* Aenderung vom Codereview FD: Telegramm-Nr.-Defines auf ushort casten.
*
*    Rev /main/43   1997/11/18 15:7:8   gerhard
* Fehlernummern fuer Loeschen von RADIS-Dateien geaendert.
*
*    Rev /main/42   1997/11/12 14:48:18   gaby
* Fuer Possys und Nachlauf (FD)  neues Telegramm  INT_SET_GG_POS eingebaut.
*
*    Rev /main/41   1997/11/3 11:20:41   gaby
* Aenderungen in Defines fuer 2. Version FD.
*
*    Rev /main/40   1997/9/12 9:3:49   gerhard
* Neue defines fuer FD.
*
*    Rev /main/39   1997/9/11 19:25:32   susi
* Filter fuer Aufnahme und DL muessen getrennt angezeigt
* werden. Dies soll letztenendes im Telegramm iDFRAllgAnz
* passieren. Die SM-Task teilt die Anzeigen im Telegr.
* int_FilterAnz mit.
* (Charm 8189)
*
* Telegr-Def. fuer variables Telegr. sDFRDLProg., das SM-Task empfaengt
* als Kriterium fuer eine DLProg-Wahl. Das DL-Prog. enthaelt die Angabe fuer
* den DL-Filter.
* (Charm 8380)
*
*    Rev /main/38   1997/9/1 11:35:14   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
*
*    Rev /main/37   1997/8/28 12:46:56   gerhard
* Neue defines fuer Positivquittung an RADIS.
*
*    Rev /main/36   1997/8/26 16:51:28   gerhard
* Neue defines f. Datentransfer XCU <-> FD.
*
*    Rev /main/35   1997/8/26 14:31:28   gaby
* Telegramme und Defines fuer FD definieren.
* Fuer FD-Lastenheft-Version vom 29.07.96.
*
*    Rev /main/34   1997/8/7 14:13:59   gaby
* Head-Kennung fuer FD_INT_DAT von fd_tsk.h  nach Telegr.h verlegt.
*
*    Rev /main/33   1997/7/1 13:44:43   achim
* Neues Telegramm: int_iDfrStatus wegen Bearbeitung von sDfrAcqStopRequest.
*
*    Rev \main\32   1997/4/17 10:50:42   gaby
* Fuer IKOS 225: Define UEBERNAHMEKENNL_MIN von 1 auf 0 geaendert.
 *
 *    Rev 1.30   25 Mar 1997 12:51:00   gaby
 * Aenderungen fuer FD-Detektor eingebracht.
 *
 *    Rev 1.29   13 Mar 1997 09:34:16   achim
 * Telegramm int_ADRFilter aufgebohrt:
 * Es wird nicht nur der Filter fuer die Aufnahme (ADR) mitgeteilt,
 * sondern auch stets der aktuelle Filter (fuer Wasserwert-Rechnung).
 * Daher wurde das Telegramm auch umbenannt in int_SEFilter.
 * (Ikos 209)
 *
 *    Rev 1.28   25 Feb 1997 11:34:36   susi
 * Einarbeitung der Code-Review-Ergebnisse vom 12.2.97:
 * Neues internes Telegramm Int_ADRFilter;
 *
 *    Rev 1.27   23 Jan 1997 21:11:36   susi
 * Telegramm int_Schichtzeit aufgebohrt um schichtzeitabhaengige
 * Schwaerzungskorrektur.
 * (Ikos-Nr. 157)
 *
 *    Rev 1.26   27 Nov 1996 17:58:22   susi
 * 2 neue interne Telegramme wegen Implementierung Filterautomatik:
 * - INT_FILTAUTO
 * - INT_SFILTER
 *
 *    Rev 1.25   25 Nov 1996 17:51:56   hans
 *
 * Syntaxfehler behoben.
 *
 *    Rev 1.24   25 Nov 1996 09:33:34   achim
 *
 * Neues Telegramm: int_sdldaten
 * Anpassung an neue Datenbasis.
 *
 *    Rev 1.23   07 Nov 1996 15:59:34   gaby
 * Telegramme fuer Geraeteprogrammdaten eingefuegt.
 *
 *    Rev 1.22   10 Sep 1996 15:19:32   gaby
 * Telegramm-Id fuer Test_ApsDaten um 1 erhoeht.
 *
 *    Rev 1.21   16 Jul 1996 15:38:16   achim
 *
 * Neues Telegramm fuer die WW-Berechnung von der Dl-Task (int_idldaten).D
 *
 *    Rev 1.20   12 Jul 1996 17:14:14   michael
 *
 * Erweiterung um Unit Infrarotfernbedienung
 *
 *    Rev 1.19   26 Jun 1996 15:15:12   achim
 *
 * Neues Telegram: int_bvfs_dlfreq fuer BVFS-Task von Dl-Task.
 *
 *    Rev 1.18   03 May 1996 14:13:44   gaby
 *
 * Neu: INT_PERI; subkennung uchar -> ushort; Testtelegramme entfernt.
 *
 *    Rev 1.17   09 Apr 1996 14:58:46   gaby
 * SSERVBETRIEBQUIT eingefuegt.
 *
 *    Rev 1.16   15 Feb 1996 17:33:06   achim
 * Telegramm int_aufn_vorb_ok eingebaut.
 *
 *    Rev 1.15   15 Jan 1996 15:23:28   hans
 * Telegramm INT_FEHLERANZ eingebaut.
 *
 *    Rev 1.14   11 Dec 1995 17:01:50   udo
 * Telegramm int_bypass eingefuegt
 *
 *    Rev 1.13   14 Nov 1995 15:33:12   susi
 * variable Telegrammdefinition f. sHTBCmd
 *
 *    Rev 1.12   19 Oct 1995 17:57:32   susi
 * * Neue variable Telegrammedefinitionen:
 * - iDFRNahBed
 * - sDFRNahBed
 * - iBlendenData
 * - sDFRBlende
 * - sDFRBlendenData
 *
 * * Telegramm INT_SYSW_REQ eingef?gt
 * * Defines f. Parameter Futuse jetzt in xcsobj.h
 *
 *    Rev 1.11   17 Aug 1995 16:54:44   andrea
 * Define f. Futuse f. Telegramm 'iOrganAnz' eingebracht. (Charm 4233)
 *
 *    Rev 1.10   19 Jul 1995 15:34:02   gerhard
 * ï¿½berfl?ssige Telegramme entfernt.
 * Deklaration von int_Zoom verï¿½ndert.
 *
 *    Rev 1.9   13 Jul 1995 16:14:34   andrea
 *
 * WW_Abgleich von 'ushort' in 'sshort' umgeaendert
 *
 *    Rev 1.8   24 Jun 1995 15:11:56   achim
 *
 * Macros fuer Telegramm int_err_rd_wr umbenannt.
 *
 *    Rev 1.7   04 May 1995 17:40:12   gerhard
 * Makros f?r Dick-/D?nn-Korrektur eingebracht.
 * iFBVA ist entfallen.
 *
 *    Rev 1.6   13 Apr 1995 10:13:46   hans
 * Anzhldaten von Justage und Testtelegrammen auf ANZAHLDATEN_MAX erhoeht.
 *
 *    Rev 1.5   12 Apr 1995 14:37:28   gerhard
 * Define FE_NOT_OK und KK-defines eingebracht.
 *
 *    Rev 1.4   16 Jan 1995 17:40:54   andrea
 * Typdefinition fuer 'sfkrekonfig' eingefuegt
 *
 *    Rev 1.3   13 Dec 1994 12:25:22   andrea
 *
 * Text geaendert
 *
 *    Rev 1.2   13 Dec 1994 12:00:04   achim
 *
 * Neue Telegrammdefinitionen, z. B. INT_DOSISL, INT_DOSIS_AUFN
 *
 *    Rev 1.1   07 Oct 1994 12:17:04   susi
 * Telegrammdefinitionen, die in xcsobj.h noch nicht definiert sind
 *
 *    Rev 1.0   10 Aug 1994 10:03:08   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*--------------------------------------------------------------------- */
#include "gbl/axcs_typedef.h"
#include "gbl/xcsobj.h"
/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

/*] END: common definitions */


/*[ Function ************************************************************\
*
* Name        : telegr.h
*
* Description : alle Telegrammdefinitionen des AC
*
* Parameters  :
*
* Return      :
*
\************************************************************************/


/*****   Allg. Defines    ******/
/*******************************/

#define NOT_FOUND		0xFFFF
#define SEND_RECV_ERR	-1
#define TIMEOUT		(ZERO_SET + OVFL_SET)
#define NO_WAIT		0
#define WAIT			1
#define ON			1
#define OFF			0
#define TOUT_ENDE		0

/************************************************************************/
/* Allg. Min-/Maxwerte 													*/
/************************************************************************/

#define FE_MAX			25
#define FE_MIN			0
#define FK_MIN			1
#define FK_MAX			8
/************************************************************************/
/*  Makros f. externe Telegramme; !!!! fehlen i. xcsobj.h -> sollten
												eigentlich da rein !!!! */
/************************************************************************/

#define FOLIEN_MAX		2
#define FOLIEN_MIN		0

#define SCHICHTPROG_MAX	10
#define SCHICHTPROG_MIN	1

/* Max. Werte fuer Geraete-Organprogrammdaten */
#define GERBREMS_PARAM_MAX		9	/* 0-9 */
#define GERBLENDEN_PARAM_MAX		16	/* 1-16 */

/************************************************************************/
/* Spezielle AP-ID's 													*/
/************************************************************************/

#define SPC_APID		(uchar)	0x0F1
#define GEN_APID		(uchar)	0x050
#define FD_1_APID		(uchar)	0x011  /* APID fuer FD-Detektor an COM1 */
#define FD_2_APID		(uchar)	0x012  /* APID fuer FD-Detektor an COM2 */

/* NOCH NICHT BEKANNTGEGEBNE AENDERUNGSWUENSCHE ( an Hrn. Kapp ):     */
/*-------------------------------------------------------------------*/

/* zusaetzl. Defines f. sBedOrg.Region */
//#define KK_ABWAHL		0
#define KK_ORGAN		32

/* Defines f?r iOrganAnz.TranspKorr */
#define TK_SEHR_DUENN	-2
#define TK_DUENN		-1
#define TK_NORMAL		 0
#define TK_DICK		 1
#define TK_SEHR_DICK	 2

/************************************************************************/
/*  TELEGRAMME, DIE IN xcsobj.h NOCH FEHLEN                            */
/************************************************************************/


/* Parameter RICHTUNG */
#define POSITIVE_RICHTUNG ( sshort )  1
#define NEGATIVE_RICHTUNG ( sshort ) -1


/* NOCH NICHT BEKANNTGEGEBNE AENDERUNGSWUENSCHE ( an Hrn. Kapp ):     */
/* seit 5.3.93 */
/*-------------------------------------------------------------------*/


/* (war noch im vorher abgelieferten xcsobj.h !!!) */

/* Werte fuer Uebernahmekennl. (sBedOrg) */
#define  UEBERNAHMEKENNL_MIN		(uchar)		0
#define  UEBERNAHMEKENNL_MAX		(uchar)		100

/* Wert fuer AutoFokus: */
/* (orientiert an Werte f. Parameter FOKUS aus xcsobj.h: */
/* kl. Fokus: 1 */
/* gr. Fokus: 2 */
/* 3. Fokus: 3 ) */
#define	 AUTOFOKUS		4

/************************************************************************/
/*  Typedefs f. externe, variabel lange Telegramme                      */
/************************************************************************/

/* Telegramm iBlende */
/*-------------------*/
typedef struct	iblende_t_tag
	{
		iblende_t1 fest_dat;
		iblende_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) iblende_t;

/* Telegramm sBlendenpos */
/*-----------------------*/
typedef struct	sblendenpos_t_tag
	{
		sblendenpos_t1 fest_dat;
		sblendenpos_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) sblendenpos_t;

/* Telegramm sVerstellung */
/*-----------------------*/
typedef struct	sverstellung_t_tag
	{
		sverstellung_t1 fest_dat;
		sverstellung_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) sverstellung_t;

/* Telegramm sLimit */
/*-----------------------*/
typedef struct	slimit_t_tag
	{
		slimit_t1 fest_dat;
		slimit_t2 vario_dat[IRIS];		/* Iris letze relevante Limit-Blende */
	}__attribute__ ((packed)) slimit_t;


/* Telegramm ikassdaten */
/*-------------------*/
typedef struct ikassdaten_t_tag
	{
		ikassdaten_t1	kassdat_head;
		ikassdaten_t2	teilg_q_l [TEILANZAHL_MAX];
		ikassdaten_t3	kennung;
	}__attribute__ ((packed)) ikassdaten_t;



/* Telegramm ikassanz */
/*-------------------*/
typedef struct ikassanz_t_tag
	{
		ikassanz_t1		kassanz_head;
		ikassanz_t2		erltlg [ERLTEILG_MAX];
	}__attribute__ ((packed)) ikassanz_t;


/************************************************************************/
/*  externe, variabel lange Telegramme fuer den Service                 */
/************************************************************************/

#define ERR_DAT_MAX		400

/* Telegramm ijustagecmd */
/*-------------------*/
typedef struct ijustagecmd_t_tag
	{
		ijustagecmd_t1	ijust_head;
		ijustagecmd_t2	just_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) ijustagecmd_t;


/* Telegramm sselectcomp */
/*-------------------*/
typedef struct  sselectcomp_t_tag
	{
		sselectcomp_t1	sel_comp_head;
		sselectcomp_t2	sel_ipid [FE_MAX];
	}__attribute__ ((packed)) sselectcomp_t;


/* Telegramm sservjustcmd */
/*-------------------*/
typedef struct sservjustcmd_t_tag
	{
		sservjustcmd_t1	serv_just_head;
		sservjustcmd_t2	just_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) sservjustcmd_t;


/* Telegramm sservtestcmd */
/*-------------------*/
typedef struct sservtestcmd_t_tag
	{
		sservtestcmd_t1	serv_test_head;
		sservtestcmd_t2	test_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) sservtestcmd_t;


/* Telegramm sjustagecmd */
/*-------------------*/
typedef struct sjustagecmd_t_tag
	{
		sjustagecmd_t1	sjust_head;
		sjustagecmd_t2	just_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) sjustagecmd_t;


/* Telegramm iservjustcmd */
/*-------------------*/
typedef struct iservjustcmd_t_tag
	{
		iservjustcmd_t1	serv_just_head;
		iservjustcmd_t2	just_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) iservjustcmd_t;


/* Telegramm itestcmd */
/*-------------------*/
typedef struct itestcmd_t_tag
	{
		itestcmd_t1	itest_head;
		itestcmd_t2	test_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) itestcmd_t;


/* Telegramm iservtestcmd */
/*-------------------*/
typedef struct iservtestcmd_t_tag
	{
		iservtestcmd_t1	serv_test_head;
		iservtestcmd_t2	test_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) iservtestcmd_t;


/* Telegramm stestcmd */
/*-------------------*/
typedef struct stestcmd_t_tag
	{
		stestcmd_t1	stest_head;
		stestcmd_t2	test_daten [ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) stestcmd_t;


/* Telegramm iserverrorlog */
/*-------------------*/
typedef struct iserverrorlog_t_tag
	{
		iserverrorlog_t1	error_head;
		iserverrorlog_t2	error_daten [ERR_DAT_MAX];
	}__attribute__ ((packed)) iserverrorlog_t;

#if 0
/************************************************************************/
/*  externes Telegramm fuer die erweiterte Kassettenanzeige             */
/************************************************************************/

#define BILD_PKT_MAX	144
typedef struct ierwkassanz_t_tag
	{
		ierwkassanz_t1	teilg;
		ierwkassanz_t2	teilgf[BILD_PKT_MAX];
	}__attribute__ ((packed)) ierwkassanz_t;


/************************************************************************/
/*  SDLDDATA                                  XCU Object-structure      */
/************************************************************************/
/* Download */

typedef struct sdlddata_t_tag
	{
		sdlddata_t1 head;
		sdlddata_t2 data[ANZAHLDATEN_MAX];
	}__attribute__ ((packed)) sdlddata_t;

/************************************************************************/
/*  SFKREKONFIG                               XCU Object-structure      */
/************************************************************************/

typedef struct sfkrekonfig_t_tag
	{
		sfkrekonfig_t1 head;
		sfkrekonfig_t2 tail;
	}__attribute__ ((packed)) sfkrekonfig_t;


/************************************************************************/
/*  SDFRNAHBED                            						        */
/************************************************************************/

typedef struct  sdfrnahbed_t_tag
	{
		sdfrnahbed_t1 fest_dat;
		sdfrnahbed_t2 vario_dat[AKTANZAHL_MAX];
	}__attribute__ ((packed)) sdfrnahbed_t;

/************************************************************************/
/*  IDFRNAHBED                            						        */
/************************************************************************/

typedef struct  idfrnahbed_t_tag
	{
		idfrnahbed_t1 fest_dat;
		idfrnahbed_t2 vario_dat[AKTANZAHL_MAX];
	}__attribute__ ((packed)) idfrnahbed_t;

/************************************************************************/
/*  IDFRBEDANZ                            						        */
/************************************************************************/

typedef struct  idfrbedanz_t_tag
	{
		idfrbedanz_t1 fest_dat;
		idfrbedanz_t2 vario_dat[AKTANZAHL_MAX];
	}__attribute__ ((packed)) idfrbedanz_t;

/*********************************************************************/
/*	SREGELDAT						ACS-Object-structure			 */
/*********************************************************************/

typedef struct  sregeldat_t_tag
	{
		sregeldaten_t1 fest_dat;
		sregeldaten_t2 vario_dat[PUNKTE_MAX];
	}__attribute__ ((packed)) sregeldat_t;

/*********************************************************************/
/*	IDFRORGPRG						ACS-Object-structure			 */
/*********************************************************************/

typedef struct filter_t1_tag
	{
		idfrorgprg_t2	fkenn;
		idfrorgprg_t3	fparams[FCOU_MAX];
	}__attribute__ ((packed)) filter_t1;

typedef struct idfrorgprg_t_tag
	{
		idfrorgprg_t1	fest_dat;
		filter_t1		filter[FILCOUNT_MAX];
		idfrorgprg_t4	sonst_w_params;
		idfrorgprg_t5	win_wert[WNDCNT_MAX];
		idfrorgprg_t6	anz_bfreq_mess;
		idfrorgprg_t7	bfreq_mess[STCOU_MAX];
	}__attribute__ ((packed)) idfrorgprg_t;

/*********************************************************************/
/*	SDFRDLPRG						ACS-Object-structure			 */
/*********************************************************************/

typedef struct sdfrdlfilter_t1_tag
	{
		sdfrdlprg_t2	fkenn;
		sdfrdlprg_t3	fparams[FCOU_MAX];
		sdfrdlprg_t4	sonst_w_params;
		sdfrdlprg_t5	win_wert[WNDCNT_MAX];
	}__attribute__ ((packed)) sdfrdlvario_t1;

typedef struct sdfrdlprg_t_tag
	{
		sdfrdlprg_t1	fest_dat;
		sdfrdlvario_t1	vario_dat[PCNT_MAX];
	}__attribute__ ((packed)) sdfrdlprg_t;


/*********************************************************************/
/*  IBLENDENDATA                    ACS-Object-structure             */
/*********************************************************************/

typedef struct  iblendendata_t_tag
	{
		iblendendata_t1 fest_dat;
		iblendendata_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) iblendendata_t;


/*********************************************************************/
/*  IBLENDEANZ                      ACS-Object-structure             */
/*********************************************************************/

typedef struct  iblendeanz_t_tag
	{
		iblendeanz_t1 fest_dat;
		iblendeanz_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) iblendeanz_t;

/*********************************************************************/
/*  SDFRBLENDENDATA                 ACS-Object-structure             */
/*********************************************************************/

typedef struct  sdfrblendendata_t_tag
	{
		sdfrblendendata_t1 fest_dat;
		sdfrblendendata_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) sdfrblendendata_t;

/*********************************************************************/
/*  SHTBCMD		                    ACS-Object-structure             */
/*********************************************************************/

typedef struct  shtbcmd_t_tag
	{
		shtbcmd_t1 fest_dat;
		shtbcmd_t2 vario_dat[BLENDENANZAHL_MAX];
	}__attribute__ ((packed)) shtbcmd_t;

/*********************************************************************/
/*  SORGDATEN                         ACS-Object-structure             */
/*********************************************************************/

typedef struct  sorgdaten_t_tag
	{
        sorgdaten_t1 data;
        sorgdaten_t2 step[NUM_STEPPARA_MAX];
    }__attribute__ ((packed)) sorgdaten_t;

/************************************************************************/
/*  interne Telegramme                                                  */
/************************************************************************/

/************************************************************************/
/*  INT_FKWECHSEL                             ACS Object-structure      */
/************************************************************************/

#define INT_FK_KOMPSTG_CMD 1000 /* 0x3E8 */
/* Funktionskreiswechsel */

typedef struct int_fk_kompstg_cmd_t2_tag
	{
		uchar	fe_id;
		uchar	fe_typ;
	}__attribute__ ((packed)) int_fk_kompstg_cmd_t2;


typedef struct int_fk_kompstg_cmd_t1_tag
	{
		uchar				fk_id;			/* Zielfunktionskreis */
		uchar				sys_nr;			/* System i. ZielFK */
		ushort				bereit_maske;   /* Welche Komponenten i. ZielFK
											ansprechbar sind */
		uchar				fe_cnt;			/* wieviele FEs vorhanden sind */
		int_fk_kompstg_cmd_t2	fe[ FE_MAX ];
	}__attribute__ ((packed)) int_fk_kompstg_cmd_t1;

#define KOMPSTG_HEADER_SIZE	5
#define KOMPSTG_FE_SIZE		sizeof(int_fk_kompstg_cmd_t2)


/* Makros f. bereit_maske
	-> entspr. Bit = 1 : FE vorhanden; */

#define FE_NOT_OK		0x0000		/* keine FE ansprechbar: f. Initwert */
#define SE_OK			0x0001		/* Generator ansprechbar */
#define BED_OK			0x0002		/* Anzeige ansprechbar */
#define SM_OK			0x0004		/* SM ansprechbar */
#define KS_OK			0x0008		/* KS ansprechbar */
#define GG_OK			0x0010		/* GG ansprechbar */
#define BV_OK			0x0020		/* BV ansprechbar */
#define FS_OK			0x0040		/* FS ansprechbar */
#define DFR_OK			0x0080		/* DFR ansprechbar */
#define FD_OK			0x0100		/* FD ansprechbar */

/************************************************************************/
/*  INT_FK_KOMPST_RSP                         ACS Object-structure      */
/************************************************************************/

#define INT_FK_KOMPSTG_RSP 1001 /* 0x3E9 */
/* Rueckmeldung des FK-Wechsels  */

typedef struct int_fk_kompstg_rsp_t1_tag
	{
		uchar	system;
		ushort	bereitmaske;
	}int_fk_kompstg_rsp_t1;

/************************************************************************/
/*  INT_FE_STATUS                                 ACS Object-structure      */
/************************************************************************/

#define INT_FE_STATUS 1002 /* 0x3EA */
/* Statusmeldung von Funktionseinheiten  */

typedef struct int_fe_status_t1_tag
	{
		ushort	state;
		uchar	fe_id;
		uchar	fe_typ;
	}int_fe_status_t1;

/************************************************************************/
/*  INT_ALARM                                 ACS Object-structure      */
/************************************************************************/

#define INT_ALARM 1003 /* 0x3EB */
/* Timeuot von Alarm_Handler */

typedef struct int_alarm_t1_tag
	{
			void		*data;
	}int_alarm_t1;

/************************************************************************/
/*  INT_ORGW_CMD                              ACS Object-structure      */
/************************************************************************/

#define INT_ORGW_CMD 1004 /* 0x3EC */
/* Mitteilung an Organwahl: Funktionskreiswechsel */

typedef struct int_orgw_cmd_t1_tag
	{
		uchar		ziel_fk;			/* Zielfunktionskreis */
		uchar		ziel_sys;		/* System i. ZielFK */
	}__attribute__ ((packed)) int_orgw_cmd_t1;

/************************************************************************/
/*  INT_SET_SE_ORGDAT                         ACS Object-structure      */
/************************************************************************/

#define INT_SET_SE_ORGDAT 1005 /* 0x3ED */
/* Aufnahme- & Iontomat- & Seriendaten aus Organprog */

/* Makros fuer Geraeteprogramm */
/*-----------------------------*/
#define GERPROG_WERT_HIDE 254         /* Wert nicht anzeigen */
#define GERPROG_WERT_NOT_STORE 255    /* Wert nicht speichern */

typedef struct int_set_se_orgdat_t1_tag
	{
		uchar			system;				/* zu welchem System die */
											/* folg. Daten gehoeren */
		uchar			technik;				/* Aufnahmedaten */
		uchar			mode;
		ushort			kv;
		uchar			fokus;
		uchar			proz;
		slong			mas;
		slong			ms;
		sshort			schwaerzkorr;			/* Iontomatdaten */
		uchar			messf_gew;
		uchar			folie;
		uchar			kennl;
		ushort			dfr_prog_nr;
        ushort          max_ms_fddetektor;
	}__attribute__ ((packed)) int_set_se_orgdat_t1;

/************************************************************************/
/*  INT_SET_DL_ORGDAT                         ACS Object-structure      */
/************************************************************************/

#define INT_SET_DL_ORGDAT 1006 /* 0x3EE */
/* Durchleuchtungsdaten aus Organprog */

typedef struct int_set_dl_orgdat_t1_tag
	{
		uchar		system;		/* zu welchem System die folg. Daten gehoeren*/
		uchar		dl_prog;		/* Nr d. DL-Programms */
		uchar		technik;		/* Technik */
	}__attribute__ ((packed)) int_set_dl_orgdat_t1;

/************************************************************************/
/*  INT_SET_GG_ORGDAT                         ACS Object-structure      */
/************************************************************************/

#define INT_SET_GG_ORGDAT 1007 /* 0x3EF */
/* Schichtdaten f. Geraetegeometrie aus Organprog */

typedef struct i_brems_param_tag
	{
		uchar	bremse;
		uchar	bremsCmd;
	}__attribute__ ((packed)) int_brems_param_t;

typedef struct int_set_gg_orgdat_t1_tag
	{
		uchar			system;			/* zu welchem System die */
										/* folg. Daten gehoeren */
		uchar			schicht_prog;		/* Nr d. Schichtprogramms */
		uchar			periscanning;
		uchar			anz_brems_param;
		int_brems_param_t	brems_param[GERBREMS_PARAM_MAX];


	}__attribute__ ((packed)) int_set_gg_orgdat_t1;

/************************************************************************/
/*  INT_SET_KS_ORGDAT                         ACS Object-structure      */
/************************************************************************/

#define INT_SET_KS_ORGDAT 1008 /* 0x3F0 */
/* Kassettenprogramm aus Organprog */

typedef struct int_set_ks_orgdat_t1_tag
	{
		uchar		system;				/* zu welchem System die */
										/* folg. Daten gehoeren */
		uchar		kass_prog;			/* Nr d. Kassettenprogramms */
		ushort		bildformat_q;			/* Bildformat quer */
		ushort		bildformat_l;			/* Bildformat laengs */

	}__attribute__ ((packed)) int_set_ks_orgdat_t1;

/************************************************************************/
/*  INT_SET_SM_ORGDAT                         ACS Object-structure      */
/************************************************************************/

#define INT_SET_SM_ORGDAT 1009 /* 0x3F1 */
/* SM-Daten aus Organprog */

typedef struct i_blend_param_tag
	{
		uchar	blenden_auswahl;
		ushort	blenden_pos;
		sshort	blenden_winkel;
		uchar	blenden_cmd;
	}__attribute__ ((packed)) int_blend_param_t;

typedef struct int_set_sm_orgdat_t1_tag
	{
		uchar			system;			/* zu welchem System die */
										/* folg. Daten gehoeren */
		uchar			filter;
		uchar			filter_auto;
		uchar			raster;
		uchar			format_auto;
		uchar			anz_blenden_param;
		int_blend_param_t	blend_param[GERBLENDEN_PARAM_MAX];

	}__attribute__ ((packed)) int_set_sm_orgdat_t1;

/************************************************************************/
/*  INT_SET_BV_ORGDAT                         ACS Object-structure    */
/************************************************************************/

#define INT_SET_BV_ORGDAT 1018 /* 0x3F1 */
/* SM-Daten aus Organprog */

typedef struct int_set_bv_orgdat_t1_tag
	{
		uchar		system;		/* zu welchem System die */
								/* folg. Daten gehoeren */
		uchar		zoom;

	}__attribute__ ((packed)) int_set_bv_orgdat_t1;


/************************************************************************/
/*  INT_SEND_ORGDAT_CMD                       ACS Object-structure      */
/************************************************************************/

#define INT_SEND_ORGDAT_CMD 1010 /* 0x3F2 */
/* Aufforderung, momentane Daten fuer Organprog-Speicherung zu schicken */

typedef struct int_send_orgdat_cmd_t1_tag
	{
		uchar		system;		/* zu welchem System */
								/* Daten angefordert werden */
	}__attribute__ ((packed)) int_send_orgdat_cmd_t1;

/************************************************************************/
/*  INT_SE_ORGDAT_RSP	                      ACS Object-structure      */
/************************************************************************/

#define INT_SE_ORGDAT_RSP 1011 /* 0x3F3 */
/* aktuelle Strahlungserzeugungsdaten fuer Organprog-Speicherung */

typedef int_set_se_orgdat_t1 int_se_orgdat_rsp_t1;

/************************************************************************/
/*  INT_DL_ORGDAT_RSP	                      ACS Object-structure      */
/************************************************************************/

#define INT_DL_ORGDAT_RSP 1012 /* 0x3F4 */
/* aktuelle Durchleuchtungsdaten fuer Organprog-Speicherung */

typedef int_set_dl_orgdat_t1 int_dl_orgdat_rsp_t1;

/************************************************************************/
/*  INT_GG_ORGDAT_RSP	                      ACS Object-structure      */
/************************************************************************/

#define INT_GG_ORGDAT_RSP 1013 /* 0x3F5 */
/* aktuelle Geraetegeometriedaten fuer Organprog-Speicherung */

typedef int_set_gg_orgdat_t1 int_gg_orgdat_rsp_t1;

/************************************************************************/
/*  INT_KS_ORGDAT_RSP	                      ACS Object-structure      */
/************************************************************************/

#define INT_KS_ORGDAT_RSP 1014 /* 0x3F6 */
/* aktuelles Kassettenprogramm fuer Organprog-Speicherung */

typedef int_set_ks_orgdat_t1 int_ks_orgdat_rsp_t1;

/************************************************************************/
/*  INT_SM_ORGDAT_RSP	                      ACS Object-structure      */
/************************************************************************/

#define INT_SM_ORGDAT_RSP 1015 /* 0x3F7 */
/* aktuelle SM-Daten fuer Organprog-Speicherung */

typedef int_set_sm_orgdat_t1 int_sm_orgdat_rsp_t1;

/************************************************************************/
/*  INT_BV_ORGDAT_RSP	                      ACS Object-structure      */
/************************************************************************/

#define INT_BV_ORGDAT_RSP 1017 /* 0x3F9 */
/* aktuelle SM-Daten fuer Organprog-Speicherung */

typedef int_set_bv_orgdat_t1 int_bv_orgdat_rsp_t1;

/************************************************************************/
/*  INT_TURN_ON_OFF	                      ACS Object-structure      */
/************************************************************************/

#define INT_TURN_ON_OFF 1016 /* 0x3F8 */
/* Meldung von Tech-Funkt, dass eine FE TURN_ON oder TURN_OFF gemeldet hat */

typedef struct
	{
		uchar turn_off_on_state;

	}int_turn_on_off_t1;

/************************************************************************/
/*  INT_SDLDATEN                               ACS Object-structure     */
/************************************************************************/

#define INT_SDLDATEN 1020 /* 0x3FC */
/* Internes Telegramm fuer BVFS-Task */

typedef sdldaten_t1 int_sdldaten_t1;


/************************************************************************/
/*  INT_IRRC_BED                               ACS Object-structure     */
/************************************************************************/

#define INT_IRRC_BED 1101 /* 0x44D */
/* Eine Taste der IR-Fernbedienung wurde gedrueckt */


typedef struct int_irrc_bed_t1_tag
	{
		char			tastcode;	/* Tastencode */
	} int_irrc_bed_t1;


/************************************************************************/
/*  INTAVRANFORDERUNG                         ACS Object-structure      */
/************************************************************************/

#define INTAVRANFORDERUNG 1301 /* 0x515 */
/* Automatische Verstrkungsregelung anfordern */


typedef struct intavranforderung_t1_tag
	{
		uchar			status;	/* Regelung ein / aus */
		uchar			regstop;	/* Regelung anhalten j / n */
	} intavranforderung_t1;

/************************************************************************/
/*  INTAVRRSP                                 ACS Object-structure      */
/************************************************************************/

#define INTAVRRSP 1302 /* 0x516 */
/* Zustand der Automatischen Verstaerkungsregelung */


typedef struct intavrrsp_t1_tag
	{
		uchar		regzus;	/* wie iDLDaten.RegZus */
	} intavrrsp_t1;

/************************************************************************/
/*  INT_ZOOM		                          ACS Object-structure      */
/************************************************************************/

#define INT_ZOOM 1303 /* 0x517 */
/* Mitteilung v. BV an SM: max. erlaubte Iris-Oeffnung bzgl. Targetebene
												(Durchmesser/Zoom v. BV) */


typedef struct int_zoom_t1_tag
	{
		ushort		iris_limit;     /* max. erlaubte Iris-Oeffnung
								bzgl. Targetebene [1/10 mm] */
		uchar		zoom;
		ushort		dosisl_anz;	/* Dosisl. incl. Faktor_dosis_anz_dl */
		ushort		faktdosisgen;
		ushort		faktdosisanz;
	} int_zoom_t1;

/************************************************************************/
/*  INT_HELL_STG_RESET                        ACS Object-structure      */
/************************************************************************/

#define INT_HELL_STG_RESET 1306 /* 0x51A */
/* AVR-Regelung auf Festverstaerkung_1 setzen */


typedef struct int_hell_stg_reset_t1_tag
	{
		uchar			dummy;
	} int_hell_stg_reset_t1;


/************************************************************************/
/*  INT_ROEAUSL                               XCU Object-structure      */
/************************************************************************/
#define INT_ROEAUSL 1601 /* 0x641 */

typedef struct int_roeausl_tag
	{
		uchar roeausl;
	}int_roeausl_t1;

/************************************************************************/
/*  INT_SERIE_AUFN                            XCU Object-structure      */
/************************************************************************/
#define INT_SERIE_AUFN 1701 /* 0x6A5 */
/* Mitteilung an SE: Serie lï¿½uft */


typedef struct int_serie_aufn_t1_tag
	{
		uchar		serie_aufn;		/* Dummy-Param. */
	} int_serie_aufn_t1;


/************************************************************************/
/*  INT_MESSFWECHSEL                          XCU Object-structure      */
/************************************************************************/
#define INT_MESSFWECHSEL 1704 /* 0x6A8 */
/* teilt der ADR mit, ob auessere Messfelder gueltig sind */


typedef struct int_messfwechsel_t1_tag
	{
		uchar messf_gueltig;
		uchar mf_1_flaeche;

	} int_messfwechsel_t1;

/* Makros f. int_messfwechsel-Parameter: */
#define 	AUSSEN_GUELTIG		1
#define 	AUSSEN_UNGUELTIG	0
#define     AUSSEN_MITTE_UNGUELTIG 2

/************************************************************************/
/*  INT_AUFN_VORB_OK                          XCU Object-structure      */
/************************************************************************/
#define INT_AUFN_VORB_OK 1709 /* 0x6AD */
/* Aufnahmevorbereitung abgeschlossen */


typedef struct int_aufn_vorb_ok_t1_tag
	{
		uchar		bedienort;		/* Ausloesebedienort */
	} int_aufn_vorb_ok_t1;


/************************************************************************/
/*  INT_AUFN_VORB                             XCU Object-structure      */
/************************************************************************/
#define INT_AUFN_VORB 1705 /* 0x6A9 */
/* Anstoa zur Aufnahmevorbereitung */


typedef struct int_aufn_vorb_t1_tag
	{
		uchar		aufn_vorb; 	/* 1: Aufnahme vorbereiten */
								/* 0: Aufnahmeablauf beendet */
	} int_aufn_vorb_t1;

/* Parameter AUFN_VORB */
#define AABL_VORB		ON
#define AABL_END		OFF

/************************************************************************/
/*  INT_STRAHL_VORB                           XCU Object-structure      */
/************************************************************************/
#define INT_STRAHL_VORB 1706 /* 0x6AA */
/* Anstoï¿?zur Strahlungsvorbereitung f?r Aufnahme */


typedef struct int_strahl_vorb_t1_tag
	{
		uchar			strahl_vorb;	/* 1: Vorbereiten */
									/* 0: Strahlvorb stop */
	} int_strahl_vorb_t1;

/* Parameter STRAHL_VORB */
#define STRAHLUNG_VORB			ON
#define STRAHLUNG_VORB_STOP		OFF

/************************************************************************/
/*  INT_STRAHLUNG                             XCU Object-structure      */
/************************************************************************/
#define INT_STRAHLUNG 1707 /* 0x6AB */
/* Strahlung ein / aus f?r Aufnahme */


typedef struct int_strahlung_t1_tag
	{
		uchar			ein_aus;		/* 1: Strahlung ein */
									/* 0: Strahlung aus */
	} int_strahlung_t1;

/* Parameter EIN_AUS */
#define STRAHL_EIN		ON
#define STRAHL_AUS		OFF


/************************************************************************/
/*  INT_AUFN_PRUEF                            XCU Object-structure      */
/************************************************************************/
#define INT_AUFN_PRUEF 1708 /* 0x6AC */
/* Aufnahmebereitschaft pr?fen */


typedef struct int_aufn_pruef_t1_tag
	{
		uchar		aufn_pruef;		/* Dummy-Param. */
	} int_aufn_pruef_t1;

/************************************************************************/
/*  INT_STRAHLERWAHL                           XCU Object-structure     */
/************************************************************************/
#define INT_STRAHLERWAHL 1710 /* 0x6AE */
/* Anstoss zur Strahlerwahl */


typedef struct int_strahlerwahl_t1_tag
	{
		uchar			system;
		uchar			strahler;
	} int_strahlerwahl_t1;


/************************************************************************/
/*  INT_SCHICHTZEIT                           XCU Object-structure      */
/************************************************************************/
#define INT_SCHICHTZEIT 1711 /* 0x6AF */
/* Schichtzeit hat sich geaendert */


typedef struct int_schichtzeit_t1_tag
	{
		long			schichtzeit;	/* (entspr. Progr. aus IB 48) */
								/* [0.1 msec] */
		char			schwaerzkorr;	/* schichtzeitabh. Schwaerzkorr */
								/* (entspr. Progr. aus IB 94) */
								/* [0.25 BP] */
	} int_schichtzeit_t1;

/************************************************************************/
/*  INT_PERI                                  XCU Object-structure      */
/************************************************************************/
#define INT_PERI 1712 /* 0x6B0 */
/* Periphase oder Periposition haben sich geaendert */


typedef struct int_peri_t1_tag
	{
		uchar statusperi;		/* PeriStatus aus iPeriPhase */
		uchar tischpos;		/* akt. Periposition gemaess iTischpos */
		uchar bewegung;		/* Kennung, ob in fahrt ( JA,NEIN )*/
	} int_peri_t1;


/************************************************************************/
/*  INT_DOSISL                                XCU Object-structure      */
/************************************************************************/
#define INT_DOSISL 1730 /* 0x6C2 */
/* Dosissoll-Leistung bei Durchleuchtung */


typedef struct int_dosisl_t1_tag
	{
		ushort dosisleistg;
	} int_dosisl_t1;



/************************************************************************/
/*  INT_IRIS_AUFN                             XCU Object-structure      */
/************************************************************************/
#define INT_IRIS_AUFN 1731 /* 0x6C3 */
/* Dosis bei Indirekt-Aufnahme */


typedef struct int_iris_aufn_t1_tag
	{
		uchar	technik;
		sshort	schwaerzkorr;
		ushort	dosis;
	} int_iris_aufn_t1;

/************************************************************************/
/*  INT_IAUFNDATEN                             XCU Object-structure      */
/************************************************************************/
#define INT_IAUFNDATEN 1732 /* 0x6C4 */
/* Internes Telegramm fï¿½r iAufnDaten wird von SE generiert */


/* Struktur genauso wie IAUFNDATEN */


/************************************************************************/
/*  INT_SFILTER                            XCU Object-structure         */
/************************************************************************/
#define INT_SFILTER 1781 /* 0x6F5 */
/* teilt SM mit, dass Filter auf Grund von Filterautomatik eingefahren */
/* werden muss */

typedef struct int_sfilter_t1_tag
	{
		uchar	filter;		/* einzufahrender Filter */
	} int_sfilter_t1;

/************************************************************************/
/*  INT_SEFILTER                            XCU Object-structure        */
/************************************************************************/
#define INT_SEFILTER 1782 /* 0x6F6 */
/* teilt SE mit, welcher Filter aktuell eingefahren ist und welcher */
/* Filter waehrend Aufnahme eingefahren wird */

typedef struct int_sefilter_t1_tag
	{
		uchar	filter_akt;		/* aktuell eingefahrener Filter */
		uchar	filter_aufn;		/* Filter fuer Aufnahme */
	} int_sefilter_t1;


/************************************************************************/
/*  INT_SCHWAERZKORR                          XCU Object-structure      */
/************************************************************************/
#define INT_SCHWAERZKORR 1801 /* 0x709 */
/* teilt der ADR mit, ob Schwaerzungskorrektur erniedrigt werden muss */


typedef struct int_schwaezkorr_t1_tag
	{
		uchar	korr_gueltig;

	} int_schwaerzkorr_t1;

/* Makros f. int_schwaerzkorr-Parameter: */
#define 	SM_SCHWAERZKORR_EIN		1
#define 	SM_SCHWAERZKORR_AUS		0

/************************************************************************/
/*  INT_FILTAUTO                          XCU Object-structure      */
/************************************************************************/
#define INT_FILTAUTO 1802 /* 0x70A */
/* teilt SE An-/Abwahl von Filterautomatik im entspr. FK mit */


typedef struct int_filtauto_t1_tag
	{
		uchar filtauto;		/* Werte: EIN / AUS */

	} int_filtauto_t1;

/************************************************************************/
/*  INT_AINIT                                 XCU Object-structure      */
/************************************************************************/
#define INT_AINIT 1900  /* 0x76C */
/* Initdaten sollen gelesen werden */


typedef struct int_ainit_t1_tag
	{
		uchar		ap_id;
		uchar		initkennung;
		ushort		subkennung;
	} int_ainit_t1;

/************************************************************************/
/*  INT_INIT                                 XCU Object-structure      */
/************************************************************************/
#define INT_IINIT 1901  /* 0x76D */
/* Initdaten werden gesendet */

typedef struct int_iinit_head_tag
	{
		uchar		ap_id;
		uchar		initkennung;
		ushort		anzahldaten;
	} int_iinit_head;

typedef struct int_iinit_t1_tag
	{
		int_iinit_head		head;
		uchar			data[ANZAHLDATEN_MAX];
	} int_iinit_t1;

/************************************************************************/
/*  INT_SINIT                                 XCU Object-structure      */
/************************************************************************/
#define INT_SINIT 1902  /* 0x76E */
/* Initdaten sollen geschrieben bzw. geloescht werden */

typedef struct int_sinit_head_tag
	{
		uchar		ap_id;
		uchar		initkennung;
		ushort		subkennung;
		ushort		anzahldaten;
	} int_sinit_head;

typedef struct int_sinit_t1_tag
	{
		int_sinit_head		head;
		uchar			data[ANZAHLDATEN_MAX];
	} int_sinit_t1;

/************************************************************************/
/*  INT_IINITQUIT                             XCU Object-structure      */
/************************************************************************/
#define INT_IINITQUIT 1903  /* 0x76F */
/* Quittierung fuer Initdaten wurden gelesen bzw. geloescht */


typedef struct int_iinitquit_t1_tag
	{
		uchar		ap_id;
		uchar		initkennung;
		uchar		status;
	} int_iinitquit_t1;



/************************************************************************/
/*  INT_ERR_RD_WR                             XCU Object-structure      */
/************************************************************************/
#define INT_ERR_RD_WR 1910  /* 0x776 */
/* Schreiben und Lesen der Errolog-Dateien */

#define ERR_DELETE	0
#define ERR_READ	1
#define ERR_WRITE	2


typedef struct int_err_rd_wr_t1_tag
	{
		int				mode;
		uchar			kategorie;
		uchar			file_cnt;
		ushort			dat_len;
		uchar			*dat_ptr;
	} int_err_rd_wr_t1;

/*****************************************************************************/
/*  INT_FEHLERANZ                             ACS Object-Structure           */
/*****************************************************************************/
/* Telegramm zum Uebergeben der Fehlermeldung an Disk-Task um den zugehoerenden */
/* Fehlertext zu ermitteln, um diesen mit iFehlerAnz ans Pult zu senden */


#define INT_FEHLERANZ 1996 /*  0x7cc */
/* Steuerung der Fehleranzeige */

typedef struct int_fehleranz_t1_tag
	{
		uchar			sprachkennung;
		ushort			fehlernummer;
		uchar			apid;
		uchar			kategorie;
		char				fehlertext[FEHLERTEXT_LENGTH];
	}int_fehleranz_t1;


/************************************************************************/
/*  INT_ERR_RD_QUIT                             XCU Object-structure      */
/************************************************************************/
#define INT_ERR_RD_QUIT 1911  /* 0x777 */
/* Quittung nach Lesen der Errolog-Dateien */

typedef struct int_err_rd_quit_t1_tag
	{
		uchar		status;
		uchar		kategorie;
		uchar		file_cnt;
	} int_err_rd_quit_t1;

/************************************************************************/
/*  INT_SYSW_REQ                              XCU Object-structure      */
/************************************************************************/
#define INT_SYSW_REQ 1912 /* 0x778 */
/* Anforderung einer Systemwahl */

typedef struct int_sysw_req_t1_tag
	{
		uchar		request;
	}int_sysw_req_t1;

/************************************************************************/
/*  INT_SYSW_REQ                              XCU Object-structure      */
/************************************************************************/
#define INT_BYPASS 1913 /* 0x779 */
/* Mitteilung an Dl-Task ueber Bypasszustand */

typedef struct int_bypass_t1_tag
	{
		uchar		bypass;
	}int_bypass_t1;

/************************************************************************/
/*  INT_BVFS_DLBFREQ                          XCU Object-structure      */
/************************************************************************/
#define  INT_BVFS_DLBFREQ 1914 /* 0x77A */
/* Mitteilung an BVFS-Task ueber Dl-Bildfreqenz und Matrix */

typedef struct int_bvfs_dlbfreq_t1_tag
	{
		ushort		dlbfreq;
		ushort		matrix;
	}int_bvfs_dlbfreq_t1;

/************************************************************************/
#define  INT_IDLDATEN 1915 /* 0x77B */
/* Mitteilung an SE-Task der Dl-Daten fuer gepulste und kontinuierliche Dl */

typedef struct int_idldaten_t1_tag
	{
		ushort		kvist;
		ushort		maist;
		ulong		dfp;
		sshort		dlabw;
		uchar		regzus;
	}int_idldaten_t1;

/************************************************************************/
/*  INT_DL_PRG_UPDATE                          XCU Object-structure      */
/************************************************************************/
#define  INT_DL_PRG_UPDATE 1916 /* 0x77C */
/* Mitteilung an DL-Task zum Update der DL-Daten */

/*****************************************************************************/
/*  INT_IDFRSTATUS                            ACS Object-Structure           */
/*****************************************************************************/

#define INT_IDFRSTATUS 1918 /* 0x077E */
/* Status der DFR Einheit */

typedef struct int_idfrstatus_t1_tag
	{
		uchar		dfraufnbereit;
		uchar		dfrdlbereit;
	}int_idfrstatus_t1;

/*****************************************************************************/
/*  INT_FILTERANZ                             ACS Object-Structure           */
/*****************************************************************************/

#define INT_FILTERANZ 1920 /* 0x0780 */
/* Filteranzeigen fuer Telegr. iDFRAllgAnz (SM -> DFR) */

#define FILT_TEXTLENGTH    DFRTEXT1_LENGTH
/* Die Laenge der Filtertexte richtet sich nach der Laenge */
/* der 1. Textzeile in iDFRAllgAnz */

typedef struct int_filteranz_t1_tag
	{
		uchar		strFiltFL[FILT_TEXTLENGTH];	/* Anzeige fuer DL-Filter */
		uchar		strFiltEXP[FILT_TEXTLENGTH];	/* Anzeige fuer Aufn-Filter */
	}int_filteranz_t1;

/*****************************************************************************/
/*  INT_LIST_VAR                            ACS Object-Structure           */
/*****************************************************************************/

#define INT_LIST_VAR 1925 /* 0x0785 */
/* Status der Min/Max Grenzen der Aufnahmeparameter */

typedef struct int_list_var_t1_tag
	{
		ulong		kv_min;		/* Einheit 0.1 kV */
		ulong		kv_max;		/* Einheit 0.1 kV */
		ulong		mas_min;	/* Einheit 0.01 mAs */
		ulong		mas_max;	/* Einheit 0.01 mAs */
		ulong		ms_min;		/* Einheit 0.1 ms */
		ulong		ms_max;		/* Einheit 0.1 ms */
	}int_list_var_t1;

/************************************************************************/
/*  interne Telegramme zwischen den FD-Tasks   XCU Object-structure      */
/************************************************************************/

#define FD_NR_1 		1 /* Logische Nummer des ersten FD = erste FD-TASK */
#define FD_NR_2 		2 /* Logische Nummer des ersten FD = erste FD-TASK */
#define FD_ANZ_MAX		2 /* Maximale Anzahl FDs die mï¿½glich sind */
#define INT_FD_S_DAT	1916
#define INT_FD_R_DAT	1917

/* Anzahl der zusaetzlichen Steuerzeichen vom FD: STX+ETX+BCC */
#define FD_ANZ_STEUERZEICH 3
/* Anzahl Zeichen die max. ueber SS empfangen ode rausgegeben werden */
/* 280 Wert aus Fax von Trixell v. 9.9.97 */
#define FD_MAX_IN_OUT 280

typedef struct int_fd_dat_t2_tag
	{
		uchar		kennung;
		ushort		anzdat;
	}int_fd_dat_t2;

typedef struct int_fd_dat_t1_tag
	{
		int_fd_dat_t2	head;
		uchar		data[FD_MAX_IN_OUT ];
	}int_fd_dat_t1;

/*  -- defines fuer head_kennung -------------------------------------------- */
#define FD_KONFIG	1	/*Schnittstellen-Konfig-daten von FD_TSK an FD_S_TSK */
#define FD_OUT		2	/*Daten zur Ausgabe an COm1/2 von FD_TSK an FD_S_TSK*/
#define FD_IN		3	/*Daten von COM-SS von FD_R_TSK an FD_TSK*/
#define FD_ERROR	4	/*Fehler am Detektor: iFEStatus nicht Betriebsbereit*/

typedef struct sdetektordaten_t_tag
	{
		sdetektordaten_t1	head;
		sdetektordaten_t2	data[ANZAHLDATEN_MAX];
	}sdetektordaten_t;

typedef struct idetektordaten_t_tag
	{
		idetektordaten_t1	head;
		idetektordaten_t2	data[ANZAHLDATEN_MAX];
	}idetektordaten_t;

typedef struct sfdallgdat_t_tag
	{
		sfdallgdat_t1		head;
		sfdallgdat_t2		data[ANZAHLDATEN_MAX];
	}sfdallgdat_t;

typedef struct ifdallgdat_t_tag
	{
		ifdallgdat_t1		head;
		ifdallgdat_t2		data[ANZAHLDATEN_MAX];
	}ifdallgdat_t;

typedef struct sdfrallgdat_t_tag
	{
		sdfrallgdat_t1		head;
		sdfrallgdat_t2		data[ANZAHLDATEN_MAX];
	}sdfrallgdat_t;

typedef struct sdfrallgdatanz_t_tag
	{
		sdfrallgdatanz_t1	head;
		sdfrallgdatanz_t2	data[ANZAHLDATEN_MAX];
	}sdfrallgdatanz_t;

/* -- Defines fuer Kennungen im file-access-mode ------------------------------ */
#define FD_F_DELETE		0
#define FD_F_CREATE		1
#define FD_F_RENAME		2
#define FD_F_READ		3
#define FD_F_NQUIT		4

/* -- Defines fuer Rueckmeldungen ---------------------------------------- */
#define FD_Q_NOERR		0		/* Positivquittung					*/
#define FD_E_NOERR		1		/* Quittungskennung: fehlerfrei		*/

#define FD_E_CR_SEQ		11	/* Fehler in der Telegrammabfolge		*/
#define FD_E_CR_HD		12	/* Festplattenfehler  beim Schreiben	*/
#define FD_E_CR_BREAK	13		/* Schreiben abgebrochen				*/

#define FD_E_RN_HD		21		/* Festplattenfehler beim Umbenennen	*/
#define FD_E_RN_NXIST	22		/* umzubenennende Datei existiert nicht	*/
#define FD_E_RN_DXIST	23		/* Zieldatei bereits vorhanden		*/

#define FD_E_RD_NXIST	31		/* auszulesende Datei existiert nicht	*/
#define FD_E_RD_HD		32		/* Festplattenfehler beim Auslesen		*/

#define FD_E_DL_NODEL	41		/* Datei konnte nicht geloescht werden	*/
#define FD_E_DL_NXIST	42		/* Datei ist nicht vorhanden			*/

/*  -- Defines fuer Telegramme zum FD ------------------------------------ */
#define FD_MAX_TIMEOUT		600

#define FD_S_ALL_STETS		(ushort)0xE430
#define FD_STEST_TOUT		150

#define FD_S_WARM_RESET		(ushort)0xE445
#define FD_WRESET_TOUT		150

#define FD_S_COLD_RESET		(ushort)0xE446
#define FD_CRESET_TOUT		200

#define FD_S_POLL			(ushort)0xEF33
/* wird mit config_send_timeout ueberwacht. */

#define FD_S_SI_MODE		(ushort)0xE630
#define FD_S_SP_MODE		(ushort)0xE631
#define FD_MODE_TOUT		150

#define FD_S_IM_ACQ_REQ		(ushort)0xE632
#define FD_IACQ_TOUT		600

#define FD_S_OFF_ACQ_REQ		(ushort)0xE633
#define FD_OFFACQ_TOUT		150

#define FD_S_IM_FRM_REQ		(ushort)0xE634
#define FD_IMFRM_TOUT		600

#define FD_S_OFF_FRM_REQ		(ushort)0xE635
#define FD_OFFFRM_TOUT		600

#define FD_S_CANCEL_IM_ACQ	(ushort)0xE636
#define FD_CNCACQ_TOUT		150

#define FD_S_SERVICE		(ushort)0xE641
#define FD_S_LEAVE_SERVICE	(ushort)0xE642
#define FD_SERV_TOUT		150

#define FD_GET_F_SER_NR		(ushort)0xEE30
#define FD_GET_F_DATE		(ushort)0xEE31
#define FD_GET_VERSION		(ushort)0xEE32
#define FD_GET_BOARD_VER		(ushort)0xEE33
#define FD_GET_SW_VER		(ushort)0xEE34
#define FD_GET_FW_VER		(ushort)0xEE35
#define FD_GET_DEF_MAP_I		(ushort)0xEE36
#define FD_GET_MLUT_I		(ushort)0xEE37
#define FD_GET_HW_VER		(ushort)0xEE38
#define FD_GET_GEN_HW_VER	(ushort)0xEE39
#define FD_GET_DET_TEMP		(ushort)0xEF32

#define FD_GET_TOUT			150

/************************************************************************/
/*  INT_SET_GG_ANZ	                          ACS Object-structure      */
/************************************************************************/
#define INT_SET_GG_POS 1921 /* 0x781 */
/* Anzeigedaten f. Geraetegeometrie vom Bildsystem */

typedef struct int_set_gg_pos_t1_tag
	{
		uchar   			possys;
		uchar   			nachlauf;
	}__attribute__ ((packed)) int_set_gg_pos_t1;


/*****************************************************************************/
/*  INT_RDOSEANZ                              ACS Object-Structure           */
/*****************************************************************************/

#define INT_RDOSEANZ 1922 /* 0x0782 */
/* Restdosisanzeige fuer Telegr. iDFRAllgAnz (DL -> DFR) */

/* Die Laenge des DFP-Textes richtet sich nach der Laenge */
/* der 3. Textzeile in iDFRAllgAnz */
#define DFP_TEXTLENGTH    DFRTEXT3_LENGTH
/* Die Laenge des Restdosis- bzw. Dosisleistungstextes richtet sich nach der Laenge */
/* der 4. Textzeile in iDFRAllgAnz */
#define DOSIS_TEXTLENGTH     DFRTEXT4_LENGTH

typedef struct int_rdoseanz_t1_tag
	{
		uchar            strDFP[DFP_TEXTLENGTH];	/* Anzeige fuer das Dosisflaechenprodukt */
		uchar            strDosis[DOSIS_TEXTLENGTH];	/* Anzeige fuer die Restdosis bzw. */
											/* fuer die Dosisleistung waehrend DL */
	}int_rdoseanz_t1;

/*****************************************************************************/
/*  INT_DEFAULTSYS_ANWAHL                              ACS Object-Structure           */
/*****************************************************************************/

#define INT_DEFAULTSYS_ANWAHL 1923 /* 0x0783 */

/*****************************************************************************/
/*  INT_DETECTOR_TIMEOUT                              ACS Object-Structure           */
/*****************************************************************************/

#define INT_DETECTOR_TIMEOUT 1924 /* 0x0784 */

/*****************************************************************************/
/*  INT_ERR_WRITE_HDD                             ACS Object-Structure           */
/*****************************************************************************/

#define INT_ERR_WRITE_HDD 0xA001
/* Fehlerpuffer auf HDD schreiben */


/*****************************************************************************/
/*  INT_XCS2CAN_GEN_FEHLER                             ACS Object-Structure           */
/*****************************************************************************/

#define INT_XCS2CAN_GEN_FEHLER 1925

typedef struct 
	{
		unsigned short fehler;
		unsigned short fehler_index;
		unsigned char prioritaet;
	}int_xcs2can_gen_fehler_t1;



/*****************************************************************************/
/*  INT_XCS2CAN_GEN_RESET                           ACS Object-Structure           */
/*****************************************************************************/

#define INT_XCS2CAN_GEN_RESET 1926

typedef struct 
	{
		unsigned char state;
	}int_xcs2can_gen_reset_t1;
/*****************************************************************************/
/*  iDeltaDAPDaten                           ACS Object-Structure           */
/*****************************************************************************/

#define IDELTADAPDATEN 1927

typedef struct 
	{
		unsigned long dap;//Dosisflächenprodukt aus der Kermax Messkammer
	}iDeltaDAPDaten_t1;

/*****************************************************************************/
/*  INT_SORGDATEN                           ACS Object-Structure           */
/*****************************************************************************/

#define INT_SORGDATEN 1928
// Struktur wie Telegramm sOrgDaten

/* Parameter fuer iKollision */
typedef struct ikollision_t_tag
	{
		ikollision_t1	head;
		ikollision_t2	kollantr[AUFLANZAHL_MAX];
	}__attribute__ ((packed)) ikollision_t;

#endif

#endif

