/**
 * \file      konfig.h
 *
 * \author    4plus GmbH
 * \author    Janschitz
 *
 * \project   XCU_2
 * \products  XCU_2
 *
 * $Date: 2007/09/14 12:38:06 $
 * $Revision: 1.25 $
 *
 * \brief     Deklaration der XCU Konfigurationsdaten
 *
 * $Log: konfig.h,v $
 * Revision 1.25  2007/09/14 12:38:06  fabian
 * Gelöst wurde:
 * - Bug 2406:  DISPLAY.xcs_grid_focus_units aus xcu.caf lesen und abspeichern
 *
 * Revision 1.24  2007/09/05 09:47:27  hans
 * Neuer Parameter zoom_on_rad_ogp in tui_misc_konfig auf int umdeklariert
 *
 * Revision 1.23  2007/09/05 09:26:09  hans
 * Neuer Parameter zoom_on_rad_ogp in tui_misc_konfig
 *
 * Revision 1.22  2007/08/23 12:41:04  fabian
 * Gelöst wurden:
 * - Bug 2332: XRAY_GEN.force_fluoro_in_scan aus xcu.caf in konfig_dat gelesen
 *
 * Revision 1.21  2007/08/22 07:19:03  fabian
 * Gelöst wurden:
 * - Bug 2261: DISPLAY.xcs_SID_units aus xcu.caf in konfig_dat gelesen
 * - für Bug 2198: aec_12 und aec_16 Messfeldpositionen aus xcu.caf in konfig_dat gelesen
 * - für Bug 2260: Detectortypen und Größe aus  xcu.caf in konfig_dat gelesen
 * - Bug 2289: DISPLAY.xcs_collimator_units aus xcu.caf in konfig_dat gelesen
 *
 * Revision 1.20  2007/08/01 10:22:52  hans
 * Tabellen für DL-Filterautomatik in konfig_dat eingebaut ( Bug 2245 )
 *
 * Revision 1.19  2007/07/27 12:14:41  fabian
 * - Bug 2198 teilweise gelöst
 * - PIXIUM_TILT = 4 definiert (in Absprache mit sk)
 *
 * Revision 1.18  2007/07/23 08:38:39  fabian
 * Bug 2198 teilweise gelöst (tube_ceiling_stand_type eingefügt)
 *
 * Revision 1.17  2007/06/26 15:53:33  reinhold
 * Konfiguration der AEC Kammern
 *
 * Revision 1.16  2007/06/19 12:53:36  alexander_s
 * - Added configuration support for a second TUI
 * - Processing XCU.dat after ST_DATA_TRANS
 *
 * Revision 1.15  2007/04/27 16:07:45  reinhold
 * Stationsnamenlänge von 11 auf 12  Zeichen  erhöht
 *
 * Revision 1.14  2007/03/08 15:53:02  alexander_m
 * XCU_2 VB07C REV08
 * PRE IT 3
 *
 * Revision 1.13  2007/01/25 17:13:07  michael
 * HT Cable Length Configuration
 *
 * Revision 1.12  2007/01/16 14:51:39  alexander_m
 * konfig_dat->tui_misc_konfig->station_name hinzugefuegt
 *
 * Revision 1.11  2006/12/08 07:23:47  alexander_m
 * SeriesSound in tui_misc_konfig added
 *
 * Revision 1.10  2006/11/27 16:24:10  michael
 * Can Node ID's for SE, DAP in xcu konfig
 *
 * Revision 1.9  2006/11/24 11:47:49  alexander_m
 * can_node_id in tui_misc_konfig hinzugefuegt
 *
 * Revision 1.8  2006/11/09 09:38:41  alexander_m
 * *** empty log message ***
 *
 * Revision 1.7  2006/10/27 13:15:28  alexander_m
 * display_fluoro_units in tui_misc_konfig eingetragen
 *
 * Revision 1.6  2006/10/27 13:01:19  michael
 * Added Iontomate Dose Correction Value
 *
 * Revision 1.5  2006/10/18 11:45:46  alexander_m
 * AbgleichwertDL und AbgleichwertFL aus tui_misc_konfig entfernt
 *
 * Revision 1.4  2006/10/10 13:51:09  alexander_m
 * tui_misc_konfig_tag added
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
 ******************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef KONFIG
#define KONFIG

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                                                              */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                                                              */
/*----------------------------------------------------------------------*/

/*]     END: common     definitions     */

#define DL_MEM_ANZ      33      /* Anzahl der Memory-Nr. fuer DFR Dl-Programme */

#define TEILGAUSW       3
#define ABKUEHL_TAB_LEN 100

#define INIT_BLOCK_MAX      40
#define INIT_DAT_MAX        500
#define DUMMY_LEN           1

#define NUM_DEFAULT_ORGPRG  10          /* Anzahl Default-OGP´s */

#define ORGWAHL_MAX             20
#define ORGWAHL_MIN              1
#define ORGPROG_SPEICHER_MAX    252     /* max. Speicher f. Organprogramm - */

#define FIRST_ORGPROG_SPEICHER_MAX 144  /* Ende des ersten Bereiches Orgprog-Daten*/

                                        /* strukturen */
#define ORGDAT_SPEICHER_MAX     999     /* max. Speicher f. Organprogramm- */
                                        /* Aufnahmedatenstrukturen */

#define DFR_ORGDAT_SPEICHER_MIN 1       /* niedrigste DFR-Prog-Nr. */
#define DFR_ORGDAT_SPEICHER_MAX 999     /* hoechste DFR-Prog-Nr. */

/* --- Geraeteprogramme----------------------------------------------------- */

#define GER_PROG_SPEICHER_MIN   1       /* niedrigste Geraete-Prog-Nr. */
#define GER_PROG_SPEICHER_MAX   999     /* hoechste Geraete-Prog-Nr. */

/* ------------------------------------------------------------------------- */
#define ENTRY_FREE      (sshort) -1       /* Eintrag in Array nicht belegt */
#define LISTEN_ENDE     ENTRY_FREE      /* letztes Element in verketteter */
                                        /* Liste */
#define ANWAEHLEN       1               /* zeigt an, ob bei einer Organwahl */
                                        /* KS-, DL-, Schicht-Prog,... angewahlt */
                                        /* werden soll oder nicht */
#define NICHT_ANWAEHLEN         0
#define SPEICHERN_XCU           0       /* Organprogrammdaten werden in der XCU gespeichert */
#define SPEICHERN_KOMP          1       /* Organprogrammdaten werden in den Komponenten gespeichert */


#define KOLLPROG_MAX            3                       /* max. Kollisionsprogramme     fuer GG */
#define KOLLPROG_MIN            0

#define ANTRIEBE_MAX            25
#define ANTRIEBE_MIN            0
#define AUFN_BREMS_MAX          9

#define KS_MAX                  5       /* Anzahl der moegl. Kassettensysteme */
#define ANZ_KASS_PRG            10      /* Anzahl der moegl. Kassettenprogramme */
#define ANZ_TEILG_PRG           3       /* Anzahl der moegl. Teilungsprogramme */
#define ANZ_BILD_POS            12      /* Anzahl der moegl. Bildpositionen */
#define ALLE_BILD_POS           0       /* Alle bild-Pos., kein Mischprogramm */
#define BD_MAX                  5       /* Anzahl der moegl. Bedienungen */

/* Max. Werte fuer DFR DL-Daten */
#define DL_PARAM_MAX            3
#define PULSFREQUENZ_MAX        5

/* Max. Werte fuer DFR Organprogrammdaten */
#define FIL_PARAM_MAX           5
#define WIN_PARAM_MAX           10
#define STEP_PARAM_MAX          8
#define SONST_F_PARAM_MAX       10

/* Max. Werte fuer Geraete-Organprogrammdaten */
#define GER_BREMS_PARAM_MAX     9     /* 0-9 */

/* Defines f. Initblock 66.BlendenCmd */
#define BLENDCMD_POS            1
#define BLENDCMD_WINKEL         2
#define BLENDCMD_POSWINKEL      3

/* Max. Kurvenstuetzpunkte fuer konfigurierbare Tabellen */
#define GX_TAB_LEN                 108
#define FILKORR_TAB_LEN             10
#define UEBERNAHME_TAB_LEN          11
#define DURCHGRIFF_TAB_LEN          10
#define KONSTLAST_TAB_LEN           25
#define SERIEN_TAB_LEN              18
#define ROEHRENLASTRECHNER_DAT_LEN  80
#define KV_MA_TAB_LEN               10
#define DIGIT_TAB_LEN              160
#define ANZ_MODE                    35
#define RAST_TAB_LEN                11

/* Anzahl der max. Serienbelastungstabellen (Kurvenschar) */
#define SERIEN_TAB_ANZ_MAX      10

/* Tabellenlaenge der Videosystemdaten */
#define VS_TAB_LEN      4

/* Option-Nr. fuer Organprogramme im SPC-Initblock 1 */
#define ORG_OPTION_MIN      0
#define ORG_OPTION_MAX      9

