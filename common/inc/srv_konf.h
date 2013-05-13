/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : srv_konf.h
*
* Author       : Janschitz        ; Siemens AG ANL A426PR; (09131) 7-25627
*
* Language     : C
*
* Description  : allgemeine Definitionen fuer srv_konf.c
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/srv_konf.h,v 1.5 2007/08/01 10:22:52 hans Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: srv_konf.h,v $
* Revision 1.6  2009/04/14 13:17:45  Yang Zhiming
* Collimator size increases by offset after release the Pre-contact
*
* Revision 1.5  2007/08/01 10:22:52  hans
* Tabellen für DL-Filterautomatik in konfig_dat eingebaut ( Bug 2245 )
*
* Revision 1.4  2006/10/10 13:51:44  alexander_m
* tui_misc_konfig_tag added in konfigurationsdaten
*
* Revision 1.3  2006/02/15 10:46:39  michael
* *** empty log message ***
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
*    Rev /main/38   2004/2/16  toni
* Define APID_DFR entfernt, ist nun in acs.h
*
*    Rev /main/37   1999/7/13 11:28:6   achim 
* Neuer Initblock 97 mit allg. Sys.-Daten ( Charm 9003 ).
*
*    Rev /main/36   1999/1/22 12:54:38   achim
* Die Speicherung des BV-Formats im NV-Ram erfolgt konfigurations-

* abhaengig. Hoehenlimit im Init-Block 76 wird Bytesetting. (Charm 8933)
*
*    Rev /main/35   1999/1/21 10:17:43   andrea
* Initblock 14 vom DFR für die Filternamen eintragen (Charm 8892)
* * CO: DDTS: ERLde02209: CCB_8892 Polystar besitzt statt 3 nunmehr 5 Filter
*
*    Rev /main/34   1998/10/16 10:2:53   achim
* Init-Block 76 um 2 Parameter erweitert: fd_masseinh,  dl_filtauto_typ.
* Init-Block 76 erweitert: hoehenblende ( Charm 8891 ).
*
*    Rev /main/33   1998/4/8 10:52:56   hans
* Parameter skindose ( ulong ) aufgeteilt in:
* ushort  skindose;
* uchar   skin_focus_distance;
* uchar   skindose_disp_disable;
*
*    Rev /main/32   1998/3/19 9:2:47   achim
* Initblock 96 neu: Filterabhaengige Diamentorkorrekturfaktoren.
* ( Charm 8546 ).
*
*    Rev /main/31   1998/2/19 15:40:52   achim
* Initblock 76 wurde um folgende Parameter erweitert:
* notbetr_nein, drdoseincrdr, min_ms_dr.
*
*    Rev /main/30   1998/1/21 9:57:2   achim
* Der Initblock 76 enthaelt 4 neue Parameter:
* dosis_max, peripos, doseincrfactor, vidtvsv.
*
*    Rev /main/29   1997/11/13 15:27:43   hans
* Struktur fuer Initblock 13 DFR definiert.
*
*    Rev /main/28   1997/11/13 9:9:7   gaby
* Struktur konf_fdbs_t aufteilen in zwei Strukturen fuer Lanegenpruefung.
*
*    Rev /main/27   1997/11/10 14:32:38   gerhard
* Konfiguration fuer schreibgeschuetzte Initbloecke eingebracht.
* FDBS_Konfig: offset_cycle von uchar auf uschort geaendert und
* 30 uchars dummy angefuegt.
*
*    Rev /main/26   1997/9/1 11:35:38   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.24   25 Mar 1997 15:10:28   gaby
 * Aenderungen fuer FD-Detektor eingebracht.
 *
 *    Rev 1.23   22 Jan 1997 18:10:54   hans
 * Prototyp fuer Initblock 94: Schichtzeitabhaengige Schwaerzungskorrektur
 * eingebaut.
 *
 *    Rev 1.22   07 Nov 1996 15:59:02   gaby
 * Definition fuer konf_gerprog_t geandert: ohne Geraeteprogramm-Index
 * Definition fuer Initblock 2 von DFR eingefuegt (konf_dfr_anl_t)
 * und neue Funktion store_dfr_anldat fuer IKOS 120.
 *
 *    Rev 1.21   07 Aug 1996 16:44:58   hans
 * Neue Konfiguration in se_konfig und Initblock 76: lih_enable.
 *
 *    Rev 1.20   27 Jun 1996 16:21:50   susi
 * Rasterangaben sind aus Initblock 74 in den neuen Initblock 75 gekommen.
 * (Ikos-Nr. 60)
 *
 *    Rev 1.19   17 Jun 1996 09:27:42   gaby
 *
 * Aenderungen fuer Geraeteprogramme.
 *
 *    Rev 1.18   05 Jun 1996 13:47:08   gaby
 *
 * iriskorrzoom aus bv_konfig wieder in allg_xcu_dat.
 *
 *    Rev 1.17   31 May 1996 17:24:48   gaby
 * Iriskorrzoom in bv_konfig statt allg_xcu_dat.
 *
 *    Rev 1.16   31 May 1996 13:43:00   gaby
 *
 * Erweiterungen Initblock 76 eingebaut.
 *
 *    Rev 1.15   03 May 1996 14:16:46   gaby
 *
 * Struktur dl_dfrprog nur mit DLMEM_ANZ statt DLMEM_ANZ +1 projektiert.
 *
 *    Rev 1.14   09 Apr 1996 13:49:04   achim
 *
 * Defines fuer Initbloecke 100...105
 * Initbloecke fuer DFR nur einmal versenden.
 *
 *    Rev 1.13   21 Nov 1995 16:29:22   andrea
 *
 * Strukturen an neue Initdaten angepasst (z.B. allg-XCU-Daten)
 * Neue Struktur 'error_konfig' eingebracht
 *
 *    Rev 1.12   20 Nov 1995 09:05:14   andrea
 *
 * Neuen Typ zum Umkopieren der Folienkorr-Kennl-Nr. eingefuegt (Charm 5150)
 *
 *    Rev 1.11   10 Nov 1995 14:00:30   andrea
 * Array fuer DL_DFRPROG und DR_Konfig um 1 erhoeht
 *
 *    Rev 1.10   03 Nov 1995 15:10:06   andrea
 * Neue Init-Struktur fuer dfr_orgprog und dl_dfrprog
 *
 *    Rev 1.9   10 Oct 1995 16:38:52   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.8   04 Oct 1995 16:51:38   andrea
 *
 * Struktur fuer Initblock 92 eingefuegt. kV-mA-Tab-Len von 11 auf 10
 * veraendert. Speicherplatz f. kV-mA-Tab in EE-Data eingefuegt (Ch. 4141)
 * Struktur und Define fuer Initblock 1 vom SPC eingefuegt (Charm 4103)
 *
 *    Rev 1.7   13 Jul 1995 16:14:16   andrea
 *
 * WW_Abgleich von 'uint' in 'sint' umgeaendert
 *
 *    Rev 1.6   11 Jul 1995 08:47:38   hans
 *
 * neue Definition Initblock 76.
 *
 *    Rev 1.5   05 May 1995 13:14:48   andrea
 * File gegen Wiedereintritt gesichert
 *
 *    Rev 1.4   04 May 1995 17:53:38   andrea
 * Versionen der Konfiguration entfernt
 * Strukturen sservinit, iservinit und iinit eingefuegt
 * Struktur fuer Anlagenaufbau entfernt
 * Initblock 53 eingefuegt
 * Initblock 75 in Initblock 81-91 umbenannt
 *
 *    Rev 1.3   20 Dec 1994 16:34:14   andrea
 *
 * Initblock 76 an Aenderung v. 14.12. angepasst, z.B. Dick-Duenn-Korr
 *
 *    Rev 1.2   13 Dec 1994 11:54:28   achim
 *
 * Initdaten an cfg_spec (Okt./Nov.) angepasst
 * Neue Defines und Daten, z. B. Initbloecke 75-80, Generatorbloecke 2 u. 101
 * Neue Prototypen eingebracht
 *
 *    Rev 1.1   07 Oct 1994 12:22:02   susi
 * neue Konfigurationsdatenbloecke definiert.
 *
 *    Rev 1.0   10 Aug 1994 09:58:32   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/*] END: common definitions */