/* Makros innerhalb SE_KONFIG: */
#define HALBE_BP                1       /* Bedienungsschrittweite BP: 1/2 BP */
#define GANZE_BP                2
#define EINFELD_MESSKAMMER      0       /* Nur mittleres Messfeld anwaehlbar */
#define MEHRFELD_MESSKAMMER     1       /* Alle Messfelder anwaehlbar */
#define MESSFANZ_DISABLE        1       /* Messfeldanzeige dunkel schalten */
#define MESSFANZ_ENABLE         0

#define DL_OPTION_EIN   1       /* zeigt an, ob DL i. System moeglich ist (-> systemliste) */
#define DL_OPTION_AUS   0

#define KOMP_NAME_LEN   20

/* Makros f. die versch. Arten der Dick-Duenn-Korrektur: */
#define DICK_DUENN_KORR_KV          1  /* bei Iontomat-Betrieb kV veraendern */
#define DICK_DUENN_KORR_KV_SCHW     2  /* bei Iontomatbetrieb kV + Schwaerzungskorr. */
#define DICK_DUENN_KORR_MAS         1  /* bei mAs-Betrieb mAs veraendern */
#define DICK_DUENN_KORR_MAS_KV      2  /* bei mAs-Betrieb mAs + kV veraendern */

/* Makros f. Systemliste.Betriebsart (Initkennung 2): */
#define SYS_DIREKT_AUFNAHME     1
#define SYS_DIREKT_SCHICHTEN    2
#define SYS_DR_AUFNAHME         3
#define SYS_DR_SCHICHTEN        4
#define SYS_PERI                5
#define SYS_DSA_ANGIO           6
#define SYS_ORTHO_LONGLEG       7
#define SYS_LITHO               8

/* Makros f. Iontomatdaten vom Generator */
#define DET_TYP_KORR_MAX        4

/* Makros f. allg. XCU-Daten */
#define ANZ_REG_BILDER_MIN      0       /* min. Anzahl Bilder fuer Regelstop */
#define ANZ_REG_BILDER_MAX      10      /* max. Anzahl Bilder fuer Regelstop */
#define WW_ABGLEICH_MIN         -40 /* min. Abgleich in 1/4 BP */
#define WW_ABGLEICH_MAX         40      /* max. Abgleich in 1/4 BP */
/* Defines f. Konfig., ob bei Zoomumschaltung zu groesserem Format */
/* aufgeblendet wird */
#define POS_BEI_ZOOMWAHL        (uchar) 1       /* Positionierung bei Zoomwahl */
#define KEIN_POS_BEI_ZOOMWAHL   (uchar) 0       /* Keine Positionierung bei Zoomwahl */


/* Makros fuer Raumlicht */
#define RAUML_DL                1       /* Raumlicht nur bei Dl abschalten  */
#define RAUML_DL_AUFN           2       /* Raumlicht bei Dl und Aufnahme abschalten  */
#define RAUML_DL_ON             3       /* Raumlicht nur bei Dl abschalten und einschalten */
#define RAUML_DL_AUFN_ON        4       /* Raumlicht bei Dl und Aufnahme abschalten und einschalten */


/* Makros fuer letztes Byte in Init 76 */
#define HOEHENLIMIT         (uchar) 0x01
#define BV_VON_NV           (uchar) 0x02


/* Makros f. allg. Sys-Daten */
#define BUCKY_SPEZIAL           1       /* Spezialbehandlung bei URF */
#define UT                      1       /* Untertisch-Graet */
#define OT                      2       /* Obertisch-Graet */
#define C_BOGEN                 3       /* C_BOGEN */

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*      (muss hier stehen, weil in telegr.h     FE_MAX benoetigt wird)  */
/*----------------------------------------------------------------------*/

#include <telegr.h>

/*----------------------------------------------------------------------*/
/*                              Typedefs fuer Organprogramm             */
/*----------------------------------------------------------------------*/
/*----------------------------------------------------------------------*/
/*                              Typedefs fuer Anlagenaufbau             */
/*----------------------------------------------------------------------*/

/**
 * \brief <b>Anlagenaufbau-Struktur</b><br>
 *
 *  Initblock 1 der XCU (F0:1)<br>
 *  (siehe store_anlagenaufbau() in service/srv_konf.cpp)<br>
 */
typedef struct anlagenaufbau_tag
    {
        ushort length;
        char anlagenname[KOMP_NAME_LEN];
        char version[5];
        char rest[ANZAHLDATEN_MAX];
    }__attribute__ ((packed))
    anlagenaufbau_t;



/* Organprog-Aufbau-Strukturen: */
/*------------------------------*/

typedef struct orgprog_dat_tag
    {
        uchar       technik;                 /* Aufnahmedaten */
        uchar       mode;
        ushort        kv;
        uchar       fokus;
        uchar       proz;
        slong       mas;
        slong       ms;
        sshort        schwaerzkorr;            /* Iontomatdaten */
        uchar       messf_gew;
        uchar       folie;
        uchar       kennl;
        uchar       dl_prog;                /* sonstige durch Orgwahl beeinflusste Daten */
                                            /* in extra entspr. Prg. */
        ushort        ger_prog;
        ushort        dfr_prog;
    }__attribute__ ((packed))
    orgprog_dat_t;

typedef struct orgprog_ele_tag
    {
        uchar       organ;          /* Nr. d. Organs, zu dem */
                                    /* Daten gehoeren */
        sshort        orgdat_sys_list[ SYSTEM_MAX + 1 ];
        sshort        next_orgprog_index;
    }__attribute__ ((packed))
    orgprog_ele_t;

/* Organprog-Speicher-Strukturen: */
/*--------------------------------*/
typedef struct orgprog_speicher_tag
    {
        sshort                next_free;
        orgprog_ele_t       prog_mem[ORGPROG_SPEICHER_MAX];
    }__attribute__ ((packed))
    orgprog_speicher_t;

typedef struct orgdat_speicher_tag
    {
        sshort                next_free;
        orgprog_dat_t       dat_mem[ORGDAT_SPEICHER_MAX];
    }__attribute__ ((packed))
    orgdat_speicher_t;

typedef struct dr_step_param_tag
    {
        uchar   b_freq;
        uchar   messf;
    }__attribute__ ((packed))
    dr_step_param_t;

typedef struct fil_param_tag
    {
        uchar   f_enh;
        uchar   f_art;
        uchar   f_kern;
        uchar   f_count;
        uchar   f_param[SONST_F_PARAM_MAX];
    }__attribute__ ((packed))
    fil_param_t;

typedef struct dr_orgprog_tag
    {
        ushort    dfr_prog_nr;
        ushort    matrix;
        ushort    kv_dr;
        ushort    dosis;
        uchar   szene;
        uchar   bones;
        uchar   auto_shut;
        uchar   mark;
        uchar   anat_back;
        uchar   sub_disp;
        uchar   dsa;
        uchar   vid_loop;
        uchar   regelstop;
        uchar   auto_filter;
        uchar   raster;
        uchar   auto_win;
        uchar   win_lut;
        uchar   anz_fil_param;
        fil_param_t fil_param[FIL_PARAM_MAX];
        uchar   anz_win_param;
        sshort    win_wert[WIN_PARAM_MAX];
        uchar   anz_step_param;
        dr_step_param_t dr_step_param[STEP_PARAM_MAX];
    }__attribute__ ((packed))
    dr_orgprog_t;

typedef struct dr_konfig_tag
    {
        ushort    next_free;              /* nächster freier Speicherplatz */
        ushort    minff_pausenzeit;       /* minimale Pausenzeit bei Serien */
        dr_orgprog_t    *dr_orgprog;    /* DFR Organprogrammdaten */
    }__attribute__ ((packed))
    dr_konfig_t;

typedef struct organprogramm_tag
    {
        uchar                   anz_regionen;   /* Anzahl moeglicher Regionen */
        uchar                   anz_organe;     /* Anzahl moeglicher Organe/Region */
        sshort*                   regionsliste;
        orgprog_speicher_t*     prog_speicher;
        orgdat_speicher_t*      dat_speicher;
    }__attribute__ ((packed))
    organprogramm_t;


/*----------------------------------------------------------------------*/
 /* Struktur fuer Geraeteprogrammdaten */
/* ---------------------------------------------------------------------- */

typedef struct brems_param_tag
    {
        uchar   bremse;
        uchar   bremsCmd;
    }__attribute__ ((packed))
    brems_param_t;

typedef struct blend_param_tag
    {
        uchar   blenden_auswahl;
        ushort    blenden_pos;
        sshort    blenden_winkel;
        uchar   blenden_cmd;
    }__attribute__ ((packed))
    blend_param_t;

typedef struct ger_orgprog_tag
    {
        ushort    ger_prog_nr;
        uchar   kass_prog;
        uchar   schicht_prog;
        uchar   periscanning;
        uchar   anz_brems_param;
        brems_param_t   brems_param[GER_BREMS_PARAM_MAX];
        uchar   filter;
        uchar   filter_auto;
        uchar   raster;
        uchar   format_auto;
        uchar   zoom;
        uchar   anz_blenden_param;
        blend_param_t   blend_param[BLENDENANZAHL_MAX];
        ushort    bildformat_q;        /* Bildformat quer */
        ushort    bildformat_l;        /* Bildformat laengs */

        uchar     amplification;
        uchar     laterality;
        uchar     orientation;
        uchar     flip_rot;
        uchar     label_location;
        uchar     modality;
        uchar     diamond_view;
        uchar     nachlauf;
        uchar     possys;
        uchar     width_factor;
        sshort    center_shift;
        uchar     exposure_timeout;
        uchar     uebernahme_kennl;
        uchar     special_params[NUM_SPEC_PARAMS];
        uchar     dummy[17];
    }__attribute__ ((packed))
    ger_orgprog_t;

typedef struct ger_konfig_tag
    {
        ushort            next_free;       /* nächster freier Speicherplatz */
        ger_orgprog_t   *ger_orgprog;   /* Geraete-programmdaten */
    }__attribute__ ((packed))
    ger_konfig_t;


/* ------------------------------------------------------------------------- */

typedef struct dl_defaultliste_tag
    {
        ushort    kv;
        uchar   dl_messfeld;
        uchar   dl_regelstop;
        uchar   dl_programm;
        ushort    avr_vorzugslage;
        uchar   dl_modus;               /* Kennzeichnung des DL-Modes */
        uchar   dl_freq_stufe;
    }__attribute__ ((packed))
    dl_defaultliste_t;

typedef struct sm_defaultliste_tag
    {
        uchar   formatauto;             /* Default Formatautomatik */
    }__attribute__ ((packed))
    sm_defaultliste_t;

typedef struct fk_liste_tag
    {
        uchar   anzahl_fe;      /* Anzahl Funktionseinheiten in diesem Funktionskreis */
        uchar   ap_id[FE_MAX];  /* Funktionseinheiten */
    }__attribute__ ((packed))
    fk_liste_t;

typedef struct fe_tag
    {
        uchar ap_id;        /* Netzweit eindeutige ID der FE */
        uchar fe_typ;       /* Typ der FE ( z.B.: Geraetegeometrie */
        uchar se_anzeige;   /* Wenn Typ Bedienung, ist es dann eine Generatoranzeige?*/
        uchar xcs_komp_nr;
        uchar anl_komp_nr;
    }__attribute__ ((packed))
    fe_t;

typedef struct fe_liste_tag
    {
        uchar   anz_fe;         /* Anzahl der Funktionseinheiten */
        fe_t    fe[FE_MAX];     /* Beschreibung der     Funktionseinheiten */
    }__attribute__ ((packed))
    fe_liste_t;

typedef struct initliste_tag
    {
        uchar           ap_id;  /* AP-ID der FE, fuer die der Initblock ist */
        iinit_t1        initheader;
        iinit_t2        initdaten[ANZAHLDATEN_MAX];
    }__attribute__ ((packed))
    initliste_t;

typedef struct kv_ma_tab_tag
    {
        ushort   kv[KV_MA_TAB_LEN];
        ushort   ma[KV_MA_TAB_LEN];
    }__attribute__ ((packed))
    kv_ma_tab_t;

/* BP-Korrekturtabellen f. WW- & APS-Berechnung */
/*----------------------------------------------*/

/* Eingangsempfindlichkeit der Folien pro Iontomatkanal: */
/* wird benoetigt, um den Dosis-Korrekturwert bei Direkt-Techniken */
/* zu ermitteln */

typedef struct eingangsempf_tag
    {
        uchar   empfl_h;    /* Eingangsempf. f. H [1/4 BP] */
        uchar   empfl_u;    /* Eingangsempf. f. U [1/4 BP] */
        uchar   empfl_d;    /* Eingangsempf. f. D [1/4 BP] */
        uchar   detector;   /* Detectortyp fuer Iontomatempfindlichkeit */
    }__attribute__ ((packed))
    eingangsempf_t;

/* Pro Folie wird eine Nummer aus der Folienkorrkennl-Schar */
/* einmal f. den pos. Bereich und den neg. Bereich */
/* benoetigt; die Folienkorrkennl-Schar selbst ist als Konstante im Modul */
/* se_0korr.c hinterlegt. */

typedef struct folienkorrkennl_tag
    {
        sshort    kennl_pos_nr;
        sshort    kennl_neg_nr;
    }__attribute__ ((packed))
    folienkorrkennl_t;

typedef struct iontoempf_tag
    {
        folienkorrkennl_t   folienkorrkennl[FOLIEN_MAX+1];
    }__attribute__ ((packed))
    iontoempf_t;


/* Diamentor-Werte: */

typedef struct diamentor_tag
    {
        uchar   strahler_nr;            /* Strahler-Nr. des Diamentor */
        uchar   diamentor;              /* Diamentor ja/nein */
    }__attribute__ ((packed))
    diamentor_t;


/* Rasterkorrekturwerte: */

typedef struct rasterkorr_t1_tag
    {
        ushort    raster_typ;             /* Rastertypennr. */
        uchar   rast_tab_len;           /* Anzahl Tabellenstuetzpunkte */
        ushort    korr_ww[RAST_TAB_LEN];   /* Wasserwerte der Rasterkorr-Tabelle */
        ushort    korr_bp [RAST_TAB_LEN];  /* Korr-Werte der Rasterkorr-Tabelle */
     }__attribute__ ((packed))
     rasterkorr_t1;

typedef struct rasterkorr_tag
    {
        uchar           rasterkorr_anz;              /* Anzahl der Rasterkorrekturwerte */
        rasterkorr_t1   rast_tab [RASTERNR_MAX +1];   /* Tabelle */
     }__attribute__ ((packed))
     rasterkorr_t;

/* GX-Kennlinie (Spannungsgangkorrektur fuer BV) */

typedef struct gx_tab_tag
    {
        uchar   tab_len;
        ushort    kv_tab[GX_TAB_LEN];     /* kV-Tabelle [0.1 kV] */
        ushort    bpkorr_tab[GX_TAB_LEN]; /* BP-Korrektur-Tabelle  [ 1/4 BP ] */
    }__attribute__ ((packed))
    gx_tab_t;               /* GX-Kennlinie: BP-Korrektur =f(kV) ; */
                            /* Zuordnung der Werte ueber gleichen Index */
                            /*  -> kv_tab[index] => BP-Korrektur =bpkorr_tab[index] */

/* Filterkorrektur-Tabelle: */

/* Defines fuer Filtertyp: */
#define CU_01MM     1
#define CU_02MM     2
#define CU_03MM     3

typedef struct filkorr_tab_tag
    {
        uchar filter_nr;
        ushort  filter_typ;
        uchar   tab_len;
        ushort    kv_tab[FILKORR_TAB_LEN];        /* kV-Tabelle [0.1 kV] */
        sshort    bpkorr_tab[FILKORR_TAB_LEN];    /* BP-Korrektur-Tabelle  [ 1/4 BP ] */
    }__attribute__ ((packed))
    filkorr_tab_t;          /* Filterkorrektur-Kennl: BP-Korr=f(kV) ; */
                            /* Zuordnung der Werte ueber gleichen Index */
                            /*  -> kv_tab[index] => BP-Korrektur =bpkorr_tab[index] */

typedef struct filkorrkennl_tag
    {
        uchar   filkorrkennl_anz;       /* Anzahl der Filterkorrkennl. */
                                        /* (hoechste Filternr) */
        filkorr_tab_t   filkorr_tab[FILTER_MAX + 1];
                                        /* Filterkorrektur-Kennlinien */
    }__attribute__ ((packed))
    filkorrkennl_t;


/* Uebernahmekennlinien fuer Aufnahmedatenrechnung: */

typedef struct uebernahme_tab_tag
    {
        uchar   tab_len;
        ushort    wwbp_tab[UEBERNAHME_TAB_LEN];
                                        /* Wasserwert-BP-Tabelle  [ 1/4 BP ] */
        ushort    kvbp_tab[UEBERNAHME_TAB_LEN];
                                        /* kV-BP-Tabelle [ 1/4 kV] */
        uchar   kv_delta;               /* Delta-Kv-Wert [1/4 BP] */
                                        /* (Offset-kV-Wert innerhalb dessen */
                                        /* Fokus noch nicht umgeschalten wird) */
    }__attribute__ ((packed))
    uebernahme_tab_t;       /* Uebernahme-Kennl: kv =f(ww_bp) ; */
                            /* Zuordnung der Werte ueber gleichen Index */
                            /*  -> wwbp_tab[index] => kV-BP-Wert */
                            /*                  =kvbp_tab[index] */

typedef struct uebernahmekennl_tag
    {
        uchar uebernahmekennl_anz;      /* Anzahl der Uebernahmekennl. */
                                        /* (hoechste Uebernahmekennlnr) */
        uebernahme_tab_t uebernahme_tab[UEBERNAHMEKENNL_MAX+1];
                                        /* Uebernahmekennlinien */
    }__attribute__ ((packed))
    uebernahmekennl_t;



/* fokusabhaengige Tabellen fuer BLR: */
/* Durchgriffs-, Konstantlast- & Serienbelastungstabelle */
/*-------------------------------------------------------*/

/* Durchgriffstabelle: */

typedef struct kv_tab_tag
    {
        ulong   kv[DURCHGRIFF_TAB_LEN];
    }__attribute__ ((packed))
    kv_tab_t;

typedef struct lastgrenz_tab_tag
    {
        ulong   pmax[DURCHGRIFF_TAB_LEN];
    }__attribute__ ((packed))
    lastgrenz_tab_t;