/* Gegen Wiedereintritt sichern */
#ifndef SRV_KONF_H
#define SRV_KONF_H

/**********************************************/
/* verwendete Strukturen in Service bzw. Disk */
/**********************************************/

typedef struct sservinit_t_tag
	{
		sservinit_t1	head;
		sservinit_t2	data[ANZAHLDATEN_MAX];
	}__attribute__ ((packed))
	sservinit_t;

typedef struct iservinit_t_tag
	{
		iservinit_t1	head;
		iservinit_t2	data[ANZAHLDATEN_MAX];
	}__attribute__ ((packed))
	iservinit_t;

typedef struct iinit_t_tag
	{
		iinit_t1	head;
		iinit_t2	data[ANZAHLDATEN_MAX];
	}__attribute__ ((packed))
	iinit_t;

/**************************************/
/* Konfigurationsdaten vom Service-PC */
/**************************************/

typedef struct ee_data_tag
	{
        konfigurationsdaten_t	konfigurationsdaten;
        anlagenaufbau_t			anlagenaufbau;
        systemliste_t			systemliste[SYSTEM_MAX+1];
        fk_liste_t				fk_liste[SYSTEM_MAX+1];
        gg_sys_settings_t		gg_sys_settings[SYSTEM_MAX+1];
        aufn_brems_t			aufn_bremsen[SYSTEM_MAX+1];
        organprogramm_t			organprogramm;
        int						regionsliste[REGION_MAX+1];
        orgprog_speicher_t		prog_speicher;
        orgdat_speicher_t		dat_speicher;
        schichtprog_t			schichtprogliste[SYSTEM_MAX+1];
		ger_konfig_t            ger_konfig;
		ger_orgprog_t			ger_orgprog [GER_PROG_SPEICHER_MAX+1];
        defaultliste_t			defaultliste;
        default_fk_liste_t		default_fk_liste[FK_MAX];
        dl_defaultliste_t		dl_defaults;
        sm_defaultliste_t		sm_defaults;
        fe_liste_t				fe_liste;
        se_konfig_t				se_konfig;
		kv_ma_tab_t 			kv_ma_tab;
        ushort					folie_empf[FOLIEN_MAX+1];
        roe_dat_t				roedat[STRAHLER_MAX+1];
        scag_rlr_t				rlr_tab[STRAHLER_MAX];
        focus_dat_t				fokusdaten[(FOKUS_MAX+1)*STRAHLER_MAX];
        durchgriffs_tab_t		durchgriffs_tab[FOKUS_MAX*STRAHLER_MAX];
        konstantlast_tab_t		konstantlast_tab[FOKUS_MAX*STRAHLER_MAX];
        serien_tabs_t			serien_tab[FOKUS_MAX*STRAHLER_MAX];
        kv_tab_t				kv_tab[FOKUS_MAX*STRAHLER_MAX];
        lastgrenz_tab_t			lastgrenz_tab[FOKUS_MAX*STRAHLER_MAX];
        wsec_tab_t				wsec_tab[FOKUS_MAX*STRAHLER_MAX];
        msec_tab_t				msec_tab[FOKUS_MAX*STRAHLER_MAX];
        filkorrkennl_t			filkorrkennl;
		uebernahmekennl_t		uebernahmekennl;
        eingangsempf_t			eingangsempf[IONCH_MAX+1];
		iontoempf_t				iontoempf[DET_TYP_KORR_MAX+1];
		diamentor_t				diamentor[STRAHLER_MAX+1];
  		rasterkorr_t			rasterkorr_bp;
  		gx_tab_t				gx_kennl;
        dl_prog_t               dl_prog[DLPROG_MAX];
        dl_dfrprog_t            dl_dfrprog[DL_MEM_ANZ];
        dr_konfig_t				dr_konfig;
  		dr_orgprog_t			dr_orgprog[DFR_ORGDAT_SPEICHER_MAX+1];
        gg_konfig_t				gg_konfig;
        sm_konfig_t				sm_konfig;
        ks_konfig_t				ks_konfig;
        fs_konfig_t				fs_konfig;
        bv_konfig_t				bv_konfig;
        bd_konfig_t				bd_konfig;
		bildk_dl_konfig_t		bildk_dl_konfig;
		bildk_aufn_konfig_t		bildk_nativ_konfig;
		bildk_aufn_konfig_t		bildk_subtr_konfig;
		vs_konfig_t				vs_konfig;
        fdbs_konfig_t			fdbs_konfig;
        diamentorkorrfakt_t     diamentorkorrfakt;
		error_konfig_t			error_konfig;
        initliste_t				initliste[INIT_BLOCK_MAX];
		allg_sys_konfig_t		allg_sys_daten;
        dl_skindose_filt_t      dl_skindose_filt;
        tui_misc_konfig_t		tui_misc_konfig;
        dl_filtauto_t			dl_filtauto_konfig;
	}__attribute__ ((packed))
	ee_data_t;


/***************************************\
*                                       *
* Initblock 0: Schreibschutzmarkierung  *
*                                       *
\***************************************/

typedef struct
	{
		uchar count;
		uchar block_no[INITKENNUNG_MAX];
	}
konf_ro_initblocks_t;

typedef struct konf_ro_speicher_tag
{
	uchar fe_typ;
	konf_ro_initblocks_t block;
}__attribute__ ((packed)) konf_ro_speicher_t;

/******************************\
*                              *
* Initkennung 1 Anlagenaufbau  *
*                              *
\******************************/

#define ANLAGENAUFBAU			1

/******************************\
*                              *
* Initkennung 2    Systemdaten *
*                              *
\******************************/

#define SYSTEMDATEN			2

typedef struct konf_systemdaten_t1_tag
	{
  		uchar default_system;
  		uchar anzahl_systeme;
	}__attribute__ ((packed))
	konf_systemdaten_t1;

typedef struct konf_systemdaten_t2_tag
	{
  		uchar anzahl_fe;
  		uchar ap_id[16];
	}__attribute__ ((packed))
	konf_systemdaten_t2;