typedef struct durchgriffs_tab_tag
    {
        uchar   tab_len;        /* Laenge beider Tabellen */
        ulong   *kv_tab;        /* Zgr auf kV-Tabelle [0.1 kV] */
        ulong   *lastgrenz_tab; /* Zgr auf Roehrenbelastungsgrenz/Tabelle [0.1 kW] */
    }__attribute__ ((packed))
    durchgriffs_tab_t;          /* Durchgriffstabelle: Max(P) =f(kV) ; */
                                /* Zuordnung der Werte ueber gleichen Index */
                                /* -> kv_tab[index] => P =lastgrenz_tab[index] */

/* Konstantlasttabelle: */

typedef struct msec_tab_tag
    {
        ulong   msec[KONSTLAST_TAB_LEN];
    }__attribute__ ((packed))
    msec_tab_t;

typedef struct wsec_tab_tag
    {
        ulong   wsec[KONSTLAST_TAB_LEN];
    }__attribute__ ((packed))
    wsec_tab_t;

typedef struct konstantlast_tab_tag
    {
        uchar   tab_len;
        ulong   *ws_tab;            /* Zgr auf Wsec-Tabelle  [0.1 Ws] */
        ulong   *ms_tab;            /* Zgr auf ms-Tabelle  [0.1 ms] */
    }__attribute__ ((packed))
    konstantlast_tab_t;             /* Konstantlasttabelle: Min(ms) = f(Ws); */
                                    /* Aufbau analog zu Durchgriffstabelle */



/* Serienbelastungstabellen (Kurvenschar) */
typedef struct serienpmax_tab_t
    {
        uchar szeit;                    /* [s] */
        ushort pmax[SERIEN_TAB_LEN];      /* [0.1 kW] */
    }__attribute__ ((packed))
    serienpmax_tab_t;

typedef struct serien_tabs_tag
    {
        uchar dutycycle_anz;                /* legt Tabellenlaenge fest */
        uchar dutycycle[SERIEN_TAB_LEN];    /* x-Achse [%] */
        uchar kurven_anz;                   /* Anzahl der Serientabellen */
                                            /* pro Szenenzeit eigene y-Achse */
        serienpmax_tab_t pmax_tab[SERIEN_TAB_ANZ_MAX];
                                            /* Szenenzeiten muessen */
                                            /* aufsteigend sein */
    }__attribute__ ((packed))
    serien_tabs_t;

typedef struct focus_dat_tag
    {
        ushort                max_kws_focus;      /* (0,1 kWs-Schritte)maximaler kWs-Wert fuer den Focus */
        durchgriffs_tab_t   *durchgriffs_tab;   /* Durchgriffstabelle P = f(kV) 100% Roehrenauslastung */
        konstantlast_tab_t  *konstantlast_tab;  /* Konstantlasttabelle min(ms) = f(kWs) */
        serien_tabs_t       *serien_tabs;       /* Serienbelastungstabelle P=f(Szenenzeit,Dutyzycle     )*/
    }__attribute__ ((packed))
    focus_dat_t;

typedef struct scag_rlr_tag
    {
        ulong Q_max;
        ulong Q_rbl;
        ulong Q_awb;
        ushort  i_letzter;
        ulong Q_factor;
        ushort  t_tabelle[ 80 ];
        ushort  Q_tabelle[ 80 ];
    }__attribute__ ((packed))
    scag_rlr_t;

typedef struct roe_dat_tag
    {
        ushort    max_kv_roe;     /* (0,1 kV-Schritte 400...1500)Maximale Roehrenspannung */
        uchar   focus_nr_kl;    /* Nummer des kleinen Fokus */
        uchar   focus_nr_gr;    /* Nummer des grossen Fokus */
        uchar   focus_nr_3;     /* Nummer des dritten Fokus */
        scag_rlr_t *rlr_tab;    /* Zeiger auf W„rmewerttabellen */
        uchar   fokus_anz;      /* Anzahl d. moegl. Fokus-Einstellungen */
        focus_dat_t *fokusdaten;/* Fokusabhaengige Konfig-Daten */
        uchar   BE_Faktor_Aufnahme; /* Faktor zur Berechnung der Belastungseinheiten */
        uchar   BE_Faktor_Serie;    /* Faktor zur Berechnung der Belastungseinheiten */
        uchar   BE_PDL;         /* Zeit fuer 1 BE bei Puls-DL */
    }__attribute__ ((packed))
    roe_dat_t;

typedef struct dl_param_tag
    {
        fil_param_t fil_param;
        uchar   bew_det;
        uchar   bew_det_kern;
        uchar   rausch_f;
        uchar   auto_filter;
        uchar   peak_op;
        uchar   anz_win_param;
        sshort    win_wert[WIN_PARAM_MAX];
    }__attribute__ ((packed))
    dl_param_t;

typedef struct dl_prog_tag
    {
        uchar   dl_kennlinie;
        ushort    dosis_sleistg_27;
        uchar   dl_modus;
        ushort    dl_pulsfrequenz;
    }__attribute__ ((packed))
    dl_prog_t;

typedef struct dl_dfrprog_tag
    {
        uchar   dl_memory_nr;
        ushort    dosis_sleistg_27;
        uchar   dl_modus;
        ushort    pulsfrequenz;
        uchar   defaultfrequ;
        ushort    matrix;
        uchar   mark;
        uchar   h_mask;
        uchar   anz_dl_param;
        dl_param_t  dl_param[DL_PARAM_MAX];
    }__attribute__ ((packed))
    dl_dfrprog_t;

/* Diamentorkorrekturfaktoren: */

typedef struct diam_korr_tag
    {
        uchar filter_nr;
        uchar diamentorkorrektur;
    }__attribute__ ((packed))
    diam_korr_t;

typedef struct diamentorkorrfakt_tag
    {
        ushort   filter_anz;       /* Anzahl der autom. einfahrbaren Filter */
        diam_korr_t   diam_korr_fakt[FILTER_MAX + 1];
                                        /* Diamentorkorrekturfaktoren f. Filter */
    }__attribute__ ((packed))
    diamentorkorrfakt_t;

typedef struct se_konfig_tag
    {
        ushort    max_kw_gen;             /* (0,1 kW-Schritte 1...2000 ) Maximale Generatorleistung */
        ulong   min_ms_gen;             /* (0,1 ms-Schritte 1...1000000) Minimale Generatorschaltzeit */
        ushort    min_ma_gen;             /* (0,1 mA-Schritte 10...20000) Minimaler Roehrenstrom */
        ushort    max_ma_gen;             /* (0,1 mA-Schritte 10...20000) Maximaler Roehrenstrom */
        ushort    min_kv_gen;             /* (0,1 kV-Schritte 400...1500) Minimale Generatorspannung */
        ushort    max_kv_gen;             /* (0,1 kV-Schritte 400...1500) Maximale Generatorspannung */
        ulong   min_mas_gen;            /* (0,01mAs-Schritte 50...80000) Minimales mAs-Produkt (Gen und Leitungsabhaengig) */
        ulong   max_mas_gen;            /* (0,01mAs-Schritte 50...80000) Maximales mAs-Produkt */
        ulong   max_ms_gen;             /* (0,1 ms-Schritte 1...1000000) Maximale Belichtungszeit bei mAs-Betrieb */
        ulong   max_kws_ion;            /* (0,1 kWs-Schritte) Maximaler gesetzlich zulaessiger kws-Wert bei Iontomataufnahmen */
        ulong   min_ms_gen_3;           /* (0,1 ms-Schritte) Minimal erlaubte min. Schaltzeit bei 3-Pkt-Technik */
        ulong   max_ms_ion;             /* (0,1 ms-Schritte 1...1000000) Maximale Aufnahmezeit bei Iontomataufnahmen */
        uchar   step_bp;                /* Schrittweite in Belichtungspunkttabellen bei +/-Bedienung ( 1=1/2Bp, 2=1BP) */
        uchar   hk_xraydelay;           /* Verzoegerung zwischen HK und Strahlungsbeginn */
        uchar   dl_mode;                /* Verfuegbare DL-Modes des Generators */
        ushort    *folie_empf;            /* zu Folie (H,U,D) gehoerige Folienempfindlichkeit */
        uchar   anzahl_strahler;
        roe_dat_t   *roedat;            /* Roerenabhaengige Konfig-Daten */
        ushort    schraeglage_zuschl;     /* Zuschlag fuer APS bei DR-Schichtprogrammen */
        /* Allg. XCU-Daten */
        /*-----------------*/
        sshort    ww_abgleich;            /* Abgleichwert fuer Wasserwetbestimmung */
        uchar   regelstop_anz_bilder;   /* Regelstop nach Anzahl Bilder */
        diamentor_t *diamentor;         /* Diamentor pro Strahler */
        uchar   dick_duenn_korr_iont;   /* Dick-Duenn-Korr bei Iontomatbetrieb */
        uchar   dick_duenn_korr_mas;    /* Dick-Duenn-Korr bei mAs-Betrieb */
        ushort    max_ma_100ms;           /* Max-mA-Gen bei Aufnahmezeit > 100 ms */
        ushort    fbva_default;           /* Defaultwert des FBVA, */
        /* ----------------- */         /* z.B. wenn FBVA fest eingestellt */
        uchar   raumlicht;              /* Raumlichtsteuerung */
        ushort    dr_faktor_dosis_gen[4]; /* Dosisfaktor fuer DR-Aufnahme ( zoomabhaengig )*/
        ushort    dr_faktor_dosis_anz[4]; /* Dosisfaktoranzeige fuer DR-Aufnahme ( zoomabhaengig )*/
        uchar   zoom_position;
        uchar   screensave;             /* Konfiguration Bildschirmschoner [min] */
        uchar   organanwahl;            /* Konfiguration Organwahl bei Systemumwahl */
        uchar   lih_enable;             /* soll bei Schuss aus DL im Direktsystem ein LIH gemacht werden? */
        ushort  skindose;               /* Fuer Anzeige der Restdosis (Max-Wert der Patientendosis) */
        uchar   skin_focus_distance;    /* Abstand Fokus-Patient [cm] */
        uchar   skindose_disp_disable;  /* 0=Skindose anzeigen, 1=nicht_anzeigen */
        uchar   peripos;                /* Position ab der die Dosis angehoben werden soll */
        uchar   doseincrfactor;         /* Dosiserhoehungsfaktor */
        uchar   vidtvsv;                /* Angabe ob Vidiosystem Supervision zulaesst */
        uchar   notbetr_nein;           /* Bei FL-Light kein Notbetrieb zulaessig, Dl sperren */
        uchar   drdoseincrdr;           /* Angabe unter welchem WW die Dosis verdoppelt wird */
        uchar   min_ms_dr;              /* Kuerzeste Schaltzeit in DR-Technik */
        uchar   hoehenlimit_bvNV;       /* Bit 1: Hoehenblende auf das Format der eingelegten Kassette zu begrenzen */
                                        /* Bit 2: BV-Format aus dem NV-Ram */
        uchar   fd_masseinh;            /* Masseinheit fuer FD: inch oder cm */
        uchar   dl_filtauto_typ;        /* Strahlerabhaengig: kleinster Filter fuer Dl-Automatik */
        rasterkorr_t      *rasterkorr_bp;   /* Rasterkorrekturwerte */
        gx_tab_t          *gx_kennl;        /* Spannungsgangkorrektur f. BV */
        filkorrkennl_t    *filkorrkennl;    /* Filterkorrektur-Kennlinien */
        uebernahmekennl_t *uebernahmekennl; /* Uebernahme-Kennlinien */
        eingangsempf_t    *eingangsempf;    /* Eingangsempfindlichkeit fuer H, U, D pro System */
        iontoempf_t       *iontoempf;       /* Nummer(n) der Folienkorrekturkennlinien fuer H,U,D */
        ushort    sm_schwaerzkorrpos;         /* Grenzposition f. Hoehen- & Breitenblende, */
                                            /* ab der Schwaerzkorr. erniedrigt werden muss */
                                            /* in [ 0.1 mm ] */
        uchar   sm_bp_korr;                 /* Erniedrigung der Schwaerzungskorrektur */
                                            /* bei Zufahrt der Blenden [1/4 BP] */
        uchar   messf_anwahl[SYSTEM_MAX+1]; /* Zeigt an, ob aeussere Messfelder */
                                            /* durch Bed. angewaehlt werden koennen */
        uchar   messf_display_enable[SYSTEM_MAX+1]; /* zeigt an, ob Messfeldanwahl */
                                                    /* angezeigt werden soll */
                                                    /* (dunkel, wenn KK-Interf.im System) */
        /* DL-Konfiguration */
        uchar       dl_ionkanal;        /* Iontomat-Kanal fuer DL */
        uchar       anzahl_dl_prog;
        dl_prog_t       *dl_prog;
        dl_dfrprog_t    *dl_dfrprog;
        ushort        anzahl_kv_stufen;
        kv_ma_tab_t *kv_ma_tab;         /* Umrechnungstabelle kV mA */
        diamentorkorrfakt_t    *diamentorkorrfakt;    /* Diamentorkorrekturfaktoren f. Filter */
    }__attribute__ ((packed))
    se_konfig_t;

typedef struct sperr_tag
    {
        uchar           fe_id;
        uchar           antrieb_nr;
        sshort            pos_anfang;
        sshort            pos_ende;
    }__attribute__ ((packed))
    sperr_t;

typedef struct gg_koll_tag
/*  duerfen bestimmte Antriebe nur mehr in einem bestimmten Bereich fahren. */
    {
        uchar   fe_id;
        uchar   antrieb;
        sshort    pos_anfang;
        sshort    pos_ende;
        uchar   sperr_anz;
        sperr_t *sperr_antriebe;
    }__attribute__ ((packed))
    gg_koll_t;

typedef struct gg_konfig_tag
    {
        uchar           kollprog_anz;           /* Anzahl Kollisionsprogramme */
        gg_koll_t       *kollisionsprogramm;    /* Kollisionsprogramme fuer     GG*/
    }__attribute__ ((packed))
    gg_konfig_t;

typedef struct verfahr_tag
    {
        uchar   antrieb_nr;     /* Antrieb, der bewegt werden soll */
        uchar   position;       /* Position, die angefahren werden soll */
    }__attribute__ ((packed))
    verfahr_t;

typedef struct brems_tag
    {
        uchar   antrieb_nr;     /* Antrieb, der gebremst werden soll */
    }__attribute__ ((packed))
    brems_t;

typedef struct blockier_tag
    {
        uchar   antrieb_nr;     /* Antrieb, der blockiert werden soll */
    }__attribute__ ((packed))
    blockier_t;

typedef struct ueberwach_tag
    {
        uchar   antrieb_nr;     /* Antrieb, der ueberwacht werden soll */
        sshort    position;       /* Position, die ueberwacht werden soll */
    }__attribute__ ((packed))
    ueberwach_t;

typedef struct aufn_brems_tag
    {
        uchar   bremse_nr[AUFN_BREMS_MAX];
    }__attribute__ ((packed))
    aufn_brems_t;

typedef struct gg_sys_settings_tag
    {
        uchar   anzahl_verfahr_antriebe;        /* Antriebe, die bei Systemanwahl */
        verfahr_t       *verfahr_antriebe;      /* verfahren werden sollen */
        uchar   anzahl_brems_antriebe;          /* Antriebe, die bei Systemwahl */
        brems_t         *brems_antriebe;        /* gebremst werden sollen */
        uchar   anzahl_blockier_antriebe;       /* Antriebe, die bei Systemwahl*/
        blockier_t      *blockier_antriebe;     /* blockiert werden sollen */
        uchar   anzahl_ueberwachung_antriebe;   /* Antriebe, die in     diesem System */
        ueberwach_t     *ueberwachung_antriebe; /* ueberwacht werden sollen     */
        uchar anzahl_aufn_bremsen;              /*  Antriebe, die bei Aufnahme */
        aufn_brems_t    *aufn_bremsen;          /* gebremst werden sollen */
    }__attribute__ ((packed))
    gg_sys_settings_t;


/* Parameter rastertyp */
#define KEIN_RASTER                 0
#define RASTER_FEST                 1
#define RASTER_VERFAHRBAR           2
#define RASTER_REVERSIERBAR         3
#define RASTER_FAHR_REVERSIERBAR    4

/* Parameter rasterstg */
#define RASTERSTG_DELAYTIME     1
#define RASTERSTG_RESPONSE      2
#define FILTERNAME_LEN          9
typedef struct sm_konfiguration_tag
    {
        uchar rastertyp;
        uchar rasterstg;
        ushort  strahlfrei_delay;
        ushort messf_begrenz_pos;     /* Position der Rechteckblende, ab */
                                    /* wann aeussere Messfelder abgewaehlt */
                                    /* werden muessen [0.1 mm] */
        uchar   anzahl_blenden;
        uchar   blende_nr[BLENDENANZAHL_MAX];
        uchar   fauto;  /* 0 = kein slimit und iffa setzen  1 = slimit und iffa setzen */
    }__attribute__ ((packed))
    sm_konfiguration_t;

typedef struct sm_konfig_tag
    {
        uchar autoformatcntrl;  /* konfig. Formatautomatik; */
                                /* (Werte: "WERT_ALS_LIMIT_ANFAHREN" */
                                /*         oder "WERT_ALS_LIMIT") */
        uchar anzahl_fktkreise;
        sm_konfiguration_t sm[FK_MAX + 1];
        uchar auto_filter_konf;
        char filternames[FILTER_MAX+1][FILTERNAME_LEN];
    }__attribute__ ((packed))
    sm_konfig_t;

typedef struct bv_konfig_tag_t1
    {
        ushort zoom_cm;   /* BV-Durchmesser bei Zoomstufe1..3     [2]..[5] */
                        /* [1] = Uebersichtsformat [0] = nicht belegt*/
        ushort faktdosisgen;
        ushort faktdosisanz;
        sshort iriskorrzoom;
    }__attribute__ ((packed))
    bv_konfig_t1;