typedef struct konf_systemdaten_t3_tag
	{
  		uchar betriebsart;
  		uchar target;
  		uchar orgdat_ext;
  		uchar dl_prog_anwahl;
  		uchar schicht_prog_anwahl;
 		uchar kass_prog_anwahl;
  		uchar dfr_prog_anwahl;
  		uchar funktionskreis;
  		uchar strahler;
  		uchar aufn_ion_kanal;
  		uchar anz_aufn_bedienorte;
  		uchar aufn_bedienort[10];
  		uchar dl_option;
	}__attribute__ ((packed))
	konf_systemdaten_t3;

typedef struct konf_systemdaten_t4_tag
	{
  		konf_systemdaten_t3	systemliste;
  		konf_systemdaten_t2	fk_liste;
	}__attribute__ ((packed))
	konf_systemdaten_t4;

typedef struct konf_systemdaten_t
	{
  		konf_systemdaten_t1 head;
  		konf_systemdaten_t4 system[SYSTEM_MAX];
	}__attribute__ ((packed))
	konf_systemdaten_t;

/**********************************\
*                                  *
* Initblock 3 Funktionskreisdaten  *
*                                  *
\**********************************/

#define FUNKTIONSKREISDATEN		3

typedef struct konf_fk_daten_t1_tag
	{
  		uchar anz_fk;
	}__attribute__ ((packed))
	konf_fk_daten_t1;

typedef struct konf_fk_daten_t2_tag
	{
  		uchar fk_id;
  		uchar	default_system;
  		uchar	anzahl_ap;
  		uchar	apid[FE_MAX];
	}__attribute__ ((packed))
	konf_fk_daten_t2;

typedef struct konf_fk_daten_t_tag
	{
		konf_fk_daten_t1	head;
		konf_fk_daten_t2	fk[FK_MAX];
	}__attribute__ ((packed))
	konf_fk_daten_t;

/*****************************************\
*                                         *
* Initkennung 4    Funktionseinheitsdaten *
*                                         *
\*****************************************/

#define	FUNKTIONSEINHEITSDATEN	4

typedef struct konf_fe_daten_t1_tag
	{
		uchar	anzahl_fe;
	}__attribute__ ((packed))
	konf_fe_daten_t1;

typedef struct konf_fe_daten_t2_tag
	{
		uchar	apid;
		uchar	fe_typ;
		uchar	se_anzeige;
		uchar	xcs_komp_nr;
		uchar	anlagen_komp_nr;
	}__attribute__ ((packed))
	konf_fe_daten_t2;

typedef struct konf_fe_daten_t_tag
	{
		konf_fe_daten_t1	head;
		konf_fe_daten_t2	fe[FE_MAX];
	}__attribute__ ((packed))
	konf_fe_daten_t;

/********************************\
*                                *
* Initkennung 5    Strahlerdaten *
*                                *
\********************************/

#define STRAHLERDATEN	5

typedef struct	konf_strahlerdaten_t1_tag
	{
  		uchar anzahl_strahler;
	}__attribute__ ((packed))
	konf_strahlerdaten_t1;

typedef struct	konf_strahlerdaten_t2_tag
	{
		ushort	max_kv;
		uchar	focus_nr_kl;
		uchar	focus_nr_gr;
		uchar	focus_nr_3;
	}__attribute__ ((packed))
	konf_strahlerdaten_t2;

typedef struct	konf_strahlerdaten_t_tag
	{
  		konf_strahlerdaten_t1 head;
  		konf_strahlerdaten_t2 strahler[STRAHLER_MAX];
	}__attribute__ ((packed))
	konf_strahlerdaten_t;

/****************************************\
*                                        *
* Initbloecke 6...17 Durchgriffstabellen *
*                                        *
\****************************************/

#define DURCHGRIFFSTAB_MIN	6
#define DURCHGRIFFSTAB_MAX	17

typedef struct	konf_durchgriffstab_t1_tag
	{
		uchar	focus_nr;
		uchar	kurvenstuetzpunkte;
	}__attribute__ ((packed))
	konf_durchgriffstab_t1;

typedef struct	konf_durchgriffstab_t2_tag
	{
		ulong	wert_kv;
	}__attribute__ ((packed))
	konf_durchgriffstab_t2;

typedef struct	konf_durchgriffstab_t3_tag
	{
		ulong	wert_pmax;
	}__attribute__ ((packed))
	konf_durchgriffstab_t3;

/******************************************\
*                                          *
* Initbloecke 18...29 Konstantlasttabellen *
*                                          *
\******************************************/

#define KONSTANTLASTTAB_MIN	18
#define KONSTANTLASTTAB_MAX	29

typedef struct	konf_konstlasttab_t1_tag
	{
		uchar	focus_nr;
		uchar	kurvenstuetzpunkte;
	}__attribute__ ((packed))
	konf_konstlasttab_t1;