typedef struct bv_konfig_tag
    {
        uchar           anzahl_zoomstufen;
        bv_konfig_t1    bv_konf_data [ZOOM_MAX + 1];
        uchar           regelreihenfolge;
                            /* [0] = keine Regelung, [1] = nur AVR, [2] = nur Iris */
                            /* [3] = AVR vor Iris, [4] = Iris vor AVR */
    }__attribute__ ((packed))
    bv_konfig_t;

/* Definitionen fr     Regelreihenfolge: */
enum REIHENFOLGE { KEINE_REGELUNG ,     NUR_AVR , NUR_IRIS , AVR_VOR_IRIS ,     IRIS_VOR_AVR };

typedef struct bd_ks_konfig_tag
    {
        uchar anz_kass_prg;
        struct kass_prg_data_tag
        {
            uchar   anz_teilg_prg;
            struct teilg_prg_data_tag
            {
                uchar anz_bild_pos;
                struct bild_pos_data_tag
                {
                    uchar bild_pos;
                    uchar teilg_q;
                    uchar teilg_l;
                }__attribute__ ((packed)) bild_pos_data [ANZ_BILD_POS];
            }__attribute__ ((packed)) teilg_prg_data [ANZ_TEILG_PRG];
        }__attribute__ ((packed)) kass_prg_data [ANZ_KASS_PRG];
    }__attribute__ ((packed)) bd_ks_konfig_t;

typedef struct bd_daten_tag
    {
        uchar           fe_id;
        ushort            bed_typ;
    }__attribute__ ((packed))
    bd_daten_t;

typedef struct bd_konfig_tag
    {
        bd_ks_konfig_t  bd_ks_konfig;
        uchar           anzahl_bed;
        bd_daten_t      bd_daten[BD_MAX];
    }__attribute__ ((packed))
    bd_konfig_t;

typedef struct ks_daten_tag
    {
        uchar           fe_id;
        uchar           ks_typ;
    }__attribute__ ((packed))
    ks_daten_t;

/* Makros fuer ks_typ */
#define KS_TYP_RASTERLADE       1
#define KS_TYP_ZIELGERAET       2

typedef struct ks_konfig_tag
    {
        uchar   ks_anz;
        ks_daten_t ks_daten[KS_MAX];
    }__attribute__ ((packed))
    ks_konfig_t;

/* Parameter behandlung */
#define SCHUSSMITBEOBACHTUNG    1
#define SPEICHERSCHUSS          2
/* Parameter time */
#define TIME_UNENDLICH  65535

typedef struct fs_aufnsteuer_t_tag
    {
        uchar   systemnummer;
        uchar   behandlung;     /* 0 keine, 1 Schussmitbeobacht, 2 Speicherschuss */
        ushort    time;           /* 0 keine, 1...65534 Zeit[ms], 65535 unendlich */
    }__attribute__ ((packed))
    fs_aufnsteuer_t;

typedef struct fs_konfig_tag
    {
        fs_aufnsteuer_t aufn_steuerung[SYSTEM_MAX+1];
        ushort    anz_digit_value;
        ushort    digit_tab[DIGIT_TAB_LEN];
        sshort    abgl_dl_bp;
        ushort    abgl_dl_dosleist;
        sshort    abgl_aufn_bp;
        ushort    abgl_aufn_dosis;
        sshort    abgl_aufn_bp_gf;
        ushort    abgl_aufn_dosis_gf;
        sshort    max_iris_gf;
        sshort    dir_mode_bp;
        uchar   dummy[50];
    }__attribute__ ((packed))
    fs_konfig_t;

typedef struct dl_bildk_param_tag
    {
        uchar   dl_betr_art;
        uchar   bfreq;
        ushort    matrix;
        uchar   abtastnorm;
        uchar   vorlpegel;
        sshort    iriskorr;
        uchar   agcfix;
        uchar   gamma;
        sshort    video_bllevel;
        uchar   spitzred;
        ushort    spitzpegel;
        ushort    spitzpar;

    }__attribute__ ((packed))
    dl_bildk_param_t;

typedef struct bildk_dl_konfig_tag
    {
        uchar               anzdlmode;
        dl_bildk_param_t    dl_param [ANZ_MODE];
    }__attribute__ ((packed))
    bildk_dl_konfig_t;

typedef struct aufn_bildk_param_t_tag
    {
        uchar   aufn_betr_art;
        uchar   bfreq;
        ushort    matrix;
        uchar   abtastnorm;
        uchar   vorlpegel;
        sshort    iriskorr;
        uchar   agcfix;
        uchar   gamma;
        sshort    video_bllevel;
        uchar   spitzred;
        ushort    spitzpegel;
        ushort    spitzpar;
    }__attribute__ ((packed))
    aufn_bildk_param_t;

typedef struct bildk_aufn_konfig_tag
    {
        uchar               anzaufnmode;
        aufn_bildk_param_t  aufn_param [ANZ_MODE];
    }__attribute__ ((packed))
    bildk_aufn_konfig_t;

typedef struct vs_konfig_tag
    {
        uchar           messf_l[VS_TAB_LEN];
        uchar           messf_m[VS_TAB_LEN];
        uchar           messf_r[VS_TAB_LEN];
        uchar           messf_lm[VS_TAB_LEN];
        uchar           messf_mr[VS_TAB_LEN];
        uchar           messf_lr[VS_TAB_LEN];
        uchar           messf_lmr[VS_TAB_LEN];
        uchar           messf_rund[VS_TAB_LEN];
    }__attribute__ ((packed))
    vs_konfig_t;

typedef struct error_konfig_tag
    {
        uchar   language;
        uchar   display_error;
    }__attribute__ ((packed))
    error_konfig_t;

typedef struct twin_corr_t1_tag
    {
        uchar freq;
        char  iriskorr;
    }__attribute__ ((packed))
    twin_corr_t1;

#define TWIN_CORR_NUM 14

typedef struct allg_sys_konfig_tag
    {
        uchar   anz_data;
        uchar   geraete_art;
        uchar   format_auto;
        uchar   twin_mode;
        uchar   min_dr_ms;
        uchar   min_dsa_ms;
        uchar   schwellw_dr_ms;
        uchar   schwellw_dsa_ms;
        uchar   default_fauto;
        char    twin_iriskorr;
        uchar   spine;
        ushort  simple_dr_dosefactor;
        uchar   iconos_m_special;
        uchar   autocalc_aufnpulse;
        uchar   minimum_coll_300;
        uchar   always_send_iris_settings;
        uchar   always_fill_idfrallganz;
        uchar   d320_aufnsteuerung;
        uchar   xray_disable_telegram;
        uchar   no_imageflip_during_xray;
        uchar   gamma_for_auto3;
        uchar   no_pulsedchange_during_dl;
        twin_corr_t1 twin_correction[TWIN_CORR_NUM];
        uchar   max_twin_freq_dr;
        uchar   special_messfeldbehandlung;
        uchar   gen_desk_FLC;
        uchar   mAs_erhoehung_63_65;
        uchar   kV_erhoehung_99_100;
        ushort  schichtorhalt_kurz;
        ushort  schichtvorhalt_ms_2000;
        ushort  errortextlength_60;
        uchar   bildflip_initwert;
        uchar   detector_vorhanden[SYSTEM_MAX];
        uchar   max_125_kv;
        uchar   direkttechnik_serienbelastung;
    }__attribute__((packed))
    allg_sys_konfig_t;

typedef struct default_fk_liste_tag
    {
        uchar           fk_id;
        uchar           systemnr;
        fk_liste_t      fk_liste;
    }__attribute__ ((packed))
    default_fk_liste_t;

typedef struct defaultliste_tag
    {
        uchar   default_system;                 /* Defaultsystem nach Erstanlauf */
        uchar   default_fk_anz;                 /* Anzahl default-Funktionskreise */
        default_fk_liste_t  *default_fk_liste;  /* Default Funktionskreiszuordnungen */
        dl_defaultliste_t   *dl_defaults;       /* Defaultwerte fuer DL */
        sm_defaultliste_t   *sm_defaults;       /* Defaultwerte fuer SM */
    }__attribute__ ((packed))
    defaultliste_t;

typedef struct dl_skindose_filt_t1_tag
    {
        ushort  tischhoehe;
        uchar   min_filternr_norm;
        uchar   min_filternr_hk;
        uchar   dl_prog;
    }__attribute__((packed))
    dl_skindose_filt_t1;
#define MAX_DL_SKINDOSE_ELEMENTS 10
typedef struct dl_skindose_filt_t_tag
    {
        char                identifyer[5];
        uchar               hystereseis_mm;
        uchar               num_elements;
        dl_skindose_filt_t1 element[MAX_DL_SKINDOSE_ELEMENTS];
    }__attribute__((packed))
    dl_skindose_filt_t;
typedef struct kv_ww_tab_tag
    {
        int     kv_ww[DUMMY_LEN];
    }__attribute__ ((packed))
    kv_ww_tab_t;

typedef struct kv_ww_list_tag
    {
        kv_ww_tab_t* kv_ww[ORGWAHL_MAX];
    }__attribute__ ((packed))
    kv_ww_list_t;

typedef struct organprog_tag
    {
        uchar           kv_ww_kennlinie;    /* Nr. f. kV-WasserWert-Kennlinie */
        siondaten_t1    iondaten;           /* Iontomatdaten aus telegr.h !! */
        saufndaten_t1   aufndaten;          /* Aufnahmedaten aus telegr.h !! */
    }__attribute__ ((packed))
    organprog_t;

typedef struct schichtprogramm_tag
    {
        uchar winkel;  /* Schichtwinkel [Grad] */
        ushort zeit;     /* Schichtzeit [ms] */
        char schwkorr; /* zusaetzl. Schwaerzungkorr. [0.5 BP] */
    }__attribute__ ((packed))
    schichtprogramm_t;

typedef struct schichtprog_tag
    {
        uchar schichtprog_anz;
        schichtprogramm_t     schichtprogramm[SCHICHTPROG_MAX+1];
    }__attribute__ ((packed))
    schichtprog_t;

typedef struct fdbs_konfig_tag_t1
    {
        uchar system_nr;
        uchar   startup_offset_cnt;
        uchar   systemsel_offset_cnt;
        ushort  offset_cycle;
    }__attribute__ ((packed))
    fdbs_konfig_t1;

typedef struct fdbs_konfig_tag
    {
        uchar           anzahl_systeme;
        fdbs_konfig_t1  fdbs_konf_data [SYSTEM_MAX + 1];
        uchar           dummy [30];
    }__attribute__ ((packed))
    fdbs_konfig_t;

#define AABL_WEITERSCHALTEN     1
#define AABL_DL_BEI_VK          2

/* Parameter allg_sys_para  */
#define PLANIIONT_AVAIL 1
#define KASS_EJECT_IF_FULL  2

typedef struct systemliste_tag
    {
        uchar   betriebsart;            /* Verwendete Aufnahmetechnik */
        uchar   target;                 /* Zieleinheit ( BV,KS,...)*/
        uchar   orgdat_ext;             /* Speicherung der Organprog-Daten extern od. intern */
        uchar   dl_prog_anwahl;         /* zeigt an, ob bei Organwahl DL-Prog anwaehlen */
        uchar   schicht_prog_anwahl;    /* zeigt an, ob bei Organwahl Schicht-Prog anwaehlen */
        uchar   kass_prog_anwahl;       /* zeigt an, ob bei Organwahl Kassetten-Prog anwaehlen */
        uchar   dfr_prog_anwahl;        /* zeigt an, ob bei Organwahl DFR-Prog anwaehlen */
        uchar   funktionskreis;         /* Funktionskreisnummer */
        uchar   strahler;               /* Strahler-Nr fuer Strahlerwahl */
        uchar   aufn_ion_kanal;         /* Iontomat-Kanal fuer Aufnahme */
        uchar   anz_aufn_bedorte;
        uchar   aufn_bedienort[4];      /* zulaessige Bedienorte fuer Aufnahme */
        uchar   allg_sys_para;          /* Bit 0: Angabe ob DR_Schichten_Planiiontomat moeglich */
                                        /* Bit 1: Kassette in Ladeposition nach letzter Aufnahme */
        uchar   max_flouro_time_buzzer; /* Max Dl-Zeit bis Hupe (0=4,5min) */
        uchar   max_flouro_time_block;  /* Max DL-Zeit bis blockierung (0=5 min) */
        uchar   max_flouro_time_abs;    /* abolut max DL-Zeit (0=1Stunde) */
        uchar   default_stat_sys;       /* default System in Struct.dat */
        uchar   aufnahmeablauf;         /* Aufnahmeablauf-Konfiguration */
        uchar   dl_option;              /* Kennzeichnung; ob DL moeglich ist */
        gg_sys_settings_t   *gg_sys_settings;   /* GG-Einstellungen fuer Systemwahl */
        fk_liste_t      *fk_liste;      /* Funktionseinheiten fuer dieses Systen */
    }__attribute__ ((packed))
    systemliste_t;


typedef struct
        {
        ushort channel;
        ushort corrValue; // range 0 - 500 [%]
    }__attribute__ ((packed)) corrValueIontDose_t;

typedef struct
    {
        ushort numberOfWorkplaces;
        corrValueIontDose_t corrValueIontDose[IONCH_MAX];
    }__attribute__ ((packed)) iontDoseCorrValues_t;

#define STATIONNAME_LENGTH 12

#define MAX_DETECTORS 3
#define TABLE_DETECTOR 3
#define BWS_DETECTOR 2
#define MOBILE_DETECTOR 1

typedef struct detector_tag
{
    ushort DetektorType;
} __attribute__ ((packed)) detector_t;

#define MAX_DETECTOR_TYPES 2
#define DETECTOR_TYPE_FD5500	1
#define DETECTOR_TYPE_FD5600	2
typedef struct detector_size_tag
{
	ushort size_x;
	ushort size_y;
	ushort pix_cm;

}__attribute__ ((packed)) detector_size_t;


#define AEC_TYP_MAX 2
#define AEC_5_FIELDS_INDEX 1
#define AEC_3_FIELDS_INDEX 2
typedef struct messfeldpositionen_tag
{
    // Messfeldpositionen bezueglich des Blendenzentrums in 1 mm (range 0 - 1000)
        // ############## Messfeld 1 (mitte) #####################
        ushort MF_1_up_pos;                 /* upper position of measuring field 1 (center) */
        ushort MF_1_lo_pos;                 /* lower position of measuring 1 (center) */
        ushort MF_1_le_pos;                 /* left position of measuring 1 (center) */
        ushort MF_1_ri_pos;                 /* right position of measuring 1 (center) */

        // ############## Messfeld 2 (links) #####################
        ushort MF_2_up_pos;                 /* upper position of measuring field 2(left) */
        ushort MF_2_lo_pos;                 /* lower position of measuring field 2 (left) */
        ushort MF_2_le_pos;                 /* left position of measuring field 2 (left) */
        ushort MF_2_ri_pos;                 /* right position of measuring field 2 (left) */

        // ############## Messfeld 3 (rechts) ####################
        ushort MF_3_up_pos;                 /* upper position of measuring field 3 (right) */
        ushort MF_3_lo_pos;                 /* lower position of measuring field 3 (right) */
        ushort MF_3_le_pos;                 /* left position of measuring field 3 (right) */
        ushort MF_3_ri_pos;                 /* right position of measuring field 3 (right) */

        // ############## Messfeld 4 (mitte-links) ###############
        ushort MF_4_up_pos;                 /* upper position of measuring field 4 (center-left) */
        ushort MF_4_lo_pos;                 /* lower position of measuring field 4 (center-left) */
        ushort MF_4_le_pos;                 /* left position of measuring field 4 (center-left) */
        ushort MF_4_ri_pos;                 /* right position of measuring field 4 (center-left) */

        // ############## Messfeld 5 (mitte-rechts) ###############
        ushort MF_5_up_pos;                 /* upper position of measuring field 5 (center-right) */
        ushort MF_5_lo_pos;                 /* lower position of measuring field 5 (center-right) */
        ushort MF_5_le_pos;                 /* left position of measuring field 5 (center-right) */
        ushort MF_5_ri_pos;                 /* right position of measuring field 5 (center-right) */

}__attribute__ ((packed))
messfeldpositionen_t;

#define NONE_MOT 0
#define FULL_MOT 1
#define SEMI_MOT 2
#define DEFAULT_MOT FULL_MOT

#define UNIT_CM 0
#define UNIT_INCH 1

#define CAF_NOT_APPLICABLE 0
#define CAF_YES 1
#define CAF_NO  2