typedef struct	konf_konstlasttab_t2_tag
	{
		ulong	wert_wsec[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_konstlasttab_t2;

typedef struct	konf_konstlasttab_t3_tag
	{
		ulong	wert_msec[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_konstlasttab_t3;

/**********************************************\
*                                              *
* Initbloecke 30...41 Serienbelastungstabellen *
*                                              *
\**********************************************/

#define SERIENBELASTUNGSTAB_MIN	30
#define SERIENBELASTUNGSTAB_MAX	41

typedef struct	konf_serientab_t1_tag
	{
		uchar   focus_nr;
		uchar   anzahl_duty_cycle;
	}__attribute__ ((packed))
	konf_serientab_t1;

typedef struct	konf_serientab_t2_tag
	{
		uchar	wert_duty_cycle[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_serientab_t2;

typedef struct	konf_serientab_t3_tag
	{
		uchar	anzahl_kurven;
	}__attribute__ ((packed))
	konf_serientab_t3;

typedef struct	konf_serientab_t4_tag
	{
		uchar	szenenzeit;
	}__attribute__ ((packed))
	konf_serientab_t4;

typedef struct	konf_serientab_t5_tag
	{
		ushort	pmax[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_serientab_t5;

/*********************************************\
*                                             *
* Initblock 42 Roehrenlastrechnerdaten allg   *
*                                             *
\*********************************************/

#define ROEHRENLASTRECHNERDAT_ALLG	42

typedef struct	konf_rlr_allg_t1_tag
	{
		uchar   anz_strahler;
	}__attribute__ ((packed))
	konf_rlr_allg_t1;

typedef struct	konf_rlr_allg_t2_tag
	{
		uchar   strahler_nr;
		ulong   Q_max;
		ulong   awb;
		ulong   rbl;
		uchar	be_exp;
		uchar	be_series;
		uchar	be_pdl;
    	uchar	dummy[97];
	}__attribute__ ((packed))
	konf_rlr_allg_t2;

/*********************************************\
*                                             *
* Initblock 43 Roehrenlastrechnerdaten Tab.   *
*                                             *
\*********************************************/

#define ROEHRENLASTRECHNERDAT_TAB	43

typedef struct	konf_rlr_tab_t1_tag
	{
		uchar   strahler_nr;
    	ushort	kurvenstuetzpunkte;
	}__attribute__ ((packed))
	konf_rlr_tab_t1;

typedef struct	konf_rlr_tab_t2_tag
	{
		ushort	zeit_tabelle[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_rlr_tab_t2;

typedef struct	konf_rlr_tab_t3_tag
	{
		ushort	waerme_tabelle[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_rlr_tab_t3;

/***********************************\
*                                   *
* Initblock 46 Durchleuchtungsdaten *
*                                   *
\***********************************/

#define	DL_DATEN	46

typedef struct	konf_dl_daten_t1_tag
	{
    	uchar	dl_ion_kanal;
		uchar	anzahl_dl_prog;
	}__attribute__ ((packed))
	konf_dl_daten_t1;

typedef struct	konf_dl_daten_t2_tag
	{
		uchar	dl_kennlinie;
		ushort	dosisleistung;
		uchar	dl_mode;
		ushort	dummy;
	}__attribute__ ((packed))
	konf_dl_daten_t2;

typedef struct	konf_dl_daten_t_tag
	{
		konf_dl_daten_t1	head;
		konf_dl_daten_t2	dl_prog[DLPROG_MAX];
	}__attribute__ ((packed))
	konf_dl_daten_t;

/***********************\
*                       *
* Initblock 47 BV-Daten *
*                       *
\***********************/

#define	BV_KONFIG	47

typedef struct konf_bv_konfig_t1_tag
	{
  		ushort	zoom_oeffnung;
	  	ushort 	faktdosisgen;
  		ushort 	faktdosisanz;
	}__attribute__ ((packed))
	konf_bv_konfig_t1;

typedef struct konf_bv_konfig_t_tag
	{
  		uchar anzahl_zoomstufen;
  		konf_bv_konfig_t1 bv_konf[ZOOM_MAX];
	}__attribute__ ((packed))
	konf_bv_konfig_t;

/*******************************\
*                               *
* Initblock 48 Schichtprogramme *
*                               *
\*******************************/

#define	SCHICHTPROGRAMME	48

typedef struct konf_schichtprog_t1_tag
	{
  		uchar anzahl_systeme;
	}__attribute__ ((packed))
	konf_schichtprog_t1;

typedef struct konf_schichtprog_t2_tag
	{
		uchar	schichtwinkel;
		ushort	schichtzeit;
	}__attribute__ ((packed))
	konf_schichtprog_t2;

typedef struct konf_schichtprog_t3_tag
	{
		uchar anzahl_schichtprog;
		konf_schichtprog_t2 schichtprog[SCHICHTPROG_MAX];
	}__attribute__ ((packed))
	konf_schichtprog_t3;

typedef struct konf_schichtprog_t_tag
	{
  		konf_schichtprog_t1 head;
  		konf_schichtprog_t3 schichtprog[SYSTEM_MAX];
	}__attribute__ ((packed))
	konf_schichtprog_t;

/*******************************\
*                               *
* Initblock 49                  *
* Konfiguration Aufnahmebremsen *
*                               *
\*******************************/

#define	AUFN_BREMSEN	49

typedef struct konf_aufn_brems_t1_tag
	{
  		uchar system_nr;
		uchar anzahl_bremsen;
  		uchar bremse_nr[AUFN_BREMS_MAX];
	}__attribute__ ((packed))
	konf_aufn_brems_t1;

typedef struct konf_aufn_brems_t_tag
	{
  		uchar               anzahl_systeme;
  		konf_aufn_brems_t1	aufn_bremsen[SYSTEM_MAX];
	}__attribute__ ((packed))
	konf_aufn_brems_t;

/********************************************\
*                                            *
* Initblock 50                               *
* Konfiguration Tubuskuntakt/Messfeldanwahl  *
*                                            *
\********************************************/

#define	TUBUS_MESSFELD	50

typedef struct konf_tubus_messfeld_t1_tag
	{
  		uchar	system_nr;
	  	uchar messfeldanwahl;
  		uchar messfeld_display_enable;
	}__attribute__ ((packed))
	konf_tubus_messfeld_t1;

typedef struct konf_tubus_messfeld_t_tag
	{
  		uchar schwaerzkorr;
	  	ushort 	limitwert;
  		uchar	anzahl_systeme;
  		konf_tubus_messfeld_t1	tubus_messfeld[SYSTEM_MAX];
	}__attribute__ ((packed))
	konf_tubus_messfeld_t;

/*******************************\
*                               *
* Initblock 51 KS-Konfiguration *
*                               *
\*******************************/

#define	KS_KONFIG	51

typedef struct konf_ks_konfig_t1_tag
	{
  		uchar fe_id;
  		uchar	ks_typ;
	}__attribute__ ((packed))
	konf_ks_konfig_t1;

typedef struct konf_ks_konfig_t_tag
	{
  		uchar anz_ks;
  		konf_ks_konfig_t1     ks[KS_MAX];
	}__attribute__ ((packed))
	konf_ks_konfig_t;

/*****************************************\
*                                         *
* Initblock 52 Kassettenteilungsprogramme *
*                                         *
\*****************************************/

#define	KS_TEILPROG	52

typedef struct konf_ks_teilprog_t1_tag
	{
  		uchar	bildpos;
	  	uchar	teilg_q;
  		uchar	teilg_l;
	}__attribute__ ((packed))
	konf_ks_teilprog_t1;

typedef struct konf_ks_teilprog_t2_tag
	{
  		uchar anz_bildpos;
  		konf_ks_teilprog_t1	bildpos[1];
	}__attribute__ ((packed))
	konf_ks_teilprog_t2;

typedef struct konf_ks_teilprog_t3_tag
	{
  		uchar anz_teilprog;
  		konf_ks_teilprog_t2	teilprog;
	}__attribute__ ((packed))
	konf_ks_teilprog_t3;

typedef struct konf_ks_teilprog_t_tag
	{
  		uchar anz_kassprog;
  		konf_ks_teilprog_t3	kassprog;
	}__attribute__ ((packed))
	konf_ks_teilprog_t;

/*****************************************************\
*                                                     *
* initblock 53 Video-Aufnahmesteuerung-Konfiguration  *
*                                                     *
\*****************************************************/

#define	FS_AUFNSTEUER	53

typedef struct konf_fs_aufnsteuer_t_tag
	{
		uchar anzahl_systeme;
		fs_aufnsteuer_t	aufn_steuerung[SYSTEM_MAX];
	}__attribute__ ((packed))
	konf_fs_aufnsteuer_t;

/********************************\
*                                *
* initblock 54 SE-Konfiguration  *
*                                *
\********************************/

#define	SE_KONFIG	54

typedef struct konf_se_konfig_t1_tag
	{
		ushort	max_kw_gen;
		ulong	min_ms_gen;
		ushort	min_ma_gen;
		ushort	max_ma_gen;
		ushort	min_kv_gen;
		ushort	max_kv_gen;
		ulong	min_mas_gen;
		ulong	max_mas_gen;
		ulong	max_ms_gen;
		ulong	max_kws_ion;
		ulong	min_ms_gen_3;
		ulong	max_ms_ion;
		uchar	step_bp;
		uchar	hk_xray_delay;
		uchar	dl_mode;
	}__attribute__ ((packed))
	konf_se_konfig_t1;

typedef struct konf_se_konfig_t2_tag
	{
		uchar	regelreihenfolge;
	}__attribute__ ((packed))
	konf_se_konfig_t2;

typedef struct konf_se_konfig_t3_tag
	{
		ushort	folienempf[FOLIE_MAX+1];
	}__attribute__ ((packed))
	konf_se_konfig_t3;

typedef struct konf_se_konfig_t_tag
	{
		konf_se_konfig_t2        regelreihenfolge;
		konf_se_konfig_t1        se_konf;
		konf_se_konfig_t3        folie_empf;
	}__attribute__ ((packed))
	konf_se_konfig_t;

/********************************\
*                                *
* initblock 55 SM-Konfiguration  *
*                                *
\********************************/

#define	SM_KONFIG	55

typedef struct konf_sm_konfig_t1_tag
	{
		uchar autoformatctrl;
  		uchar anz_fk;
	}__attribute__ ((packed))
	konf_sm_konfig_t1;

typedef struct konf_sm_konfig_t2_tag
	{
  		uchar 	rastertyp;
	  	uchar 	rasterstg;
  		ushort 	rasterdelay;
	  	ushort 	messfeldbegrenzung;
  		uchar	anzahl_blenden;
	  	uchar	blende_nr[16];
		uchar	fauto;
	}__attribute__ ((packed))
	konf_sm_konfig_t2;

typedef struct konf_sm_konfig_t_tag
	{
		konf_sm_konfig_t1	head;
		konf_sm_konfig_t2	tail[FK_MAX];
	}__attribute__ ((packed))
	konf_sm_konfig_t;

/************************************\
*                                    *
* initblock 56 Organregionzuordnung  *
*                                    *
\************************************/

#define ORGANREGIONZUORDNUNG		56

typedef struct	konf_organregiontab_t1_tag
	{
    	uchar anzahl_regionen;
    	uchar prog_index[REGION_MAX];
	}__attribute__ ((packed))
	konf_organregiontab_t1;

/*******************************************\
*                                           *
* initblock 57...64 Organprogrammzuordnung  *
*                                           *
\*******************************************/

#define ORGANPROGRAMMZUORDNUNG_MIN	57
#define ORGANPROGRAMMZUORDNUNG_MAX	64

typedef struct	konf_organprogtab_t1_tag
	{
    	uchar	organprognr;
    	sshort	system_organ_tab[SYSTEM_MAX];
    	sshort	next_index;
	}__attribute__ ((packed))
	konf_organprogtab_t1;

typedef struct	konf_organprogtab_t_tag
	{
    	uchar			startindex;
    	uchar			anzahl_programme;
    	konf_organprogtab_t1	orgprog[ORGPROG_SPEICHER_MAX];
	}__attribute__ ((packed))
	konf_organprogtab_t;

/************************************************\
*                                               *
* initblock 100...105 Organprogrammzuordnung_2  *
*                                               *
\************************************************/

#define ORGANPROGRAMMZUORDNUNG_2_MIN	100
#define ORGANPROGRAMMZUORDNUNG_2_MAX	105

/************************************\
*                                    *
* initblock 65 Organprogrammdaten    *
*                                    *
\************************************/

#define ORGANPROGRAMMDATEN		65

typedef struct	konf_organdat_t_tag
	{
		ushort           index;
		orgprog_dat_t	orgdat;
	}__attribute__ ((packed))
	konf_organdat_t;

/************************************\
*                                    *
* initblock 66 Geraeteprogrammdaten  *
*                                    *
\************************************/

#define GERAETEPROGRAMMDATEN		66

typedef struct	konf_gerprog_t_tag
	{
		ger_orgprog_t	ger_progdat;
	}__attribute__ ((packed))
	konf_gerprog_t;

/***********************************\
*                                   *
* Initblock 70 DFR Organprog.daten  *
*                                   *
\***********************************/

#define	DFR_ORGANPROGRAMMDATEN	70

typedef struct	konf_dfr_organdat_t_tag
	{
		dr_orgprog_t	dfr_orgprogdat;
	}__attribute__ ((packed))
	konf_dfr_organdat_t;

/***********************************\
*                                   *
* Initblock 71 DFR DL-Daten 	    *
*                                   *
\***********************************/

#define	DFR_DL_DATEN	71

typedef struct	konf_dfr_dl_daten_t_tag
	{
		dl_dfrprog_t	dl_orgprogdat;
	}__attribute__ ((packed))
	konf_dfr_dl_daten_t;

/************************************\
*                                    *
* initblock 72 Fernsehirisdaten		 *
*                                    *
\************************************/

#define FERNSEHIRISDATEN		72

typedef struct	konf_fs_iris_t1_tag
	{
		ushort   	anz_digit_value;
	}__attribute__ ((packed))
	konf_fs_iris_t1;

typedef struct	konf_fs_iris_t2_tag
	{
		ushort   	digit_tab[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_fs_iris_t2;

typedef struct	konf_fs_iris_t3_tag
	{
		sshort  	abgl_dl_bp;
		ushort	abgl_dl_dosleist;
		sshort	abgl_aufn_bp;
		ushort	abgl_aufn_dosis;
		sshort	abgl_aufn_bp_gf;
		ushort	abgl_aufn_dosis_gf;
		sshort	max_iris_gf;
		sshort	dir_mode_bp;
		uchar	dummy[50];
	}__attribute__ ((packed))
	konf_fs_iris_t3;

/************************************\
*                                    *
* initblock 73 Filterkennlinien		 *
*                                    *
\************************************/

#define FILTERKENNLINIEN		73

typedef struct	konf_filterkennl_t1_tag
	{
		ushort   	anz_filter;
	}__attribute__ ((packed))
	konf_filterkennl_t1;

typedef struct	konf_filterkennl_t2_tag
	{
		uchar  	filter_nr;
		ushort 	filter_typ;
		uchar	anz_punkte;
	}__attribute__ ((packed))
	konf_filterkennl_t2;

typedef struct	konf_filterkennl_t3_tag
	{
		ushort   	kv_tab[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_filterkennl_t3;

typedef struct	konf_filterkennl_t4_tag
	{
		ushort   	korr_tab[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_filterkennl_t4;

/************************************\
*                                    *
* initblock 74  BV-Korrektur    	 *
*                                    *
\************************************/

#define BV_KORR 		74

typedef struct	konf_bvkorr_t1_tag
	{
		uchar  	dummy;
	}__attribute__ ((packed))
	konf_bvkorr_t1;

typedef struct	konf_bvkorr_t2_tag
	{
		uchar  	gx_tab_len;
	}__attribute__ ((packed))
	konf_bvkorr_t2;

typedef struct	konf_bvkorr_t3_tag
	{
		ushort 	kv_tab[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_bvkorr_t3;

typedef struct	konf_bvkorr_t4_tag
	{
        ushort    bp_korr[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_bvkorr_t4;


/************************************\
*                                    *
* initblock 75  Rasterkorrektur   	 *
*                                    *
\************************************/

#define RASTER_KORR 		75
#define RASTKORR_TAB_LEN 	11

typedef struct	konf_rastkorr_t1_tag
	{
		uchar  	anz_raster;
	}__attribute__ ((packed))
	konf_rastkorr_t1;

typedef struct	konf_rastkorr_t2_tag
	{
		ushort 	raster_typ;
		uchar 	rast_tab_len;
	}__attribute__ ((packed))
	konf_rastkorr_t2;

typedef struct	konf_rastkorr_t3_tag
	{
        ushort    wwbp_tab [DUMMY_LEN];
	}__attribute__ ((packed))
	konf_rastkorr_t3;

typedef struct	konf_rastkorr_t4_tag
	{
        ushort    bp_korr_tab [DUMMY_LEN];
	}__attribute__ ((packed))
	konf_rastkorr_t4;

/************************************\
*                                    *
* initblock 76 Allg. XCU-Daten 		 *
*                                    *
\************************************/

#define ALLG_XCU_DAT		76

typedef struct konf_allg_dat_t1_tag
	{
		sshort	ww_abgleich;
		uchar	regelstop_anz_bilder;
		uchar	anz_strahler;
	}__attribute__ ((packed))
	konf_allg_dat_t1;

typedef struct konf_allg_dat_t2_tag
	{
		uchar	strahler_nr;
		uchar	diamentor;
	}__attribute__ ((packed))
	konf_allg_dat_t2;

typedef struct konf_allg_dat_t3_tag
	{
		uchar	dick_duenn_korr_iont;
		uchar	dick_duenn_korr_mas;
		ushort	max_ma;
		ushort	fbva;
		uchar	raumlicht;
        ushort    dr_faktor_dosis_gen[ZOOM_MAX];
        ushort    dr_faktor_dosis_anz[ZOOM_MAX];
		uchar	zoom_position;
		uchar	language;
		uchar	display_error;
        sshort    iriskorrzoom[ZOOM_MAX];
		uchar 	screensave;
		uchar	organanwahl;
        uchar   lih_enable;
        ushort  skindose;
        uchar   skin_focus_distance;
        uchar   skindose_disp_disable;
        uchar   peripos;
		uchar	doseincrfactor;
		uchar	vidtvsv;
		uchar	notbetr_nein;
		uchar	drdoseincrdr;
		uchar	min_ms_dr;
		uchar	fd_masseinh;
		uchar	dl_filtauto_typ;
        uchar   hoehenlimit_bvNV;
	}__attribute__ ((packed))
	konf_allg_dat_t3;

typedef struct konf_allg_dat_t_tag
	{
		konf_allg_dat_t1	head;
		konf_allg_dat_t2	param[STRAHLER_MAX];
		konf_allg_dat_t3	rest;
	}__attribute__ ((packed))
	konf_allg_dat_t;

/************************************\
*                                    *
* initblock 77 Bildkettendaten DL	 *
*                                    *
\************************************/

#define BILDKETTE_DL		77

typedef struct konf_bildk_dl_t1_tag
	{
		uchar	anzdlmode;
	}__attribute__ ((packed))
	konf_bildk_dl_t1;

typedef struct konf_bildk_dl_t2_tag
	{
		uchar	dl_betr_art;
		uchar	bfreq;
		ushort	matrix;
		uchar	abtastnorm;
		uchar	vorlpegel;
		sshort	iriskorr;
		uchar	agcfix;
		uchar	gamma;
		ushort	video_bllevel;
		uchar	spitzred;
		ushort	spitzpegel;
		ushort 	spitzpar;
	}__attribute__ ((packed))
	konf_bildk_dl_t2;

typedef struct konf_bildk_dl_t_tag
	{
		konf_bildk_dl_t1	head;
		konf_bildk_dl_t2	dl_param[ANZ_MODE];
	}__attribute__ ((packed))
	konf_bildk_dl_t;

/*************************************\
*                                     *
* initblock 78 Bildkettendaten nativ  *
* initblock 79 Bildkettendaten subtr  *
*                                     *
\*************************************/

#define BILDKETTE_NATIV		78
#define BILDKETTE_SUBTR		79

typedef struct konf_bildk_n_s_t1_tag
	{
		uchar	anzaufnmode;
	}__attribute__ ((packed))
	konf_bildk_n_s_t1;

typedef struct konf_bildk_n_s_t2_tag
	{
		uchar	aufn_betr_art;
		uchar	bfreq;
		ushort	matrix;
		uchar	abtastnorm;
		uchar	vorlpegel;
		sshort	iriskorr;
		uchar	agcfix;
		uchar	gamma;
		ushort	video_bllevel;
		uchar	spitzred;
		ushort	spitzpegel;
		ushort 	spitzpar;
	}__attribute__ ((packed))
	konf_bildk_n_s_t2;

typedef struct konf_bildk_n_s_t_tag
	{
		konf_bildk_n_s_t1	head;
		konf_bildk_n_s_t2	n_s_param[ANZ_MODE];
	}__attribute__ ((packed))
	konf_bildk_n_s_t;

/************************************\
*                                    *
* initblock 80 Komp.st. Videosystem  *
*                                    *
\************************************/

#define KOMP_ST_VIDEOSYSTEM	80

typedef struct konf_vs_t_tag
	{
		vs_konfig_t		data;
	}__attribute__ ((packed))
	konf_vs_t;

/*********************************************\
*                                             *
* Initblock 81...91 Uebernahmekennlinien 	  *
*                                             *
\*********************************************/

#define UEBERNAHMEKENNLINIE_MIN	81
#define UEBERNAHMEKENNLINIE_MAX	91

typedef struct	konf_uebernahmekennl_t1_tag
	{
		uchar	start_index;
		uchar   anz_kennlinien;
	}__attribute__ ((packed))
	konf_uebernahmekennl_t1;

typedef struct	konf_uebernahmekennl_t2_tag
	{
		ushort	kennl_id;
	    uchar	tab_len;
	}__attribute__ ((packed))
	konf_uebernahmekennl_t2;

typedef struct	konf_uebernahmekennl_t3_tag
	{
		ushort	ww_bp_tab[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_uebernahmekennl_t3;

typedef struct	konf_uebernahmekennl_t4_tag
	{
		ushort	kv_bp_tab[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_uebernahmekennl_t4;

typedef struct	konf_uebernahmekennl_t5_tag
	{
		uchar   kv_delta;
	}__attribute__ ((packed))
	konf_uebernahmekennl_t5;

/******************************************\
*                                          *
* Initblock 92 DL Kennlinie Hand 	   	   *
*                                          *
\******************************************/

#define DL_KENNL_HAND	92

typedef struct konf_kv_ma_tab_t1_tag
	{
		uchar stuetzpunkte;
	}__attribute__ ((packed))
	konf_kv_ma_tab_t1;

typedef struct konf_kv_ma_tab_t2_tag
	{
		ushort kv_wert[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_kv_ma_tab_t2;

typedef struct konf_kv_ma_tab_t3_tag
	{
		ushort ma_wert[DUMMY_LEN];
	}__attribute__ ((packed))
	konf_kv_ma_tab_t3;

/************************************\
*                                    *
* Initblock 94 Schwaerzungskorrektur *
* fuer Schichtprogramme              *
*                                    *
\*************************************/

#define SCHICHTPROGSCHWAERZKORR     94
typedef struct konf_schichtschwkorr_t1_tag
	{
  		uchar anzahl_systeme;
	}__attribute__ ((packed))
    konf_schichtschwkorr_t1;

typedef struct konf_schichtschwkorr_t2_tag
	{
        char   schwkorr;
	}__attribute__ ((packed))
    konf_schichtschwkorr_t2;

typedef struct konf_schichtschwkorr_t3_tag
	{
        uchar anzahl_schichtprog;
        konf_schichtschwkorr_t2 schwkorr[SCHICHTPROG_MAX];
	}__attribute__ ((packed))
    konf_schichtschwkorr_t3;

typedef struct konf_schichtschwkorr_t_tag
	{
        konf_schichtschwkorr_t1 head;
        konf_schichtschwkorr_t3 schwkorr[SYSTEM_MAX];
	}__attribute__ ((packed))
    konf_schichtschwkorr_t;

/************************************\
*                                    *
* Initblock 95 FDBS_KONFIG 			 *
* Offsetaufnahmen		             *
*                                    *
\*************************************/

#define KONF_FDBS 95

typedef struct konf_fdbs_tag_t1
	{
		uchar 	system_nr;
		uchar	startup_offset_cnt;
		uchar	systemsel_offset_cnt;
		ushort	offset_cycle;
    }__attribute__ ((packed))
	konf_fdbs_t1;

typedef struct konf_fdbs_tag_t2
	{
		uchar			dummy[30];
    }__attribute__ ((packed))
	konf_fdbs_t2;

typedef struct konf_fdbs_tag
	{
		uchar			anzahl_systeme;
		konf_fdbs_t1	fdbs_konf_data [SYSTEM_MAX + 1];
		konf_fdbs_t2	dummies;
	}__attribute__ ((packed))
	konf_fdbs_t;

/*******************************************\
*                                           *
* Initblock 96 Diamentorkorrekturfaktoren   *
* fuer Filter                               *
*                                           *
\*******************************************/

#define DIAMENTOR_KORR_FAKT        96

typedef struct  konf_diamentorkorrfakt_t_tag
	{
        diamentorkorrfakt_t     diamentor_korr;
	}__attribute__ ((packed))
    konf_diamentorkorrfakt_t;


/************************************\
*                                    *
* initblock 97 Allg. Sys.-Daten 		 *
*                                    *
\************************************/

#define ALLG_SYS_DATEN		97

/************************************\
*                                    *
* Gerät initblock 1 DL-Skindose Filter    *
*                                    *
\************************************/

#define DL_SKINDOSE_FILT      1

/************************************\
*                                    *
* initblock 97 Allg. Sys.-Daten 		 *
*                                    *
\************************************/

#define COLLIMATOR_OFFSET   1  //for IconosM development,04/14, 2009, Yang Zhiming

/************************************\
*                                    *
* Generator-Initblock 2 Iondaten     *
*                                    *
\************************************/

#define	GEN_IONDATEN		2

typedef struct	konf_gen_iondaten_t1_tag
	{
		uchar   anzahl_ionch;
	}__attribute__ ((packed))
	konf_gen_iondaten_t1;

typedef struct	konf_gen_iondaten_t3_tag
	{
		uchar	empf_h;
		uchar	empf_u;
		uchar	empf_d;
		uchar	detector;
	}__attribute__ ((packed))
	konf_gen_iondaten_t3;

typedef struct	konf_gen_iondaten_t2_tag
	{
		uchar	iont_channel;
		konf_gen_iondaten_t3	eingangsempf;
		uchar	vorhalt;
		ushort	b_sig_soll;
	}__attribute__ ((packed))
	konf_gen_iondaten_t2;

typedef struct	konf_gen_iondaten_t_tag
	{
		konf_gen_iondaten_t1	head;
		konf_gen_iondaten_t2	iondaten[IONCH_MAX];
	}__attribute__ ((packed))
	konf_gen_iondaten_t;

#define B_SIGNAL_DETEKTOR	6

/************************************\
*                                    *
* Generator-Initblock 101 Iont_Empf  *
*                                    *
\************************************/

#define	GEN_IONEMPFINDLICHKEIT	101

typedef struct	konf_gen_ionempf_t1_tag
	{
		uchar   anzahl_detektor;
	}__attribute__ ((packed))
	konf_gen_ionempf_t1;

typedef struct	konf_gen_ionempf_t3_tag
	{
		sshort	kl_h_ukv;
		sshort	kl_h_okv;
		sshort	kl_u_ukv;
		sshort	kl_u_okv;
		sshort	kl_d_ukv;
		sshort	kl_d_okv;
	}__attribute__ ((packed))
	konf_gen_ionempf_t3;

typedef struct	konf_gen_ionempf_t2_tag
	{
		uchar	detektortyp;
		konf_gen_ionempf_t3		kennl;
	}__attribute__ ((packed))
	konf_gen_ionempf_t2;

typedef struct	konf_gen_ionempf_t_tag
	{
		konf_gen_ionempf_t1	head;
		konf_gen_ionempf_t2	detektordaten[DET_TYP_KORR_MAX+1];
	}__attribute__ ((packed))
	konf_gen_ionempf_t;

/************************************\
*                                    *
* SPC-Initblock 1           		 *
*                                    *
\************************************/

#define	SPC_OPTIONEN		1

typedef struct	konf_spc_option_t2_tag
	{
		ushort	option_nr;
		ulong	anlagen_opt;
	}__attribute__ ((packed))
	konf_spc_option_t2;

typedef struct	konf_spc_option_t1_tag
	{
		uchar   anzahl_anlagen_opt;
		konf_spc_option_t2	optionen[10];
	}__attribute__ ((packed))
	konf_spc_option_t1;

/************************************\
*                                    *
* VIDEOSYSTEM-Initblock 1            *
*                                    *
\************************************/

#define	VIDEO_ALLG_DATEN		1

typedef struct	konf_video_allg_t_tag
	{
		ushort	bv_uebersicht;
		ushort	b_sig_soll;
	}__attribute__ ((packed))
	konf_video_allg_t;

/************************************\
*                                    *
* BEDIENUNG - Initblock 4            *
*                                    *
\************************************/

#define	REGTEXT_INIT		4


/************************************\
*                                    *
* BEDIENUNG - Initblock 5...124      *
*                                    *
\************************************/

#define	ORGTEXT_INIT_MIN		5
#define	ORGTEXT_INIT_MAX		124

/************************************\
*                                    *
* DFR-Initblock 2                    *
*                                    *
\************************************/

#define	ANLAGENDATEN		2

typedef struct	konf_dfr_anl_t_tag
	{
		uchar 	language;
		uchar 	anz_zoom;
		ushort	zoom_size[ZOOM_MAX];
		ushort 	kv_max;
		uchar	focus_kl;
		uchar 	focus_gr;
		uchar 	focus;
		uchar 	raster_typ;
		uchar 	anz_schicht_prog;
        uchar   schicht_winkel[SCHICHTPROG_MAX];
        ushort    schicht_zeit[SCHICHTPROG_MAX];
		uchar	max_pos;
		uchar	auto_filter;
		uchar	sdm;
		uchar	dl_prog_ctr;
		ushort	fisa;
	}__attribute__ ((packed))
	konf_dfr_anl_t;

/************************************\
*                                    *
* DFR-Initblock 13                    *
*                                    *
\************************************/

#define ERW_ANL_EIGENSCHAFT        13

#define DFR_FILTERNAME_MAX          5

typedef struct  konf_dfr_erw_anl_eigenschaft_t1_tag
	{
        uchar   sdm_anwahl;
        uchar   stand_type;
        ushort  toa;
        uchar   auto_shutter;
        uchar   schichthoehe;
        uchar   anz_zoom;
    }__attribute__ ((packed))
    konf_dfr_erw_anl_eigenschaft_t1;

typedef struct  konf_dfr_erw_anl_eigenschaft_t2_tag
	{
        ushort  zoom_size;
    }__attribute__ ((packed))
    konf_dfr_erw_anl_eigenschaft_t2;

typedef struct  konf_dfr_erw_anl_eigenschaft_t3_tag
	{
        uchar   filternr;
        char    filtername[9];
    }__attribute__ ((packed))
    konf_dfr_erw_anl_eigenschaft_t3;


/************************************\
*                                    *
* DFR-Initblock 14                   *
*                                    *
\************************************/

#define AUFN_DL_FILTER        14

typedef struct  konf_dfr_aufn_dl_filter_t1_tag
	{
        uchar   anz_filter;
    }__attribute__ ((packed))
    konf_dfr_aufn_dl_filter_t1;

typedef struct  konf_dfr_aufn_dl_filter_t2_tag
	{
        uchar   filternr;
        char    filtername[9];
    }__attribute__ ((packed))
    konf_dfr_aufn_dl_filter_t2;


/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/
extern ushort store_sys_dat(ushort anzahldaten,konf_systemdaten_t *data);
extern ushort store_anlagenaufbau(ushort anzahldaten,void *data);
extern ushort store_fk_dat(ushort anzahldaten,char *data);
extern ushort store_org_reg(ushort anzahldaten,konf_organregiontab_t1 *data);
extern ushort store_org_prog(ushort anzahldaten,konf_organprogtab_t  *data);
extern ushort store_org_dat(ushort anzahldaten,char  *data);
extern ushort store_fk_dat(ushort anzahldaten,char *data);
extern ushort store_fe_dat(ushort anzahldaten,konf_fe_daten_t *data);
extern ushort store_roe_dat(ushort anzahldaten,konf_strahlerdaten_t *data);
extern ushort store_durchgriffs_tab(ushort anzahldaten,konf_durchgriffstab_t1 *data);
extern ushort store_konstlast_tab(ushort anzahldaten,konf_konstlasttab_t1 *data);
extern ushort store_serienbelast_tab(ushort anzahldaten,konf_serientab_t1 *data);
extern ushort store_roehrenlastrechner_allg(ushort anzahldaten,konf_rlr_allg_t1 *data);
extern ushort store_roehrenlastrechner_tab(ushort anzahldaten,konf_rlr_tab_t1 *data);
extern ushort store_dl_data (ushort anzahldaten, konf_dl_daten_t * data);
extern ushort store_bv_konfig (ushort anzahldaten, konf_bv_konfig_t * data);
extern ushort store_schichtprog (ushort anzahldaten, konf_schichtprog_t * data);
extern ushort store_aufn_bremsen (ushort anzahldaten, konf_aufn_brems_t * data);
extern ushort store_tubus_messfeld (ushort anzahldaten, konf_tubus_messfeld_t * data);
extern ushort store_ks_konfig (ushort anzahldaten, konf_ks_konfig_t * data);
extern ushort store_ks_teilprog (ushort anzahldaten, konf_ks_teilprog_t * data);
extern ushort store_fs_aufnsteuer (ushort anzahldaten, konf_fs_aufnsteuer_t * data);
extern ushort store_se_konfig (ushort anzahldaten, konf_se_konfig_t * data);
extern ushort store_sm_konfig (ushort anzahldaten, konf_sm_konfig_t * data);
extern ushort store_gerprog_dat(ushort anzahldaten, konf_gerprog_t *data);
extern ushort store_dfr_org_dat(ushort anzahldaten, konf_dfr_organdat_t * data);
extern ushort store_dfr_dl_dat(ushort anzahldaten, konf_dfr_dl_daten_t * data);
extern ushort store_fs_iris_dat(ushort anzahldaten,konf_fs_iris_t1 *data);
extern ushort store_filterkennlinien(ushort anzahldaten, konf_filterkennl_t1 * data);
extern ushort store_rast_korr(ushort anzahldaten, konf_rastkorr_t1 * data);
extern ushort store_bv_korr(ushort anzahldaten, konf_bvkorr_t1 * data);
extern ushort store_gen_iontomatdaten(ushort anzahldaten,konf_gen_iondaten_t *data);
extern ushort store_gen_iontomatempf(ushort anzahldaten,konf_gen_ionempf_t *data);
extern ushort store_uebernahmekennlinien(ushort anzahldaten, konf_uebernahmekennl_t1 *data);
extern ushort store_allg_xcu_dat(ushort anzahldaten, konf_allg_dat_t *data);
extern ushort store_bildk_dl_dat(ushort anzahldaten, konf_bildk_dl_t *data);
extern ushort store_bildk_nativ_dat(ushort anzahldaten, konf_bildk_n_s_t *data);
extern ushort store_bildk_subtr_dat(ushort anzahldaten, konf_bildk_n_s_t *data);
extern ushort store_vs_dat(ushort anzahldaten,konf_vs_t *data);
extern ushort store_kv_ma_tab (ushort anzahldaten, konf_kv_ma_tab_t1 * data);
extern ushort store_spc_optionen(ushort anzahldaten, konf_spc_option_t1 * data);
extern ushort store_dfr_anldat(ushort anzahldaten, char *data);
extern ushort store_dfr_erw_anl_eigenschaft(ushort anzahldaten, char *data);
extern ushort store_dfr_aufn_dl_filter(ushort anzahldaten, konf_dfr_aufn_dl_filter_t1 *data);
extern ushort store_schichtschwkorr (ushort anzahldaten, konf_schichtschwkorr_t * data);
extern ushort store_konf_fdbs (ushort anzahldaten, konf_fdbs_t * data);
extern ushort store_diamentor_korr_fakt(ushort anzahldaten, konf_diamentorkorrfakt_t * data);
extern ushort store_allg_sys_daten(ushort anzahldaten, allg_sys_konfig_t *data);
extern ushort store_dl_skindose_filt(ushort anzahldaten, dl_skindose_filt_t *data);
extern ushort stort_collimator_offset(ushort anzahldaten, ushort *data);//for IconosM development,04/14, 2009, Yang Zhiming
/***************************************************************/
/* Ende v. Wiedereintrittssicherung: */
#endif