typedef struct tui_misc_konfig_tag
    {
        ushort   ZDF_acq_zoom0;             /* Zoom-Dosis-Faktor bei Zoomstufe 0 acquisition*/
        ushort   ZDF_acq_zoom1;             /* Zoom-Dosis-Faktor bei Zoomstufe 1 acquisition*/
        ushort   ZDF_acq_zoom2;             /* Zoom-Dosis-Faktor bei Zoomstufe 2 acquisition*/
        ushort   ZDF_acq_zoom3;             /* Zoom-Dosis-Faktor bei Zoomstufe 3  acquisition*/
        ushort   ZDF_fl_zoom0;              /* Zoom-Dosis-Faktor bei Zoomstufe 0  fluoro*/
        ushort   ZDF_fl_zoom1;              /* Zoom-Dosis-Faktor bei Zoomstufe 1 fluoro */
        ushort   ZDF_fl_zoom2;              /* Zoom-Dosis-Faktor bei Zoomstufe 2 fluoro*/
        ushort   ZDF_fl_zoom3;              /* Zoom-Dosis-Faktor bei Zoomstufe 3 fluoro*/

        ushort   TubeCeilingStandType;      /* Tube Ceiling Stand Type */

        ushort   display_fluoro_units;      /* Units for display of fluoro duration */
                                            /* 0=seconds, 1=Tenth of Minutes */
        ushort   display_sid_units;         /* Units for display of SID duration */
        ushort   display_collimator_units;  /* Units for display of collimator duration */
        ushort   display_grid_focus_units;  /* Units for display of grid_focus duration */

        ushort   dpp_max;                   /* Limit for dose per pulse [nGy/p]  */
                                            /* Range 0 - 200 nGy/p */
        ushort   StoreFluoroLoopAvailable;  /* Store Fluoro Loop function available or not  */
                                            /* 0 = no, 1 = yes */
        ushort   StoreReferenceAvailable;   /* Store Reference function available or not */
                                            /* 0 = no, 1 = yes */
        ushort   DSAAvailable;              /* DSA function available or not */
                                            /* 0 = no, 1 = yes */
        ushort   DoseSelection;             /* Dose Selection on TUI in µGy or sensitivity values  */
                                            /* 0 = µGy, 1 = sensitivity values */
        ushort   Sensitivity;               /* sensitivity of dose area product meter  */
                                            /* 0 = standard (1 µGy), 1 = pediatrics (0.1 µGy)*/
        ushort   XrayDisplay;               /* Strahlungsanzeige bei Vorkontakt oder tatsaechlicher Strahlungsausloesung */
                                            /* 0 = precontact, 1 = main contact */
	ushort	 tui_1;			    /* TUI 1 verfuegbar? */
					    /* 0 = no, 1 = yes */
	ushort	 tui_2;			    /* TUI 2 verfuegbar? */
					    /* 0 = no, 1 = yes */

        // Messfeldpositionen bezueglich des Blendenzentrums in 1 mm (range 0 - 1000)
        // werden eigentlich gar nicht mehr verwendet
        // ############## Messfeld 1 (mitte) #####################
        ushort MF_1_up_pos;                 /* upper position of measuring field 1 (center) */
        ushort MF_1_lo_pos;                 /* lower position of measuring 1 (center) */
        ushort MF_1_le_pos;                 /* left position of measuring 1 (center) */
        ushort MF_1_ri_pos;                 /* right position of measuring 1 (center) */

        // ############## Messfeld 2 (links) #####################
        ushort MF_2_up_pos;                 /* upper position of measuring field 2(left) */
        ushort MF_2_lo_pos;                 /* lower position of measuring field 2 (left) */
        ushort MF_2_le_pos;                 /* left position of measuring field 2 (left) */
        ushort MF_2_ri_pos;                 /* right position of measuring field 2 (left) */

        // ############## Messfeld 3 (rechts) ####################
        ushort MF_3_up_pos;                 /* upper position of measuring field 3 (right) */
        ushort MF_3_lo_pos;                 /* lower position of measuring field 3 (right) */
        ushort MF_3_le_pos;                 /* left position of measuring field 3 (right) */
        ushort MF_3_ri_pos;                 /* right position of measuring field 3 (right) */

        // ############## Messfeld 4 (mitte-links) ###############
        ushort MF_4_up_pos;                 /* upper position of measuring field 4 (center-left) */
        ushort MF_4_lo_pos;                 /* lower position of measuring field 4 (center-left) */
        ushort MF_4_le_pos;                 /* left position of measuring field 4 (center-left) */
        ushort MF_4_ri_pos;                 /* right position of measuring field 4 (center-left) */

        // ############## Messfeld 5 (mitte-rechts) ###############
        ushort MF_5_up_pos;                 /* upper position of measuring field 5 (center-right) */
        ushort MF_5_lo_pos;                 /* lower position of measuring field 5 (center-right) */
        ushort MF_5_le_pos;                 /* left position of measuring field 5 (center-right) */
        ushort MF_5_ri_pos;                 /* right position of measuring field 5 (center-right) */

        ushort reduced_current;             /* 1-Pnt technology with reduced current(% of nominal value) */

        ushort can_node_id_SE;              /* CAN Node-ID for Polydoros F80 */
        ushort can_node_id_DAP;             /* CAN Node-ID for Kermax DAP */

        ushort SeriesSound;                 /* Acoustic signal for series acquisitions either */
                                            /* during the series or at the end of x-ray of series  */
                                            /* 0= during series, 1=at the end of series*/
        char station_name[STATIONNAME_LENGTH];              /* Station name */

        iontDoseCorrValues_t iontDoseCorrValues;

        unsigned int TubeCount;
        unsigned int HTCableLength_T1;
		unsigned int HTCableLength_T2;		//  : not_applicable

		bool AECOrientation_C1;				//  AEC Orientation Channel 1-6
		bool AECOrientation_C2;
		bool AECOrientation_C3;
		bool AECOrientation_C4;
		bool AECOrientation_C5;
		bool AECOrientation_C6;

        ushort aec_type_C1;	                // AEC Typ Channal 1-6
        ushort aec_type_C2;
        ushort aec_type_C3;
        ushort aec_type_C4;
        ushort aec_type_C5;
        ushort aec_type_C6;

        ushort force_fluoro_in_scan;        //Force fluoro in DR-Scan-Mode (0=not_applicable 1=yes 2=no)

		messfeldpositionen_t 	messfeldpositionen [AEC_TYP_MAX+1];   // Messfeldpositionen
		detector_t 				detector [MAX_DETECTORS+1];           // Detektor mit der Variablen Detoktor-Typ
		detector_size_t 		detector_size [MAX_DETECTOR_TYPES+1]; // Detektor größen
		int						zoom_on_rad_ogp;						// Zoom-Stufe für RAD-OGP´s 0= Keine, 1= Übersicht, 2= Zoom1, 3=Zoom2, 4= Zoom3
  
   // JUST for test wuhh 2010-06-30
    ushort tomo;
    ushort bws;

    }__attribute__ ((packed))
    tui_misc_konfig_t;


#define PIXIUM      3  //neue fd Detektoren
#define PIXIUM_TILT 4  //definiert das RasterWandgerät mit Tiltfunktion

typedef struct fluoro_kv_tag
    {
    	ushort	kv_min;		// kV Wert, unter dem die Filter erhöht werden
    	ushort	kv_max;		// kV Wert, ab dem die Filter erniedrigt werden
    }__attribute__ ((packed))
    fluoro_kv_t;

typedef struct dl_filtauto_tag
    {
    	fluoro_kv_t	kv_table[DLKENNL_MAX+1]; // Tabellenindex 0 bleibt leer
    }__attribute__ ((packed))
    dl_filtauto_t;



typedef struct  konfigurationsdaten_tag
    {
        anlagenaufbau_t *anlagenaufbau;         /* Anlagenaufbau */
        uchar           anzahl_systeme;
        systemliste_t   *systemliste;           /* Systemzuordnungen */
        organprogramm_t *organprogramm;         /* Organprogramme */
        ger_konfig_t    *ger_konfig;            /* Geraete-Organprogramme */
        schichtprog_t   *schichtprogliste;      /* Schichtprogrammliste */
        defaultliste_t  *defaultliste;          /* Systemeinstellungen nach     Einschalten     */
        fe_liste_t              *fe_liste;      /* Anlagenkonfiguration */
        initliste_t             *initliste;     /* Initbloecke fuer Funktionseinheiten */
        se_konfig_t             *se_konfig;     /* Konfigurationsdaten Strahlungserzeigung */
        dr_konfig_t             *dr_konfig;     /* Konfigurationsdaten digitales Bildsystem     */
        gg_konfig_t             *gg_konfig;     /* Konfigurationsdaten Geraetegeometrie */
        sm_konfig_t             *sm_konfig;     /* Konfigurationsdaten Strahlunsmanipulation */
        ks_konfig_t             *ks_konfig;     /* Konfigurationsdaten Kassettensystem */
        fs_konfig_t             *fs_konfig;     /* Konfigurationsdaten Fernsehen */
        bv_konfig_t             *bv_konfig;     /* Konfigurationsdaten Bildverstaerker */
        bd_konfig_t             *bd_konfig;     /* Konfigurationsdaten Bedienung */
        bildk_dl_konfig_t       *bildk_dl_konfig;   /* Konfigdat. fuer Bildkettensteuerung */
        bildk_aufn_konfig_t     *bildk_nativ_konfig;/* Konfigdat. fuer Bildkettensteuerung */
        bildk_aufn_konfig_t     *bildk_subtr_konfig;/* Konfigdat. fuer Bildkettensteuerung */
        vs_konfig_t             *vs_konfig;     /* Konfigurationsdaten Videosystem */
        error_konfig_t          *error_konfig;  /* Konfigurationsdaten Error */
        fdbs_konfig_t           *fdbs_konfig;   /* Konfigurationsdaten FD-Detektor */
        allg_sys_konfig_t       *allg_sys_daten;    /* allg. System-Konfigurationsdaten */
        dl_skindose_filt_t      *dl_skindose_filt;  /* Hautdosisbegrenzung durch Filter abhängig von Tischhöhe */
        tui_misc_konfig_t       *tui_misc_konfig;   /* Konfigurationsdaten fuer TUI und Messfeldpositionen */
        dl_filtauto_t			*dl_filtauto_konfig;		/* kv_tabellen für DL-Filterautomatik */
    }__attribute__ ((packed))
    konfigurationsdaten_t;

typedef struct fk_sys_list_tag
    {
        uchar   system[FK_MAX+1]; /* Listenindex ist Funktionskreis, Inhalt ist System */
    }__attribute__ ((packed))
    fk_sys_list_t;

typedef struct fe_fk_list_tag
    {
        uchar   funktionskreis[FE_MAX+1]; /* Listenindex ist FE, Inhalt ist FK */
    }__attribute__ ((packed))
    fe_fk_list_t;


/************************************************************************/
/* Ende v. Wiedereintrittssicherung     */
#endif

