#ifndef LEDAOBJ
#define LEDAOBJ

/************************************************************************/
/*                                                                      */
/*                    Includes for ACS-Objects                          */
/*               Created from ACS - Database ( RAE 32 )                 */
/*                                                                      */
/************************************************************************/
/*                                                                      */
/*    Name: LEDAOBJ.H       Databaseversion: V2.0 E1                    */
/*                          Edition from   : July 92                    */
/*                          Printed at     : 02-22-94                   */
/*                                                                      */
/************************************************************************/
/*                                                                      */
/*    Description/Contents:                                             */
/*                                                                      */
/*    Contains all defines and data structures which are used for       */
/*    ACS-Communication.                                                */
/*                                                                      */
/*    The definition for the ACS Variablen-Types has to be changed      */
/*    for used platforms.                                               */
/*                                                                      */
/*    Programming Language: C  (ANSI)                                   */
/*                                                                      */
/************************************************************************/


/****************************************************************************/
/*    ACS Parameter min/max-ranges for:                                     */
/*    integer, long_integer, byte, word and byte stream                     */
/****************************************************************************/

#define APID_MIN            (uchar   )   1
#define APID_MAX            (uchar   )   255
#define INITKENNUNG_MIN     (uchar   )   1
#define INITKENNUNG_MAX     (uchar   )   255
#define KVIST_MIN           (ushort    )   400
#define KVIST_MAX           (ushort    )   1500
#define MASIST_MIN          (slong   )   0
#define MASIST_MAX          (slong   )   110000
#define MSIST_MIN           (slong   )   0
#define MSIST_MAX           (slong   )   1000000
#define ANFMA_MIN           (ushort    )   10
#define ANFMA_MAX           (ushort    )   20000
#define DFP_MIN             (slong   )   0
#define DFP_MAX             (slong   )   999999
#define SZEIT_MIN           (uchar   )   0
#define SZEIT_MAX           (uchar   )   100
#define PULSE_MIN           (uchar   )   1
#define PULSE_MAX           (uchar   )   200
#define FRAUFN_MIN          (uchar   )   0
#define FRAUFN_MAX          (uchar   )   255
#define BELAUFN_MIN         (uchar   )   0
#define BELAUFN_MAX         (uchar   )   255
#define PHYSPOSITION_MIN    (sshort    )    -32000
#define PHYSPOSITION_MAX    (sshort    )    32000
#define BILDFORMAT_Q_MIN    (ushort    )   1
#define BILDFORMAT_Q_MAX    (ushort    )   65535
#define BILDFORMAT_L_MIN    (ushort    )   1
#define BILDFORMAT_L_MAX    (ushort    )   65535
#define BLENDENANZAHL_MIN   (uchar   )   0
#define BLENDENANZAHL_MAX   (uchar   )   16
#define BLENDENPOSITION_MIN (ushort    )   0
#define BLENDENPOSITION_MAX (ushort    )   65535
#define BLENDENWINKEL_MIN   (sshort    )    1
#define BLENDENWINKEL_MAX   (sshort    )    3600
#define BVFORMAT_MIN        (ushort    )   1000
#define BVFORMAT_MAX        (ushort    )   20000
#define YEAR_MIN            (uchar   )   0
#define YEAR_MAX            (uchar   )   99
#define MONTH_MIN           (uchar   )   1
#define MONTH_MAX           (uchar   )   12
#define DAY_MIN             (uchar   )   1
#define DAY_MAX             (uchar   )   31
#define HOUR_MIN            (uchar   )   0
#define HOUR_MAX            (uchar   )   23
#define MINUTE_MIN          (uchar   )   0
#define MINUTE_MAX          (uchar   )   59
#define SECOND_MIN          (uchar   )   0
#define SECOND_MAX          (uchar   )   59
#define DLPROG_MIN          (uchar   )   1
#define DLPROG_MAX          (uchar   )   8
#define KVHAND_MIN          (ushort    )   400
#define KVHAND_MAX          (ushort    )   1500
#define MAIST_MIN           (ushort    )   1
#define MAIST_MAX           (ushort    )   20000
#define DLABW_MIN           (sshort    )    -20
#define DLABW_MAX           (sshort    )    20
#define KV_MIN              (ushort    )   400
#define KV_MAX              (ushort    )   1500
#define MA_MIN              (ushort    )   1
#define MA_MAX              (ushort    )   25000
#define MIN_MIN             (ushort    )   0
#define MIN_MAX             (ushort    )   3600
#define FEHLERNUMMER_MIN    (ushort    )   0
#define FEHLERNUMMER_MAX    (ushort    )   999
#define UMGEBUNG1_MIN       (uchar   )   0
#define UMGEBUNG1_MAX       (uchar   )   255
#define UMGEBUNG2_MIN       (uchar   )   0
#define UMGEBUNG2_MAX       (uchar   )   255
#define UMGEBUNG3_MIN       (uchar   )   0
#define UMGEBUNG3_MAX       (uchar   )   255
#define UMGEBUNG4_MIN       (uchar   )   0
#define UMGEBUNG4_MAX       (uchar   )   255
#define UMGEBUNG5_MIN       (uchar   )   0
#define UMGEBUNG5_MAX       (uchar   )   255
#define UMGEBUNG6_MIN       (uchar   )   0
#define UMGEBUNG6_MAX       (uchar   )   255
#define UMGEBUNG7_MIN       (uchar   )   0
#define UMGEBUNG7_MAX       (uchar   )   255
#define UMGEBUNG8_MIN       (uchar   )   0
#define UMGEBUNG8_MAX       (uchar   )   255
#define UMGEBUNG9_MIN       (uchar   )   0
#define UMGEBUNG9_MAX       (uchar   )   255
#define UMGEBUNG10_MIN      (uchar   )   0
#define UMGEBUNG10_MAX      (uchar   )   255
#define FFA_MIN             (sshort    )    1
#define FFA_MAX             (sshort    )    32767
#define MAS_MIN             (slong   )   50
#define MAS_MAX             (slong   )   80000
#define MS_MIN              (slong   )   1
#define MS_MAX              (slong   )   1000000
#define PROZ_MIN            (uchar   )   10
#define PROZ_MAX            (uchar   )   100
#define KENNL_MIN           (uchar   )   0
#define KENNL_MAX           (uchar   )   100
#define PARAM_MIN           (sshort    )    -32000
#define PARAM_MAX           (sshort    )    32000
#define KNOTENID_MIN        (uchar   )   0
#define KNOTENID_MAX        (uchar   )   255
#define APANZAHL_MIN        (uchar   )   0
#define APANZAHL_MAX        (uchar   )   10
#define ANZAHL_KENNID_MIN   (uchar   )   0
#define ANZAHL_KENNID_MAX   (uchar   )   255
#define KENNDATUM_ID_MIN    (uchar   )   1
#define KENNDATUM_ID_MAX    (uchar   )   255
#define ANZAHLKENNEINTR_MIN (uchar   )   1
#define ANZAHLKENNEINTR_MAX (uchar   )   255
#define ANZAHLDATEN_MIN     (sshort    )    0
#define ANZAHLDATEN_MAX     (sshort    )    490
#define DATEN_MIN           (uchar   )   0
#define DATEN_MAX           (uchar   )   255
#define KORRIONANZ_MIN      (sshort    )    -16
#define KORRIONANZ_MAX      (sshort    )    16
#define FOLIEEMPF_MIN       (ushort    )   10
#define FOLIEEMPF_MAX       (ushort    )   2000
#define DOSIS_MIN           (ushort    )   1
#define DOSIS_MAX           (ushort    )   32000
#define CMDKENNUNG_MIN      (uchar   )   0
#define CMDKENNUNG_MAX      (uchar   )   255
#define GEWTEILG_MIN        (uchar   )   1
#define GEWTEILG_MAX        (uchar   )   10
#define ANZAHLERLTEILG_MIN  (uchar   )   1
#define ANZAHLERLTEILG_MAX  (uchar   )   10
#define ERLTEILG_MIN        (uchar   )   1
#define ERLTEILG_MAX        (uchar   )   10
#define TEILANZAHL_MIN      (uchar   )   1
#define TEILANZAHL_MAX      (uchar   )   20
#define TEILUNG_Q_MIN       (uchar   )   1
#define TEILUNG_Q_MAX       (uchar   )   20
#define TEILUNG_L_MIN       (uchar   )   1
#define TEILUNG_L_MAX       (uchar   )   20
#define ANZAHLKENNDATEN_MIN (uchar   )   1
#define ANZAHLKENNDATEN_MAX (uchar   )   3
#define AUFLANZAHL_MIN      (uchar   )   0
#define AUFLANZAHL_MAX      (uchar   )   5
#define FKTCODE_MIN         (ushort    )   0
#define FKTCODE_MAX         (ushort    )   65535
#define ANTRIEBSANZAHL_MIN  (uchar   )   0
#define ANTRIEBSANZAHL_MAX  (uchar   )   10
#define ARZT_MIN            (uchar   )   1
#define ARZT_MAX            (uchar   )   10
#define REGION_MIN          (uchar   )   1
#define REGION_MAX          (uchar   )   12
#define ORGAN_MIN           (uchar   )   1
#define ORGAN_MAX           (uchar   )   20
#define TRANSPKORR_MIN      (sshort    )    -2
#define TRANSPKORR_MAX      (sshort    )    2
#define RASTERNR_MIN        (uchar   )   1
#define RASTERNR_MAX        (uchar   )   255
#define TUBELD_MIN          (uchar   )   0
#define TUBELD_MAX          (uchar   )   100
#define PAUSE_MIN           (ushort    )   0
#define PAUSE_MAX           (ushort    )   3600
#define EINSCHALTDAUER_MIN  (slong   )   0
#define EINSCHALTDAUER_MAX  (slong   )   10000000
#define TUBECTR_MIN         (uchar   )   1
#define TUBECTR_MAX         (uchar   )   4
#define TUBENR_MIN          (uchar   )   1
#define TUBENR_MAX          (uchar   )   4
#define LASTEINHEIT_MIN     (slong   )   0
#define LASTEINHEIT_MAX     (slong   )   10000000
#define AUFNCTRWAIT_MIN     (slong   )   0
#define AUFNCTRWAIT_MAX     (slong   )   10000000
#define AUFNCTRANODE_MIN    (slong   )   0
#define AUFNCTRANODE_MAX    (slong   )   10000000
#define ANZAHLFEHLER_MIN    (uchar   )   1
#define ANZAHLFEHLER_MAX    (uchar   )   20
#define MONANZAHL_MIN       (uchar   )   1
#define MONANZAHL_MAX       (uchar   )   5
#define MONSTART_MIN        (slong   )   0
#define MONSTART_MAX        (slong   )   0xffffffff
#define MONANZDAT_MIN       (uchar   )   1
#define MONANZDAT_MAX       (uchar   )   30
#define DOSE_MIN            (ushort    )   1
#define DOSE_MAX            (ushort    )   32000
#define AUFNZEIT_MIN        (ushort    )   1
#define AUFNZEIT_MAX        (ushort    )   10000
#define STRAHLER_MIN        (uchar   )   1
#define STRAHLER_MAX        (uchar   )   4
#define FILTER_MIN          (uchar   )   1
#define FILTER_MAX          (uchar   )   10
#define SCHRIFT_MIN         (uchar   )   1
#define SCHRIFT_MAX         (uchar   )   10
#define SYSTEMNR_MIN        (uchar   )   1
#define SYSTEMNR_MAX        (uchar   )   12
#define TOMOZEIT_MIN        (ushort    )   100
#define TOMOZEIT_MAX        (ushort    )   20000
#define TOMOHOEHE_MIN       (ushort    )   10
#define TOMOHOEHE_MAX       (ushort    )   5000
#define TOMOWINKEL_MIN      (uchar   )   1
#define TOMOWINKEL_MAX      (uchar   )   180
#define TOMOSTEP_MIN        (ushort    )   10
#define TOMOSTEP_MAX        (ushort    )   1000
#define GESCHW_MIN          (uchar   )   0
#define GESCHW_MAX          (uchar   )   255
#define DOSISL_MIN          (ushort    )   1
#define DOSISL_MAX          (ushort    )   1800
#define IONCH_MIN           (uchar   )   0
#define IONCH_MAX           (uchar   )   8
#define ZIELFKTKREIS_MIN    (uchar   )   1
#define ZIELFKTKREIS_MAX    (uchar   )   8
#define SCHWAERZKORR_MIN    (sshort    )    -16
#define SCHWAERZKORR_MAX    (sshort    )    16
#define TEILNR_MIN          (uchar   )   1
#define TEILNR_MAX          (uchar   )   255
#define OEFFNUNG_MIN        (ushort    )   1
#define OEFFNUNG_MAX        (ushort    )   65535
#define STARTW_MIN          (uchar   )   0
#define STARTW_MAX          (uchar   )   240
#define PUNKTE_MIN          (uchar   )   1
#define PUNKTE_MAX          (uchar   )   8
#define BP_PUNKTE_MIN       (uchar   )   0
#define BP_PUNKTE_MAX       (uchar   )   240
#define KV_PUNKTE_MIN       (ushort    )   40
#define KV_PUNKTE_MAX       (ushort    )   1500
#define MA_PUNKTE_MIN       (ushort    )   10
#define MA_PUNKTE_MAX       (ushort    )   20000
#define HOURSTART_MIN       (uchar   )   0
#define HOURSTART_MAX       (uchar   )   23
#define MINUTESTART_MIN     (uchar   )   0
#define MINUTESTART_MAX     (uchar   )   59
#define SECONDSTART_MIN     (uchar   )   0
#define SECONDSTART_MAX     (uchar   )   59
#define HOUREND_MIN         (uchar   )   0
#define HOUREND_MAX         (uchar   )   23
#define MINUTEEND_MIN       (uchar   )   0
#define MINUTEEND_MAX       (uchar   )   59
#define SECONDEND_MIN       (uchar   )   0
#define SECONDEND_MAX       (uchar   )   59
#define GROUP_MIN           (uchar   )   0
#define GROUP_MAX           (uchar   )   255
#define TIMEINT_MIN         (ushort    )   100
#define TIMEINT_MAX         (ushort    )   5000
#define MONLEN_MIN          (uchar   )   1
#define MONLEN_MAX          (uchar   )   30

/************************************************************************/
/*    ACS Parameter string-length                                       */
/************************************************************************/

#define FEHLERTEXT_LENGTH       40
#define KOMPNAME_LENGTH         10
#define KENNEINTRAG_LENGTH      1
#define KENNUNG_LENGTH          20
#define PASSWORT_LENGTH         30
#define ABLAUFDATUM_LENGTH      11
#define PRODUKTID_LENGTH        11
#define SN_LENGTH               11
#define HOSTID_LENGTH           10
#define ANLAGENDATUM_LENGTH     21
#define PWDDATUM_LENGTH         11
#define USER_LENGTH             10
#define COMMENT_LENGTH          60

/************************************************************************/
/*    ACS Parameter Min-/Maxvalues and ranges for enumerated-types      */
/************************************************************************/

/* Parameter ERRORCMD  */
#define  ERROR_WARNUNG_BUF        (uchar   )   1      /*                      */
#define  ERROR_BUF                (uchar   )   2      /*                      */
#define  WARNUNG_BUF              (uchar   )   3      /*                      */

#define  ERRORCMD_MIN             (uchar   )   1
#define  ERRORCMD_MAX             (uchar   )   3


/* Parameter ADRUCKSCH  */
#define  KEIN_DRUCK               (uchar   )   1      /*                      */
#define  DRUCK                    (uchar   )   2      /*                      */

#define  ADRUCKSCH_MIN            (uchar   )   1
#define  ADRUCKSCH_MAX            (uchar   )   2


/* Parameter ATUERKON  */
#define  TUER_GESCHLOSSEN         (uchar   )   1      /*                      */
#define  TUER_OFFEN               (uchar   )   2      /*                      */

#define  ATUERKON_MIN             (uchar   )   1
#define  ATUERKON_MAX             (uchar   )   2


/* Parameter AUFNBEREIT  */
#define  NEIN                     (uchar   )   0      /*                      */
#define  JA                       (uchar   )   1      /*                      */

#define  AUFNBEREIT_MIN           (uchar   )   0
#define  AUFNBEREIT_MAX           (uchar   )   1


/* Parameter BETRIEBSART  */
#define  KEINE_ANGABE             (uchar   )   0      /*                      */
#define  NORMALBETRIEB            (uchar   )   1      /*                      */
#define  SCHICHTBETRIEB           (uchar   )   2      /*                      */
#define  PERI_ANGIO_ANWAHL        (uchar   )   3      /*                      */
#define  PERI_ANGIO_AKTIV         (uchar   )   4      /*                      */
#define  ROT_ANGIO_ANWAHL         (uchar   )   5      /*                      */
#define  ROT_ANGIO_AKTIV          (uchar   )   6      /*                      */
#define  MYELOGRAPHIE             (uchar   )   7      /*                      */
#define  ANGIOGRAPHIE             (uchar   )   8      /*                      */
#define  BETTENAUFNAHME           (uchar   )   9      /*                      */

#define  BETRIEBSART_MIN          (uchar   )   0
#define  BETRIEBSART_MAX          (uchar   )   9


/* Parameter TARGET  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  BILDVERSTAERKER          (uchar   )   1      /*                      */
#define  RASTERWANDGERAET         (uchar   )   2      /*                      */
#define  KATAPULTRASTERLADE       (uchar   )   3      /*                      */
#define  ZIELGERAET               (uchar   )   4      /*                      */

#define  TARGET_MIN               (uchar   )   0
#define  TARGET_MAX               (uchar   )   4


/* Parameter BASTATUS  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  BEREIT                   (uchar   )   1      /*                      */
#define  NICHT_BEREIT             (uchar   )   2      /*                      */

#define  BASTATUS_MIN             (uchar   )   0
#define  BASTATUS_MAX             (uchar   )   2


/* Parameter ANTRIEB  */
#define  FFA_STRAHLER             (uchar   )   0      /*                      */
#define  ISOCENTER_HOEHE          (uchar   )   1      /*                      */
#define  TARGET_LAENGS            (uchar   )   2      /*                      */
#define  TARGET_QUER              (uchar   )   3      /*                      */
#define  TARGET_HEBEN_SENKEN      (uchar   )   4      /*                      */
#define  TARGET_DREHEN            (uchar   )   5      /*                      */
#define  SCHWENKWINKEL_SAEULE     (uchar   )   6      /*                      */
#define  TUBUSKRAFT               (uchar   )   7      /*                      */
#define  TISCHPLATTENDREHUNG      (uchar   )   8      /*                      */
#define  FFA_TARGET               (uchar   )   9      /*                      */
#define  TISCH_HOEHE              (uchar   )   10     /*                      */
#define  TISCH_GERAET_KIPPEN      (uchar   )   11     /*                      */
#define  TISCH_LAENGS             (uchar   )   12     /*                      */
#define  TISCH_QUER               (uchar   )   13     /*                      */
#define  KIPPMULDE                (uchar   )   14     /*                      */
#define  SCHICHTHOEHE             (uchar   )   15     /*                      */
#define  GERAET_HEBEN_SENKEN      (uchar   )   16     /*                      */
#define  STRAHLERDREHUNG          (uchar   )   17     /*                      */
#define  STRAHLER_LAENGS          (uchar   )   18     /*                      */
#define  STRAHLER_QUER            (uchar   )   19     /*                      */
#define  TUBUS_EIN_AUSFAHREN      (uchar   )   21     /*                      */
#define  C_BOGEN_ORBITAL          (uchar   )   22     /*                      */
#define  C_BOGEN_ANGULAR          (uchar   )   23     /*                      */
#define  ISOCENTER_LAENGS         (uchar   )   24    /*                      */
#define  FFA_BEWEGUNG             (uchar   )   25    /*                      */

#define  ANTRIEB_MIN              (uchar   )   0
#define  ANTRIEB_MAX              (uchar   )   25


/* Parameter ANTRIEBSTATUS  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  STOP_MIT_ZIELPOSITION    (uchar   )   1      /*                      */
#define  IN_FAHRT                 (uchar   )   2      /*                      */
#define  BLOCKIERT                (uchar   )   3      /*                      */
#define  STOP_OHNE_ZIELPOSITION   (uchar   )   4      /*                      */
#define  ANSTRG_NICHT_MOEGLICH    (uchar   )   5      /*                      */

#define  ANTRIEBSTATUS_MIN        (uchar   )   0
#define  ANTRIEBSTATUS_MAX        (uchar   )   5


/* Parameter AVR_STATUS  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  AVR_BETRIEB              (uchar   )   1      /*                      */
#define  AVR_ENDE                 (uchar   )   2      /*                      */
#define  AVR_FESTVERST            (uchar   )   3      /*                      */
#define  AVR_STOP                 (uchar   )   4      /*                      */

#define  AVR_STATUS_MIN           (uchar   )   0
#define  AVR_STATUS_MAX           (uchar   )   4


/* Parameter V_BUK  */
#define  AUS                      (uchar   )   0      /*                      */
#define  EIN                      (uchar   )   1      /*                      */

#define  V_BUK_MIN                (uchar   )   0
#define  V_BUK_MAX                (uchar   )   1


/* Parameter H_BUK  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  H_BUK_MIN                (uchar   )   0
#define  H_BUK_MAX                (uchar   )   1


/* Parameter DLSTEUERUNG  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  DL_GESPERRT              (uchar   )   1      /*                      */
#define  DL_FREIGEGEBEN           (uchar   )   2      /*                      */

#define  DLSTEUERUNG_MIN          (uchar   )   0
#define  DLSTEUERUNG_MAX          (uchar   )   2


/* Parameter GESCHLOSSEN  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  GESCHLOSSEN              (uchar   )   1      /*                      */
#define  NICHT_GESCHLOSSEN        (uchar   )   2      /*                      */

#define  GESCHLOSSEN_MIN          (uchar   )   0
#define  GESCHLOSSEN_MAX          (uchar   )   2


/* Parameter BLENDENAUSWAHL  */
#define  HOEHENBLENDE             (uchar   )   1      /*                      */
#define  BREITENBLENDE            (uchar   )   2      /*                      */
#define  IRIS                     (uchar   )   3      /*                      */
#define  FINGER                   (uchar   )   4      /*                      */
#define  KEILBLENDE_1             (uchar   )   5      /*                      */
#define  KEILBLENDE_2             (uchar   )   6      /*                      */
#define  HERZKONTURBLENDE_1       (uchar   )   7      /*                      */
#define  HERZKONTURBLENDE_2       (uchar   )   8      /*                      */
#define  HALBTRANSP_BLENDE_9      (uchar   )   9      /*                      */
#define  HALBTRANSP_BLENDE_10     (uchar   )   10     /*                      */
#define  HALBTRANSP_BLENDE_11     (uchar   )   11     /*                      */
#define  HALBTRANSP_BLENDE_12     (uchar   )   12     /*                      */
#define  HALBTRANSP_BLENDE_13     (uchar   )   13     /*                      */
#define  HALBTRANSP_BLENDE_14     (uchar   )   14     /*                      */
#define  HALBTRANSP_BLENDE_15     (uchar   )   15     /*                      */
#define  HALPTRANSP_BLENDE_16     (uchar   )   16     /*                      */

#define  BLENDENAUSWAHL_MIN       (uchar   )   1
#define  BLENDENAUSWAHL_MAX       (uchar   )   16


/* Parameter BLENDENSTATUS  */
#define  AKTIV                    (uchar   )   1      /*                      */
#define  GESTOPPT                 (uchar   )   2      /*                      */
#define  POSITION_ERREICHT        (uchar   )   3      /*                      */

#define  BLENDENSTATUS_MIN        (uchar   )   1
#define  BLENDENSTATUS_MAX        (uchar   )   3


/* Parameter BREMSE  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  ZG_BREMSE                (uchar   )   1      /*                      */
#define  KOMPRESSION              (uchar   )   2      /*                      */
#define  ZG_TISCHMITTE            (uchar   )   3      /*                      */
#define  ZG_PARKPOSITION          (uchar   )   4      /*                      */
#define  BREMSE_5                 (uchar   )   5      /*                      */
#define  BREMSE_6                 (uchar   )   6      /*                      */
#define  BREMSE_7                 (uchar   )   7      /*                      */
#define  BREMSE_8                 (uchar   )   8      /*                      */
#define  BREMSE_9                 (uchar   )   9      /*                      */

#define  BREMSE_MIN               (uchar   )   0
#define  BREMSE_MAX               (uchar   )   9


/* Parameter BRSTATUS  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  BREMSE_ANGEZOGEN         (uchar   )   1      /*                      */
#define  BREMSE_GELOEST           (uchar   )   2      /*                      */

#define  BRSTATUS_MIN             (uchar   )   0
#define  BRSTATUS_MAX             (uchar   )   2


/* Parameter ZOOM  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  UEBERSICHT               (uchar   )   1      /*                      */
#define  ZOOM_1                   (uchar   )   2      /*                      */
#define  ZOOM_2                   (uchar   )   3      /*                      */
#define  ZOOM_3                   (uchar   )   4      /*                      */
#define  ZOOM_4                   (uchar   )   5      /*                      */

#define  ZOOM_MIN                 (uchar   )   0
#define  ZOOM_MAX                 (uchar   )   5


/* Parameter BUMKEHR  */
#define  KEINE_ANGABE_NORMAL      (uchar   )   0      /*                      */
#define  UMKEHR_HORIZONTAL        (uchar   )   1      /*                      */
#define  UMKEHR_VERTIKAL          (uchar   )   2      /*                      */
#define  UMKEHR_VERT_HORIZ        (uchar   )   3      /*                      */

#define  BUMKEHR_MIN              (uchar   )   0
#define  BUMKEHR_MAX              (uchar   )   3


/* Parameter DLBA  */
#define  DLBA_KONTINUIERLICH      (uchar   )   1      /*                      */
#define  DLBA_HOCHKONTRAST        (uchar   )   2      /*                      */
#define  DLBA_GEPULST             (uchar   )   3      /*                      */
#define  DLBA_HAND                (uchar   )   4      /*                      */

#define  DLBA_MIN                 (uchar   )   1
#define  DLBA_MAX                 (uchar   )   4


/* Parameter DLSTOP  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  DLSTOP_MIN               (uchar   )   0
#define  DLSTOP_MAX               (uchar   )   1


/* Parameter DLHUPE  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  DLHUPE_MIN               (uchar   )   0
#define  DLHUPE_MAX               (uchar   )   1


/* Parameter REGZUS  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  OBERER_ANSCHLAG          (uchar   )   1      /*                      */
#define  UNTERER_ANSCHLAG         (uchar   )   2      /*                      */

#define  REGZUS_MIN               (uchar   )   0
#define  REGZUS_MAX               (uchar   )   2


/* Parameter DLBEREIT  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  DLBEREIT_MIN             (uchar   )   0
#define  DLBEREIT_MAX             (uchar   )   1


/* Parameter KATEGORIE  */
#define  WARNUNG                  (uchar   )   1      /*                      */
#define  BEHEB_FEHLER             (uchar   )   2      /*                      */
#define  NICHT_BEHEB_FEHLER       (uchar   )   3      /*                      */
#define  FATALER_FEHLER           (uchar   )   4      /*                      */

#define  KATEGORIE_MIN            (uchar   )   1
#define  KATEGORIE_MAX            (uchar   )   4


/* Parameter FESTATUS  */
#define  BASIS_HW_TEST_AKTIV      (uchar   )   1      /*                      */
#define  WARTEND                  (uchar   )   2      /*                      */
#define  DLD_BEREIT               (uchar   )   3      /*                      */
#define  DLD_HARDWARETEST_AKTIV   (uchar   )   4      /*                      */
#define  DLD_HARDWARETEST_OK      (uchar   )   5      /*                      */
#define  DLD_LOESCHEN_AKTIV       (uchar   )   6      /*                      */
#define  DLD_LOESCHEN_OK          (uchar   )   7      /*                      */
#define  DLD_PROGRAMMIERUNG_AKTIV (uchar   )   8      /*                      */
#define  DLD_PROGRAMMIERUNG_OK    (uchar   )   9      /*                      */
#define  APPLIKATIONSVORBEREITUNG (uchar   )   10     /*                      */
#define  SERVICEMODE              (uchar   )   11     /*                      */
#define  BETRIEBSBEREIT           (uchar   )   12     /*                      */
#define  NICHT_FUNKTIONSFAEHIG    (uchar   )   13     /*                      */

#define  FESTATUS_MIN             (uchar   )   1
#define  FESTATUS_MAX             (uchar   )   13


/* Parameter TECHNIK  */
#define  _0_PUNKT_TECHNIK         (uchar   )   0      /*                      */
#define  _1_PUNKT_TECHNIK         (uchar   )   1      /*                      */
#define  _2_PUNKT_TECHNIK         (uchar   )   2      /*                      */
#define  _3_PUNKT_TECHNIK         (uchar   )   3      /*                      */
#define  _3_PUNKT_T_MIT_IONT      (uchar   )   4      /*                      */
#define  MAS_SCHICHTEN            (uchar   )   5      /*                      */
#define  PLANIIONT                (uchar   )   6      /*                      */
#define  PLANIIONT_MIT_MAS        (uchar   )   7      /*                      */
#define  DR_0_PUNKT_TECHNIK       (uchar   )   10     /*                      */
#define  DR_1_PUNKT_TECHNIK       (uchar   )   11     /*                      */
#define  DSA_KONSTANTZEIT         (uchar   )   12     /*                      */
#define  DR_SCHICHTEN             (uchar   )   13     /*                      */
#define  PERI_ANGIO_MIT_DR        (uchar   )   14     /*                      */

//Yang Zhiming for MD+ development 2010-06-09
//add for digital fluoro and exposure adjustment
#define DR_0_PUNKT_Bsig_TECHNIK   (uchar   )   27
#define DSA_KONSTANTZEIT_Bsig     (uchar   )   28
//Yang Zhiming for MD+ development end 

#define  TECHNIK_MIN              (uchar   )   0
#define  TECHNIK_MAX              (uchar   )   14


/* Parameter FOKUS  */
#define  KLEINER_FOKUS            (uchar   )   1      /*                      */
#define  GROSSER_FOKUS            (uchar   )   2      /*                      */
#define  _3_FOKUS                 (uchar   )   3      /*                      */

#define  FOKUS_MIN                (uchar   )   1
#define  FOKUS_MAX                (uchar   )   3


/* Parameter KVAUTO  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  KVAUTO_MIN               (uchar   )   0
#define  KVAUTO_MAX               (uchar   )   1


/* Parameter STATUSIGENANZ  */
#define  NO_QUITTUNG              (uchar   )   0      /*                      */
#define  KV_QUITTUNG              (uchar   )   1      /*                      */
#define  MAS_QUITTUNG             (uchar   )   2      /*                      */
#define  MS_QUITTUNG              (uchar   )   4      /*                      */
#define  FOKUS_QUITTUNG           (uchar   )   8      /*                      */
#define  LIMIT_QUITTUNG           (uchar   )   16     /*                      */

#define  STATUSIGENANZ_MIN        (uchar   )   0
#define  STATUSIGENANZ_MAX        (uchar   )   16


/* Parameter ANZCODE  */
/* #define  FFA_STRAHLER          (ushort     )  0                              */
/* #define  ISOCENTER_HOEHE       (ushort     )  1                              */
/* #define  TARGET_LAENGS         (ushort     )  2                              */
/* #define  TARGET_QUER           (ushort     )  3                              */
/* #define  TARGET_HEBEN_SENKEN   (ushort     )  4                              */
/* #define  TARGET_DREHEN         (ushort     )  5                              */
/* #define  SCHWENKWINKEL_SAEULE  (ushort     )  6                              */
/* #define  TUBUSKRAFT            (ushort     )  7                              */
/* #define  TISCHPLATTENDREHUNG   (ushort     )  8                              */
/* #define  FFA_TARGET            (ushort     )  9                              */
/* #define  TISCH_HOEHE           (ushort     )  10                             */
/* #define  TISCH_GERAET_KIPPEN   (ushort     )  11                             */
/* #define  TISCH_LAENGS          (ushort     )  12                             */
/* #define  TISCH_QUER            (ushort     )  13                             */
/* #define  KIPPMULDE             (ushort     )  14                             */
/* #define  SCHICHTHOEHE          (ushort     )  15                             */
/* #define  GERAET_HEBEN_SENKEN   (ushort     )  16                             */
/* #define  STRAHLERDREHUNG       (ushort     )  17                             */
/* #define  STRAHLER_LAENGS       (ushort     )  18                             */
/* #define  STRAHLER_QUER         (ushort     )  19                             */
#define  TUBUS_STELLUNG           (ushort     )  20     /*                      */
#define  TUBUS_IM_STRAHLENGANG    (ushort     )  21     /*                      */
/* #define  C_BOGEN_ORBITAL       (ushort     )  22                             */
/* #define  C_BOGEN_ANGULAR       (ushort     )  23                             */
#define  FFA_STRAHLER_0P          (ushort     )  30     /*                      */
#define  ISOCENTER_HOEHE_0P       (ushort     )  31     /*                      */
#define  TARGET_LAENGS_0P         (ushort     )  32     /*                      */
#define  TARGET_QUER_0P           (ushort     )  33     /*                      */
#define  TARGET_HEBEN_SENKEN_0P   (ushort     )  34     /*                      */
#define  TARGET_DREHEN_0P         (ushort     )  35     /*                      */
#define  SCHWENKWINKEL_SAEULE_0P  (ushort     )  36     /*                      */
#define  KOMPRESSION_0P           (ushort     )  37     /*                      */
#define  TISCHPLATTENDREHUNG_0P   (ushort     )  38     /*                      */
#define  FFA_TARGET_0P            (ushort     )  39     /*                      */
#define  TISCH_HOEHE_0P           (ushort     )  40     /*                      */
#define  TISCH_GERAET_KIPPEN_0P   (ushort     )  41     /*                      */
#define  TISCH_LAENGS_0P          (ushort     )  42     /*                      */
#define  TISCH_QUER_0P            (ushort     )  43     /*                      */
#define  KIPPMULDE_0P             (ushort     )  44     /*                      */
#define  SCHICHTHOEHE_0P          (ushort     )  45     /*                      */
#define  GERAET_HEBEN_SENKEN_0P   (ushort     )  46     /*                      */
#define  STRAHLERDREHUNG_0P       (ushort     )  47     /*                      */
#define  STRAHLER_LAENGS_0P       (ushort     )  48     /*                      */
#define  STRAHLER_QUER_0P         (ushort     )  49     /*                      */
#define  C_BOGEN_ORBITAL_0P       (ushort     )  52     /*                      */
#define  C_BOGEN_ANGULAR_0P       (ushort     )  53     /*                      */
#define  ZIELGERAET_0P            (ushort     )  54     /*                      */
#define  A_UMBAU_1                (ushort     )  60     /*                      */
#define  A_UMBAU_2                (ushort     )  61     /*                      */
#define  A_UMBAU_3                (ushort     )  62     /*                      */
#define  A_UMBAU_4                (ushort     )  63     /*                      */
#define  A_UMBAU_5                (ushort     )  64     /*                      */
#define  A_MYELOGRAPHIE           (ushort     )  65     /*                      */
#define  A_PERI_PROGFAHRT         (ushort     )  66     /*                      */
#define  A_SCHRITTVERSCHIEBUNG    (ushort     )  67     /*                      */
#define  A_FESTPOSITION_1         (ushort     )  70     /*                      */
#define  A_FESTPOSITION_2         (ushort     )  71     /*                      */
#define  A_FESTPOSITION_3         (ushort     )  72     /*                      */
#define  A_FESTPOSITION_4         (ushort     )  73     /*                      */
#define  A_FESTPOSITION_5         (ushort     )  74     /*                      */
#define  A_FESTPOSITION_6         (ushort     )  75     /*                      */
#define  A_FESTPOSITION_7         (ushort     )  76     /*                      */
#define  A_FESTPOSITION_8         (ushort     )  77     /*                      */
#define  A_FESTPOSITION_9         (ushort     )  78     /*                      */
#define  A_FESTPOSITION_10        (ushort     )  79     /*                      */
#define  A_ZIELGERAET_BR          (ushort     )  80     /*                      */
#define  A_KOMPRESSION_BR         (ushort     )  81     /*                      */
#define  A_ZG_TISCHMITTE_BR       (ushort     )  82     /*                      */
#define  A_ZG_PARKPOSITION_BR     (ushort     )  83     /*                      */
#define  A_BREMSE_5_BR            (ushort     )  84     /*                      */
#define  A_BREMSE_6_BR            (ushort     )  85     /*                      */
#define  A_BREMSE_7_BR            (ushort     )  86     /*                      */
#define  A_BREMSE_8_BR            (ushort     )  87     /*                      */
#define  A_BREMSE_9_BR            (ushort     )  88     /*                      */
#define  A_BREMSE_10_BR           (ushort     )  89     /*                      */

#define  ANZCODE_MIN              (ushort     )  0
#define  ANZCODE_MAX              (ushort     )  89


/* Parameter FETYP  */
#define  BEDIENUNG                (uchar   )   1      /*                      */
#define  BILDVERARBEITUNG         (uchar   )   2      /*                      */
#define  BV_SYSTEM                (uchar   )   3      /*                      */
#define  GERAETEGEOMETRIE         (uchar   )   4      /*                      */
#define  KASSETTENSYSTEM          (uchar   )   5      /*                      */
#define  STRAHLUNGSERZEUGUNG      (uchar   )   6      /*                      */
#define  STRAHLUNGSMANIPULATION   (uchar   )   7      /*                      */
#define  VIDEOSYSTEM              (uchar   )   8      /*                      */

#define  FETYP_MIN                (uchar   )   1
#define  FETYP_MAX                (uchar   )   8


/* Parameter BACKUP_SET  */
#define  DATA_EQUAL               (uchar   )   0      /*                      */
#define  DATA_NOT_EQUAL           (uchar   )   1      /*                      */

#define  BACKUP_SET_MIN           (uchar   )   0
#define  BACKUP_SET_MAX           (uchar   )   1


/* Parameter GEWMESSF  */
#define  KEINE_ANGABE_RUND        (uchar   )   0      /*                      */
#define  LINKS                    (uchar   )   1      /*                      */
#define  MITTE                    (uchar   )   2      /*                      */
#define  LINKS_MITTE              (uchar   )   3      /*                      */
#define  RECHTS                   (uchar   )   4      /*                      */
#define  LINKS_RECHTS             (uchar   )   5      /*                      */
#define  MITTE_RECHTS             (uchar   )   6      /*                      */
#define  LINKS_MITTE_RECHTS       (uchar   )   7      /*                      */

#define  GEWMESSF_MIN             (uchar   )   0
#define  GEWMESSF_MAX             (uchar   )   7


/* Parameter AKTMESSF  */
/* #define  KEINE_ANGABE_RUND     (uchar   )   0                              */
/* #define  LINKS                 (uchar   )   1                              */
/* #define  MITTE                 (uchar   )   2                              */
/* #define  LINKS_MITTE           (uchar   )   3                              */
/* #define  RECHTS                (uchar   )   4                              */
/* #define  LINKS_RECHTS          (uchar   )   5                              */
/* #define  MITTE_RECHTS          (uchar   )   6                              */
/* #define  LINKS_MITTE_RECHTS    (uchar   )   7                              */

#define  AKTMESSF_MIN             (uchar   )   0
#define  AKTMESSF_MAX             (uchar   )   7


/* Parameter FOLIE  */
#define  H                        (uchar   )   0      /*                      */
#define  U                        (uchar   )   1      /*                      */
#define  D                        (uchar   )   2      /*                      */

#define  FOLIE_MIN                (uchar   )   0
#define  FOLIE_MAX                (uchar   )   2


/* Parameter AKTIVIERUNG  */
#define  KEINEANGABE              (uchar   )   0      /*                      */
#define  STARTAKTIVIERUNG         (uchar   )   1      /*                      */
#define  STOPAKTIVIERUNG          (uchar   )   2      /*                      */
#define  ENDEAKTIVIERUNG          (uchar   )   3      /*                      */

#define  AKTIVIERUNG_MIN          (uchar   )   0
#define  AKTIVIERUNG_MAX          (uchar   )   3


/* Parameter KASSPOS  */
#define  LADEPOSITION_LINKS       (uchar   )   1      /*                      */
#define  LADEPOSITION_RECHTS      (uchar   )   2      /*                      */
#define  KASSETTE_PARKPOSITION    (uchar   )   3      /*                      */
#define  AUFNAHMEPOSITION         (uchar   )   4      /*                      */

#define  KASSPOS_MIN              (uchar   )   1
#define  KASSPOS_MAX              (uchar   )   4


/* Parameter KASSGEL  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  KASSGEL_MIN              (uchar   )   0
#define  KASSGEL_MAX              (uchar   )   1


/* Parameter IDENT  */
#define  NEU_EINGELEGTE_KASSETTE  (uchar   )   1      /*                      */
#define  BELICHTETE_KASSETTE      (uchar   )   2      /*                      */
#define  KEINE_KASSETTE           (uchar   )   3      /*                      */
#define  UNGUELTIGES_FORMAT       (uchar   )   4      /*                      */

#define  IDENT_MIN                (uchar   )   1
#define  IDENT_MAX                (uchar   )   4


/* Parameter KASSPOSITION  */
#define  KEINE_FESTE_POSITION     (uchar   )   0      /*                      */
/* #define  LADEPOSITION_LINKS    (uchar   )   1                              */
/* #define  LADEPOSITION_RECHTS   (uchar   )   2                              */
/* #define  KASSETTE_PARKPOSITION (uchar   )   3                              */
/* #define  AUFNAHMEPOSITION      (uchar   )   4                              */

#define  KASSPOSITION_MIN         (uchar   )   0
#define  KASSPOSITION_MAX         (uchar   )   4


/* Parameter AUFLRICHTUNG  */
#define  POS_ENDSTELLUNG          (uchar   )   1      /*                      */
#define  NEG_ENDSTELLUNG          (uchar   )   2      /*                      */

#define  AUFLRICHTUNG_MIN         (uchar   )   1
#define  AUFLRICHTUNG_MAX         (uchar   )   2


/* Parameter ANTRIEBSRICHTUNG  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
/* #define  POS_ENDSTELLUNG       (uchar   )   1                              */
/* #define  NEG_ENDSTELLUNG       (uchar   )   2                              */

#define  ANTRIEBSRICHTUNG_MIN     (uchar   )   0
#define  ANTRIEBSRICHTUNG_MAX     (uchar   )   2


/* Parameter IONLIMIT  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  IONLIMIT_MIN             (uchar   )   0
#define  IONLIMIT_MAX             (uchar   )   1


/* Parameter NOTSTOP  */
#define  NOTSTOP_NICHT_GEDRUECKT  (uchar   )   0      /*                      */
#define  NOTSTOP_GEDRUECKT        (uchar   )   1      /*                      */

#define  NOTSTOP_MIN              (uchar   )   0
#define  NOTSTOP_MAX              (uchar   )   1


/* Parameter BEDEINH  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  GERAETENAHBEDIENUNG      (uchar   )   1      /*                      */
#define  GERAETEFERNBEDIENUNG     (uchar   )   2      /*                      */
#define  ZENTRALBEDIENUNG         (uchar   )   3      /*                      */
#define  BLENDENBEDIENUNG         (uchar   )   4      /*                      */
#define  GENERATORBEDIENUNG       (uchar   )   5      /*                      */
#define  DFR_BEDIENUNG            (uchar   )   6      /*                      */
#define  PATIENTENEINGABE         (uchar   )   7      /*                      */
#define  SONSTIGE_BEDIENUNG       (uchar   )   8      /*                      */

#define  BEDEINH_MIN              (uchar   )   0
#define  BEDEINH_MAX              (uchar   )   8


/* Parameter STATUSIQUIT  */
#define  ZULAESSIG                (uchar   )   0      /*                      */
#define  BLOKIERT                 (uchar   )   1      /*                      */

#define  STATUSIQUIT_MIN          (uchar   )   0
#define  STATUSIQUIT_MAX          (uchar   )   1


/* Parameter RASTERSTATUS  */
#define  RASTERPOS_UNDEF          (uchar   )   0      /*                      */
#define  RASTER_AKTIV             (uchar   )   1      /*                      */
#define  RASTERPOS_ERREICHT       (uchar   )   2      /*                      */
#define  RASTER_REVERSIEREND      (uchar   )   3      /*                      */

#define  RASTERSTATUS_MIN         (uchar   )   0
#define  RASTERSTATUS_MAX         (uchar   )   3


/* Parameter RASTERPOSITION  */
/* #define  RASTERPOS_UNDEF       (uchar   )   0                              */
#define  PARKPOSITION             (uchar   )   1      /*                      */
#define  ZENTRIERTPOSITION        (uchar   )   2      /*                      */
#define  VORBEREITUNGSPOSITION    (uchar   )   3      /*                      */

#define  RASTERPOSITION_MIN       (uchar   )   0
#define  RASTERPOSITION_MAX       (uchar   )   3


/* Parameter DATASTATUS  */
#define  DATASTORED               (uchar   )   1      /*                      */

#define  DATASTATUS_MIN           (uchar   )   1
#define  DATASTATUS_MAX           (uchar   )   1


/* Parameter MONSTATUS  */
#define  MONITOR_AKTIV            (uchar   )   1      /*                      */
#define  MONITOR_ENDE             (uchar   )   2      /*                      */

#define  MONSTATUS_MIN            (uchar   )   1
#define  MONSTATUS_MAX            (uchar   )   2


/* Parameter STORESTATUS  */
#define  STORE_NOTOK              (uchar   )   0      /*                      */
#define  STORE_OK                 (uchar   )   1      /*                      */

#define  STORESTATUS_MIN          (uchar   )   0
#define  STORESTATUS_MAX          (uchar   )   1


/* Parameter SS  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  SS_MIN                   (uchar   )   0
#define  SS_MAX                   (uchar   )   1


/* Parameter TUERKON  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  TUERKON_MIN              (uchar   )   0
#define  TUERKON_MAX              (uchar   )   1


/* Parameter DRUCKSCH  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  DRUCKSCH_MIN             (uchar   )   0
#define  DRUCKSCH_MAX             (uchar   )   1


/* Parameter BFREQ  */
#define  EINZELBILD               (uchar   )   0      /*                      */
#define  BILDFQ_MIN               (uchar   )   1      /*                      */
#define  BILDFQ_MAX               (uchar   )   150    /*                      */

#define  BFREQ_MIN                (uchar   )   0
#define  BFREQ_MAX                (uchar   )   150


/* Parameter SERIE  */
/* #define  EINZELBILD            (uchar   )   0                              */
#define  SERIE                    (uchar   )   1      /*                      */

#define  SERIE_MIN                (uchar   )   0
#define  SERIE_MAX                (uchar   )   1


/* Parameter ABSCHALTUNG  */
#define  IONTOMAT                 (uchar   )   0      /*                      */
#define  MAS_SCHALTER             (uchar   )   1      /*                      */
#define  ZEITSCHALTER             (uchar   )   2      /*                      */
#define  SZENEZEITSCHALTER        (uchar   )   3      /*                      */
#define  TUERKONTAKT              (uchar   )   4      /*                      */
#define  FEHLER_ABSCHALTUNG       (uchar   )   5      /*                      */
#define  DRUCKSCHALTER            (uchar   )   6      /*                      */
#define  HK_GEOEFFNET             (uchar   )   7      /*                      */
#define  MIN_DOSIS                (uchar   )   8      /*                      */

#define  ABSCHALTUNG_MIN          (uchar   )   0
#define  ABSCHALTUNG_MAX          (uchar   )   8


/* Parameter HEIZGOK  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  HEIZGOK_MIN              (uchar   )   0
#define  HEIZGOK_MAX              (uchar   )   1


/* Parameter ANODEOK  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  ANODEOK_MIN              (uchar   )   0
#define  ANODEOK_MAX              (uchar   )   1


/* Parameter STRABEREIT  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  STRABEREIT_MIN           (uchar   )   0
#define  STRABEREIT_MAX           (uchar   )   1


/* Parameter FESTPOSITION  */
#define  PAT_UEBERNAHME           (uchar   )   1      /*                      */
#define  UMBAU_1                  (uchar   )   2      /*                      */
#define  UMBAU_2                  (uchar   )   3      /*                      */
#define  UMBAU_3                  (uchar   )   4      /*                      */
#define  UMBAU_4                  (uchar   )   5      /*                      */
#define  UMBAU_5                  (uchar   )   6      /*                      */
#define  SCHICHTAUSGANG           (uchar   )   7      /*                      */
#define  SCHICHTSTART             (uchar   )   8      /*                      */
#define  SCHICHTSTOP              (uchar   )   9      /*                      */
#define  SCHRITTPOS_0             (uchar   )   20     /*                      */
#define  SCHRITTPOS_1             (uchar   )   21     /*                      */
#define  SCHRITTPOS_2             (uchar   )   22     /*                      */
#define  SCHRITTPOS_3             (uchar   )   23     /*                      */
#define  SCHRITTPOS_4             (uchar   )   24     /*                      */
#define  SCHRITTPOS_5             (uchar   )   25     /*                      */
#define  SCHRITTPOS_6             (uchar   )   26     /*                      */
#define  SCHRITTPOS_7             (uchar   )   27     /*                      */
#define  SCHRITTPOS_8             (uchar   )   28     /*                      */
#define  SCHRITTPOS_9             (uchar   )   29     /*                      */
#define  SCHRITTPOS_10            (uchar   )   30     /*                      */
#define  FESTPOSITION_0           (uchar   )   40     /*                      */
#define  FESTPOSITION_1           (uchar   )   41     /*                      */
#define  FESTPOSITION_2           (uchar   )   42     /*                      */
#define  FESTPOSITION_3           (uchar   )   43     /*                      */
#define  FESTPOSITION_4           (uchar   )   44     /*                      */
#define  FESTPOSITION_5           (uchar   )   45     /*                      */
#define  FESTPOSITION_6           (uchar   )   46     /*                      */
#define  FESTPOSITION_7           (uchar   )   47     /*                      */
#define  FESTPOSITION_8           (uchar   )   48     /*                      */
#define  FESTPOSITION_9           (uchar   )   49     /*                      */
#define  FESTPOSITION_10          (uchar   )   50     /*                      */

#define  FESTPOSITION_MIN         (uchar   )   1
#define  FESTPOSITION_MAX         (uchar   )   50


/* Parameter STRAHLUNG  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  STRAHLUNG_MIN            (uchar   )   0
#define  STRAHLUNG_MAX            (uchar   )   1


/* Parameter STATUSSTRFR  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  STATUSSTRFR_MIN          (uchar   )   0
#define  STATUSSTRFR_MAX          (uchar   )   1


/* Parameter RASTER  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  RASTER_MIN               (uchar   )   0
#define  RASTER_MAX               (uchar   )   1


/* Parameter FAUTO  */
#define  FREIE_EINBLENDUNG        (uchar   )   1      /*                      */
#define  VOLLAUTOMATIK            (uchar   )   2      /*                      */
#define  HALBAUTOMATIK            (uchar   )   3      /*                      */

#define  FAUTO_MIN                (uchar   )   1
#define  FAUTO_MAX                (uchar   )   3


/* Parameter FKONTR  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  FKONTR_MIN               (uchar   )   0
#define  FKONTR_MAX               (uchar   )   1


/* Parameter SYSOK  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  SYSOK_MIN                (uchar   )   0
#define  SYSOK_MAX                (uchar   )   1


/* Parameter TOMOAUTO  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  TOMOAUTO_MIN             (uchar   )   0
#define  TOMOAUTO_MAX             (uchar   )   1


/* Parameter TOMOUPDOWN  */
#define  DOWN                     (uchar   )   0      /*                      */
#define  UP                       (uchar   )   1      /*                      */

#define  TOMOUPDOWN_MIN           (uchar   )   0
#define  TOMOUPDOWN_MAX           (uchar   )   1


/* Parameter XRAY  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  XRAY_MIN                 (uchar   )   0
#define  XRAY_MAX                 (uchar   )   1


/* Parameter VORBEREITUNG  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  VORBEREITUNG_MIN         (uchar   )   0
#define  VORBEREITUNG_MAX         (uchar   )   1


/* Parameter HAUPTKONTAKT  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  HAUPTKONTAKT_MIN         (uchar   )   0
#define  HAUPTKONTAKT_MAX         (uchar   )   1


/* Parameter STRAHLGBEREIT  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  STRAHLGBEREIT_MIN        (uchar   )   0
#define  STRAHLGBEREIT_MAX        (uchar   )   1


/* Parameter MODE  */
/* #define  EINZELBILD            (uchar   )   0                              */
/* #define  SERIE                 (uchar   )   1                              */

#define  MODE_MIN                 (uchar   )   0
#define  MODE_MAX                 (uchar   )   1


/* Parameter DL  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  DL_MIN                   (uchar   )   0
#define  DL_MAX                   (uchar   )   1


/* Parameter HK  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  HK_MIN                   (uchar   )   0
#define  HK_MAX                   (uchar   )   1


/* Parameter FKTSCODEALLG  */
#define  RAUMLICHT                (ushort     )  800    /*                      */
#define  FEHLER_LOESCHEN          (ushort     )  801    /*                      */
#define  NOTSTOP                  (ushort     )  802    /*                      */

#define  FKTSCODEALLG_MIN         (ushort     )  800
#define  FKTSCODEALLG_MAX         (ushort     )  802


/* Parameter PARAM */

#define  TASTE_LOSLASSEN          (sshort    )   0      /*                      */
#define  TASTE_GEDRUECKT          (sshort    )   1      /*                      */
#define  TASTE_PLUS_REPEAT        (sshort    )   1      /*                      */
#define  TASTE_PLUS_DRUCK_1       (sshort    )   2      /*                      */
#define  TASTE_MINUS_REPEAT       (sshort    )   3      /*                      */
#define  TASTE_MINUS_DRUCK_1      (sshort    )   4      /*                      */
#define  LOSGELASSEN              (sshort    )   0      /*                      */
#define  VORWAERTS                (sshort    )   1      /*                      */
#define  RUECKWAERTS              (sshort    )   -1     /*                      */
#define  GEDRUECKT                (sshort    )   1      /*                      */


/* Parameter BEDIENOBJ  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  EIN_AUS_TASTE            (uchar   )   1      /*                      */
#define  DRUCKORIENTIERTE_TASTE   (uchar   )   2      /*                      */
#define  PLUS_MINUS_TASTEN        (uchar   )   3      /*                      */
#define  SELEKTIONSTASTEN         (uchar   )   4      /*                      */
#define  EIN_AUS_BEDIENHEBEL      (uchar   )   5      /*                      */
#define  AUSSCHLAGABH_BEDIENHEBEL (uchar   )   6      /*                      */

#define  BEDIENOBJ_MIN            (uchar   )   0
#define  BEDIENOBJ_MAX            (uchar   )   6


/* Parameter FKTSCODEBVFS  */
#define  ZOOM                     (ushort     )  600    /*                      */
#define  BILDUMKEHR               (ushort     )  601    /*                      */
#define  HELLIGK_KONTR_NORM       (ushort     )  602    /*                      */
#define  HELLIGKEIT               (ushort     )  603    /*                      */
#define  KONTRAST                 (ushort     )  604    /*                      */

#define  FKTSCODEBVFS_MIN         (ushort     )  600
#define  FKTSCODEBVFS_MAX         (ushort     )  604


/* Parameter FKTSCODEEINBL  */
#define  LICHTVISIER_EIN_AUS      (ushort     )  550    /*                      */
#define  RECHTECKBLENDE_LAENGS    (ushort     )  551    /*                      */
#define  RECHTECKBLENDE_QUER      (ushort     )  552    /*                      */
#define  KREISBLENDE              (ushort     )  553    /*                      */
#define  FINGERBLEDE_DREHEN       (ushort     )  554    /*                      */
#define  FINGERBLENDE_EINFAHREN   (ushort     )  555    /*                      */
#define  KONTBLENDE_DREHEN        (ushort     )  556    /*                      */
#define  KONTBLENDE_1_EIN_AUS     (ushort     )  557    /*                      */
#define  KONTBLENDE_2_EIN_AUS     (ushort     )  558    /*                      */
#define  RECALL_LETZTE_WERTE      (ushort     )  559    /*                      */
#define  AUSTAUSCH_KONTBLENDE     (ushort     )  560    /*                      */

#define  FKTSCODEEINBL_MIN        (ushort     )  550
#define  FKTSCODEEINBL_MAX        (ushort     )  560


/* Parameter FKTSCODEGEN  */
#define  KV                       (ushort     )  200    /*                      */
#define  MAS                      (ushort     )  201    /*                      */
#define  MS                       (ushort     )  202    /*                      */
#define  ION_EMPFINDLICHKEIT      (ushort     )  203    /*                      */
#define  MESSFELD                 (ushort     )  204    /*                      */
#define  _3_PUNKT_MIT_IONTOMAT    (ushort     )  205    /*                      */
#define  SCHWAERZUNG              (ushort     )  206    /*                      */
#define  FOKUS                    (ushort     )  207    /*                      */
#define  ROEHRENAUSLASTUNG        (ushort     )  208    /*                      */
#define  LIMIT_RESET              (ushort     )  213    /*                      */
#define  DL_RESET                 (ushort     )  250    /*                      */
#define  DL_HUPE_RESET            (ushort     )  251    /*                      */
#define  DL_PROGR                 (ushort     )  252    /*                      */
#define  DL_STOP                  (ushort     )  253    /*                      */
#define  DL_MFELD                 (ushort     )  254    /*                      */
#define  KV_HAND                  (ushort     )  255    /*                      */

#define  FKTSCODEGEN_MIN          (ushort     )  200
#define  FKTSCODEGEN_MAX          (ushort     )  255


/* Parameter FKTSCODEGG  */
#define  BD_FFA_STRAHLER          (ushort     )  0      /*                      */
#define  BD_ISOCENTER_HOEHE       (ushort     )  1      /*                      */
#define  BD_TARGET_LAENGS         (ushort     )  2      /*                      */
#define  BD_TARGET_QUER           (ushort     )  3      /*                      */
#define  BD_TARGET_HEBEN_SENKEN   (ushort     )  4      /*                      */
#define  BD_TARGET_DREHEN         (ushort     )  5      /*                      */
#define  BD_SCHWENKWINKEL_SAEULE  (ushort     )  6      /*                      */
#define  BD_KOMPRESSION           (ushort     )  7      /*                      */
#define  BD_TISCHPLATTENDREHUNG   (ushort     )  8      /*                      */
#define  BD_FFA_TARGET            (ushort     )  9      /*                      */
#define  BD_TISCH_HOEHE           (ushort     )  10     /*                      */
#define  BD_TISCH_GERAET_KIPPEN   (ushort     )  11     /*                      */
#define  BD_TISCH_LAENGS          (ushort     )  12     /*                      */
#define  BD_TISCH_QUER            (ushort     )  13     /*                      */
#define  BD_KIPPMULDE             (ushort     )  14     /*                      */
#define  BD_SCHICHTHOEHE          (ushort     )  15     /*                      */
#define  BD_GERAET_HEBEN_SENKEN   (ushort     )  16     /*                      */
#define  BD_STRAHLERDREHUNG       (ushort     )  17     /*                      */
#define  BD_STRAHLER_LAENGS       (ushort     )  18     /*                      */
#define  BD_STRAHLER_QUER         (ushort     )  19     /*                      */
#define  BD_TUBUS_EIN_AUSFAHREN   (ushort     )  21     /*                      */
#define  BD_C_BOGEN_ORBITAL       (ushort     )  22     /*                      */
#define  BD_C_BOGEN_ANGULAR       (ushort     )  23     /*                      */
#define  BD_FFA_STRAHLER_0        (ushort     )  30     /*                      */
#define  BD_ISOCENTER_HOEHE_0     (ushort     )  31     /*                      */
#define  BD_TARGET_LAENGS_0       (ushort     )  32     /*                      */
#define  BD_TARGET_QUER_0         (ushort     )  33     /*                      */
#define  BD_TARGET_HEBEN_SENKEN_0 (ushort     )  34     /*                      */
#define  BD_TARGET_DREHEN_0       (ushort     )  35     /*                      */
#define  BD_SCHWENKW_SAEULE_0     (ushort     )  36     /*                      */
#define  BD_KOMPRESSION_0         (ushort     )  37     /*                      */
#define  BD_TISCHPLATTENDREHUNG_0 (ushort     )  38     /*                      */
#define  BD_FFA_TARGET_0          (ushort     )  39     /*                      */
#define  BD_TISCH_HOEHE_0         (ushort     )  40     /*                      */
#define  BD_TISCH_GERAET_KIPPEN_0 (ushort     )  41     /*                      */
#define  BD_TISCH_LAENGS_0        (ushort     )  42     /*                      */
#define  BD_TISCH_QUER_0          (ushort     )  43     /*                      */
#define  BD_KIPPMULDE_0           (ushort     )  44     /*                      */
#define  BD_SCHICHTHOEHE_0        (ushort     )  45     /*                      */
#define  BD_GERAET_HEBEN_SENKEN_0 (ushort     )  46     /*                      */
#define  BD_STRAHLERDREHUNG_0     (ushort     )  47     /*                      */
#define  BD_STRAHLER_LAENGS_0     (ushort     )  48     /*                      */
#define  BD_STRAHLER_QUER_0       (ushort     )  49     /*                      */
#define  BD_C_BOGEN_ORBITAL_0     (ushort     )  51     /*                      */
#define  BD_C_BOGEN_ANGULAR_0     (ushort     )  52     /*                      */
#define  BD_UMBAU_1               (ushort     )  60     /*                      */
#define  BD_UMBAU_2               (ushort     )  61     /*                      */
#define  BD_UMBAU_3               (ushort     )  62     /*                      */
#define  BD_UMBAU_4               (ushort     )  63     /*                      */
#define  BD_UMBAU_5               (ushort     )  64     /*                      */
#define  BD_MYELOGRAPHIE          (ushort     )  65     /*                      */
#define  BD_PERI_PROGFAHRT        (ushort     )  66     /*                      */
#define  BD_SCHRITTVERSCHIEBUNG   (ushort     )  67     /*                      */
#define  BD_FESTPOSITION_1        (ushort     )  70     /*                      */
#define  BD_FESTPOSITION_2        (ushort     )  71     /*                      */
#define  BD_FESTPOSITION_3        (ushort     )  72     /*                      */
#define  BD_FESTPOSITION_4        (ushort     )  73     /*                      */
#define  BD_FESTPOSITION_5        (ushort     )  74     /*                      */
#define  BD_FESTPOSITION_6        (ushort     )  75     /*                      */
#define  BD_FESTPOSITION_7        (ushort     )  76     /*                      */
#define  BD_FESTPOSITION_8        (ushort     )  77     /*                      */
#define  BD_FESTPOSITION_9        (ushort     )  78     /*                      */
#define  BD_FESTPOSITION_10       (ushort     )  79     /*                      */
#define  BD_ZIELGERAET_BR         (ushort     )  80     /*                      */
#define  BD_KOMPRESSION_BR        (ushort     )  81     /*                      */
#define  BD_ZG_TISCHMITTE_BR      (ushort     )  82     /*                      */
#define  BD_ZG_PARKPOSITION_BR    (ushort     )  83     /*                      */
#define  BD_BREMSE_5_BR           (ushort     )  84     /*                      */
#define  BD_BREMSE_6_BR           (ushort     )  85     /*                      */
#define  BD_BREMSE_7_BR           (ushort     )  86     /*                      */
#define  BD_BREMSE_8_BR           (ushort     )  87     /*                      */
#define  BD_BREMSE_9_BR           (ushort     )  88     /*                      */
#define  BD_BREMSE_10_BR          (ushort     )  89     /*                      */

#define  FKTSCODEGG_MIN           (ushort     )  0
#define  FKTSCODEGG_MAX           (ushort     )  89


/* Parameter FKTSCODEKS  */
#define  ENTLADETASTE             (ushort     )  100    /*                      */
#define  KASETTENTEILUNG_PROG     (ushort     )  101    /*                      */
#define  UNTERTEILUNG_WEITER      (ushort     )  102    /*                      */

#define  FKTSCODEKS_MIN           (ushort     )  100
#define  FKTSCODEKS_MAX           (ushort     )  102


/* Parameter FKTSCODEORG  */
#define  REGION                   (ushort     )  450    /*                      */
#define  ORGAN                    (ushort     )  451    /*                      */
#define  DICK_DUENN_KORREKTUR     (ushort     )  452    /*                      */
#define  UEBERNAHME_EIN_0_PUNKT   (ushort     )  453    /*                      */
#define  UEBERNAHMEKENNLINIE      (ushort     )  454    /*                      */
#define  PROGRAMM_SPEICHERN       (ushort     )  455    /*                      */
#define  ARTZWAHL                 (ushort     )  456    /*                      */

#define  FKTSCODEORG_MIN          (ushort     )  450
#define  FKTSCODEORG_MAX          (ushort     )  456


/* Parameter FKTSCODESP  */
#define  SERIE_EINZELBILD         (ushort     )  300    /*                      */
#define  BILDFREQUENZ             (ushort     )  301    /*                      */
#define  DOSIS_BILD               (ushort     )  302    /*                      */
#define  MAX_AUFNAHMEZEIT         (ushort     )  303    /*                      */
#define  REGSTOP_WAEHREND_SZENE   (ushort     )  304    /*                      */
#define  KV_FUER_DOSISREDUKTION   (ushort     )  305    /*                      */
#define  MAX_SZENEZEIT            (ushort     )  306    /*                      */
#define  SUBTRAKTION_DSA          (ushort     )  307    /*                      */

#define  FKTSCODESP_MIN           (ushort     )  300
#define  FKTSCODESP_MAX           (ushort     )  307


/* Parameter FKTSCODESTRM  */
#define  FILTER_EINFAHREN         (ushort     )  500    /*                      */
#define  RASTER                   (ushort     )  501    /*                      */
#define  SCHRIFTEINBLENDUNG       (ushort     )  502    /*                      */
#define  FORMATAUTOMATIK          (ushort     )  503    /*                      */
#define  FORMATKONTROLLE          (ushort     )  504    /*                      */

#define  FKTSCODESTRM_MIN         (ushort     )  500
#define  FKTSCODESTRM_MAX         (ushort     )  504


/* Parameter FKTSCODESYS  */
#define  SYSTEMAUSWAHL            (ushort     )  400    /*                      */

#define  FKTSCODESYS_MIN          (ushort     )  400
#define  FKTSCODESYS_MAX          (ushort     )  400


/* Parameter FKTSCODETOMO  */
#define  SCHICHTPROGRAMM          (ushort     )  270    /*                      */
#define  TOMO_STEP_AUTO           (ushort     )  271    /*                      */
#define  TOMO_STEP_UP_DOWN        (ushort     )  272    /*                      */
#define  TOMOSCHRITTWEITE         (ushort     )  273    /*                      */

#define  FKTSCODETOMO_MIN         (ushort     )  270
#define  FKTSCODETOMO_MAX         (ushort     )  273


/* Parameter FUNKTION  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  ANTRIEB_BREMSE_STARTEN   (uchar   )   1      /*                      */
#define  ANTRIEB_BREMSE_STOPPEN   (uchar   )   2      /*                      */

#define  FUNKTION_MIN             (uchar   )   0
#define  FUNKTION_MAX             (uchar   )   2


/* Parameter LOGPOSITION  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
/* #define  POS_ENDSTELLUNG       (uchar   )   1                              */
/* #define  NEG_ENDSTELLUNG       (uchar   )   2                              */
#define  NULL_POSITION            (uchar   )   3      /*                      */

#define  LOGPOSITION_MIN          (uchar   )   0
#define  LOGPOSITION_MAX          (uchar   )   3


/* Parameter BILD_V  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  BILD_V_MIN               (uchar   )   0
#define  BILD_V_MAX               (uchar   )   1


/* Parameter BILD_H  */
/* #define  AUS                   (uchar   )   0                              */
/* #define  EIN                   (uchar   )   1                              */

#define  BILD_H_MIN               (uchar   )   0
#define  BILD_H_MAX               (uchar   )   1


/* Parameter AVR  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  FESTVERSTAERKUNG_1       (uchar   )   1      /*                      */
#define  FESTVERSTAERKUNG_2       (uchar   )   2      /*                      */
#define  AVR_ANFORDERUNG          (uchar   )   3      /*                      */
/* #define  AVR_STOP              (uchar   )   4                              */

#define  AVR_MIN                  (uchar   )   0
#define  AVR_MAX                  (uchar   )   4


/* Parameter BREMSCMD  */
#define  BREMSE_ANZIEHEN          (uchar   )   1      /*                      */
#define  BREMSE_ABFALLEN          (uchar   )   2      /*                      */

#define  BREMSCMD_MIN             (uchar   )   1
#define  BREMSCMD_MAX             (uchar   )   2


/* Parameter DOMINANTE  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  RUND                     (uchar   )   1      /*                      */
#define  RING                     (uchar   )   2      /*                      */
#define  _4_LOCH                  (uchar   )   3      /*                      */
#define  SIEB                     (uchar   )   4      /*                      */

#define  DOMINANTE_MIN            (uchar   )   0
#define  DOMINANTE_MAX            (uchar   )   4


/* Parameter DLMODE  */
#define  KONTINUIERLICH           (uchar   )   1      /*                      */
#define  HOCHKONTRAST             (uchar   )   2      /*                      */
#define  GEPULST                  (uchar   )   3      /*                      */
#define  DL_HAND                  (uchar   )   4      /*                      */

#define  DLMODE_MIN               (uchar   )   1
#define  DLMODE_MAX               (uchar   )   4


/* Parameter REGSTOP  */
/* #define  NEIN                  (uchar   )   0                              */
/* #define  JA                    (uchar   )   1                              */

#define  REGSTOP_MIN              (uchar   )   0
#define  REGSTOP_MAX              (uchar   )   1


/* Parameter KOMMANDO  */
#define  START_DOWNLOAD           (uchar   )   1      /*                      */
#define  PROGSPEICHER_LOESCHEN    (uchar   )   2      /*                      */
#define  DLD_BEENDEN              (uchar   )   3      /*                      */

#define  KOMMANDO_MIN             (uchar   )   1
#define  KOMMANDO_MAX             (uchar   )   3


/* Parameter PROZESSOR  */
#define  HOSTPROZ                 (uchar   )   0      /*                      */
#define  SUB_PROZ_MIN             (uchar   )   1      /*                      */
#define  SUB_PROZ_MAX             (uchar   )   255    /*                      */

#define  PROZESSOR_MIN            (uchar   )   0
#define  PROZESSOR_MAX            (uchar   )   255


/* Parameter SELEKTOR  */
#define  DLDHEADER                (uchar   )   0      /*                      */
#define  DLDDATEN                 (uchar   )   1      /*                      */

#define  SELEKTOR_MIN             (uchar   )   0
#define  SELEKTOR_MAX             (uchar   )   1


/* Parameter PWDSTATUS  */
#define  PASSWORT                 (uchar   )   0      /*                      */
#define  ABLAUFDATUM              (uchar   )   1      /*                      */
#define  PRODUCTID                (uchar   )   2      /*                      */
#define  SACHNUMMER               (uchar   )   3      /*                      */
#define  HOSTID                   (uchar   )   4      /*                      */
#define  ANLAGENDATUM             (uchar   )   5      /*                      */

#define  PWDSTATUS_MIN            (uchar   )   0
#define  PWDSTATUS_MAX            (uchar   )   5


/* Parameter MESSF  */
/* #define  KEINE_ANGABE_RUND     (uchar   )   0                              */
/* #define  LINKS                 (uchar   )   1                              */
/* #define  MITTE                 (uchar   )   2                              */
/* #define  LINKS_MITTE           (uchar   )   3                              */
/* #define  RECHTS                (uchar   )   4                              */
/* #define  LINKS_RECHTS          (uchar   )   5                              */
/* #define  MITTE_RECHTS          (uchar   )   6                              */
/* #define  LINKS_MITTE_RECHTS    (uchar   )   7                              */

#define  MESSF_MIN                (uchar   )   0
#define  MESSF_MAX                (uchar   )   7


/* Parameter BLOCKIERUNG  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  BLOCKIERUNG_EIN          (uchar   )   1      /*                      */
#define  BLOCKIERUNG_AUS          (uchar   )   2      /*                      */

#define  BLOCKIERUNG_MIN          (uchar   )   0
#define  BLOCKIERUNG_MAX          (uchar   )   2


/* Parameter KREISFORM  */
/* #define  KEINE_ANGABE          (uchar   )   0                              */
#define  KREISFOERMIG_EIN         (uchar   )   1      /*                      */
#define  KREISFOERMIG_AUS         (uchar   )   2      /*                      */

#define  KREISFORM_MIN            (uchar   )   0
#define  KREISFORM_MAX            (uchar   )   2


/* Parameter LIMITAKTION  */
#define  WERT_ALS_LIMIT           (uchar   )   0      /*                      */
#define  WERT_ALS_LIMIT_ANFAHREN  (uchar   )   1      /*                      */
#define  MAX_ALS_LIMIT            (uchar   )   2      /*                      */
#define  MAX_ALS_LIMIT_ANFAHREN   (uchar   )   3      /*                      */

#define  LIMITAKTION_MIN          (uchar   )   0
#define  LIMITAKTION_MAX          (uchar   )   3


/* Parameter RASTERAKTION  */
/* #define  PARKPOSITION          (uchar   )   1                              */
/* #define  ZENTRIERTPOSITION     (uchar   )   2                              */
/* #define  VORBEREITUNGSPOSITION (uchar   )   3                              */
#define  REVERSIEREN              (uchar   )   4      /*                      */

#define  RASTERAKTION_MIN         (uchar   )   1
#define  RASTERAKTION_MAX         (uchar   )   4


/* Parameter SELFUNKTION  */
#define  START_SERVICE            (uchar   )   1      /*                      */
#define  ENDE_SERVICE             (uchar   )   2      /*                      */

#define  SELFUNKTION_MIN          (uchar   )   1
#define  SELFUNKTION_MAX          (uchar   )   2


/* Parameter MONCMD  */
#define  START_MON                (uchar   )   1      /*                      */
#define  STOP_MON                 (uchar   )   2      /*                      */

#define  MONCMD_MIN               (uchar   )   1
#define  MONCMD_MAX               (uchar   )   2


/* Parameter VERSTELLRICHTUNG  */
#define  VERSTELLUNG_POS          (uchar   )   1      /*                      */
#define  VERSTELLUNG_NEG          (uchar   )   2      /*                      */
#define  DREHUNG_POS              (uchar   )   11     /*                      */
#define  DREHUNG_NEG              (uchar   )   12     /*                      */

#define  VERSTELLRICHTUNG_MIN     (uchar   )   1
#define  VERSTELLRICHTUNG_MAX     (uchar   )   12


/* Parameter VERSTELLAKTION  */
#define  VERSTELLUNG_STOP         (uchar   )   1      /*                      */
#define  VERSTELLUNG_START        (uchar   )   2      /*                      */

#define  VERSTELLAKTION_MIN       (uchar   )   1
#define  VERSTELLAKTION_MAX       (uchar   )   2




/************************************************************************/
/*  ADATE                                     ACS Object-structure      */
/************************************************************************/

#define ADATE 0x0BB9
/* Zeitabfrage */




/************************************************************************/
/*  AISTWERTE                                 ACS Object-structure      */
/************************************************************************/

#define AISTWERTE 0x0019
/* Abfrage der aktuellen Istwerte */




/************************************************************************/
/*  AKENNDATEN                                ACS Object-structure      */
/************************************************************************/

#define AKENNDATEN 0x0009
/* Abfrage der Kenndaten */




/************************************************************************/
/*  ASERVBETRIEB                              ACS Object-structure      */
/************************************************************************/

#define ASERVBETRIEB 0x0BD4
/* Anfrage Service Betriebsdaten */




/************************************************************************/
/*  ASERVERRORLOG                             ACS Object-structure      */
/************************************************************************/

#define ASERVERRORLOG 0x0BC1
/* Abfrage des Errorlogs */


typedef struct aserverrorlog_t1_tag
   {
        uchar              errorcmd;
   }__attribute__ ((packed)) aserverrorlog_t1;



/************************************************************************/
/*  ASERVINIT                                 ACS Object-structure      */
/************************************************************************/

#define ASERVINIT 0x0BBE
/* Anforderung von Initbloecken */

typedef struct aservinit_t1_tag
   {
        uchar              apid;
        uchar              initkennung;
   }__attribute__ ((packed)) aservinit_t1;



/************************************************************************/
/*  ASTRFR                                    ACS Object-structure      */
/************************************************************************/

#define ASTRFR 0x02D0
/* Abfrage des Strahlungsfreigabe-Signals */




/************************************************************************/
/*  CLOSE                                     ACS Object-structure      */
/************************************************************************/

#define CLOSE 0x0BB8
/* Beenden der Serviceaktivitaet */




/************************************************************************/
/*  DBVERSION_12                              ACS Object-structure      */
/************************************************************************/

#define DBVERSION_12 0xffff
/* Hilfsobjekt fuer Datenbankversion */




/************************************************************************/
/*  IALLGANZ                                  ACS Object-structure      */
/************************************************************************/

#define IALLGANZ 0x0099
/* Allgemeine Anzeigen */

typedef struct iallganz_t1_tag
   {
        uchar              adrucksch;
        uchar              atuerkon;
   }__attribute__ ((packed)) iallganz_t1;



/************************************************************************/
/*  IAUFNDATEN                                ACS Object-structure      */
/************************************************************************/

#define IAUFNDATEN 0x02C4
/* Aufnahme-Istwerte */


typedef struct iaufndaten_t1_tag
   {
        ushort               kvist;
        slong              masist;
        slong              msist;
        ushort               anfma;
        slong              dfp;
        uchar              szeit;
        uchar              pulse;
   }__attribute__ ((packed)) iaufndaten_t1;



/************************************************************************/
/*  IAUFNSTATUS                               ACS Object-structure      */
/************************************************************************/

#define IAUFNSTATUS 0x02C8
/* Bereitschaft zur Aufnahme */


typedef struct iaufnstatus_t1_tag
   {
        uchar              aufnbereit;
   }__attribute__ ((packed)) iaufnstatus_t1;



/************************************************************************/
/*  IAUFNZANZ                                 ACS Object-structure      */
/************************************************************************/

#define IAUFNZANZ 0x0084
/* Aufnahmezaehler fuer Anzeigesteuerung bei Kasetten (Ziel-)betrieb */

typedef struct iaufnzanz_t1_tag
   {
        uchar              fraufn;
        uchar              belaufn;
   }__attribute__ ((packed)) iaufnzanz_t1;



/************************************************************************/
/*  IBETRIEBSART                              ACS Object-structure      */
/************************************************************************/

#define IBETRIEBSART 0x019B
/* Betriebsart/Target Angabe */

typedef struct ibetriebsart_t1_tag
   {
        uchar              betriebsart;
        uchar              target;
        uchar              bastatus;
   }__attribute__ ((packed)) ibetriebsart_t1;



/************************************************************************/
/*  IBEWEGUNG                                 ACS Object-structure      */
/************************************************************************/

#define IBEWEGUNG 0x0196
/* Statusmeldung eines Antriebs */

typedef struct ibewegung_t1_tag
   {
        uchar              antrieb;
        sshort                physposition;
        uchar              antriebstatus;
   }__attribute__ ((packed)) ibewegung_t1;



/************************************************************************/
/*  IBILD                                     ACS Object-structure      */
/************************************************************************/

#define IBILD 0x0386
/* Meldung der Zustandes der Bildverarbeitung */

typedef struct ibild_t1_tag
   {
        uchar              avr_status;
        uchar              v_buk;
        uchar              h_buk;
   }__attribute__ ((packed)) ibild_t1;



/************************************************************************/
/*  IBILDFORMAT                               ACS Object-structure      */
/************************************************************************/

#define IBILDFORMAT 0x01F8
/* Angabe des Unterteilungsformats */

typedef struct ibildformat_t1_tag
   {
        ushort               bildformat_q;
        ushort               bildformat_l;
   }__attribute__ ((packed)) ibildformat_t1;



/************************************************************************/
/*  IBINOK                                    ACS Object-structure      */
/************************************************************************/

#define IBINOK 0x0020
/* Lebensmeldung der XCU */




/************************************************************************/
/*  IBLENDE                                   ACS Object-structure      */
/************************************************************************/

#define IBLENDE 0x0323
/* Rueckmeldung der akt. Blendenpositionen und Zustaende */

typedef struct iblende_t1_tag
   {
        uchar              dlsteuerung;
        uchar              geschlossen;
        uchar              blendenanzahl;
   }__attribute__ ((packed)) iblende_t1;

typedef struct iblende_t2_tag
   {
        uchar              blendenauswahl;
        ushort               blendenposition;
        sshort                blendenwinkel;
        uchar              blendenstatus;
   }__attribute__ ((packed)) iblende_t2;



/************************************************************************/
/*  IBREMSUNG                                 ACS Object-structure      */
/************************************************************************/

#define IBREMSUNG 0x019F
/* Angabe ueber Bremsenzustand */

typedef struct ibremsung_t1_tag
   {
        uchar              bremse;
        uchar              brstatus;
   }__attribute__ ((packed)) ibremsung_t1;



/************************************************************************/
/*  IBV                                       ACS Object-structure      */
/************************************************************************/

#define IBV 0x012E
/* Ansteuerung einer Bildausgabe */

typedef struct ibv_t1_tag
   {
        uchar              zoom;
   }__attribute__ ((packed)) ibv_t1;



/************************************************************************/
/*  IBVFSANZ                                  ACS Object-structure      */
/************************************************************************/

#define IBVFSANZ 0x0080
/* Anzeigesteuerung der BV-/FS-spezifischen Daten */

typedef struct ibvfsanz_t1_tag
   {
        ushort               bvformat;
        uchar              zoom;
        uchar              bumkehr;
   }__attribute__ ((packed)) ibvfsanz_t1;



/************************************************************************/
/*  IDATE                                     ACS Object-structure      */
/************************************************************************/

#define IDATE 0x0BC8
/* Angabe der Zeit */

typedef struct idate_t1_tag
   {
        uchar              year;
        uchar              month;
        uchar              day;
        uchar              hour;
        uchar              minute;
        uchar              second;
   }__attribute__ ((packed)) idate_t1;



/************************************************************************/
/*  IDLANZ                                    ACS Object-structure      */
/************************************************************************/

#define IDLANZ 0x007B
/* Anzeigesteuerung der Durchleuchtungsdaten */

typedef struct idlanz_t1_tag
   {
        uchar              dlba;
        uchar              dlprog;
        uchar              dlstop;
        uchar              dlhupe;
        ushort               kvhand;
   }__attribute__ ((packed)) idlanz_t1;



/************************************************************************/
/*  IDLDATEN                                  ACS Object-structure      */
/************************************************************************/

#define IDLDATEN 0x02C5
/* Durchleuchtungs-Istwerte */

typedef struct idldaten_t1_tag
   {
        ushort               kvist;
        ushort               maist;
        slong              dfp;
        sshort                dlabw;
        uchar              regzus;
   }__attribute__ ((packed)) idldaten_t1;



/************************************************************************/
/*  IDLISTANZ                                 ACS Object-structure      */
/************************************************************************/

#define IDLISTANZ 0x007C
/* Anzeigesteuerung der Durchleuchtungsistwerte */

typedef struct idlistanz_t1_tag
   {
        ushort               kv;
        ushort               ma;
        ushort               min;
   }__attribute__ ((packed)) idlistanz_t1;



/************************************************************************/
/*  IDLSTATUS                                 ACS Object-structure      */
/************************************************************************/

#define IDLSTATUS 0x02C7
/* Teilt dem Anlagencontroller die Bereitschaft zur Durchleuchtung mit */

typedef struct idlstatus_t1_tag
   {
        uchar              dlbereit;
   }__attribute__ ((packed)) idlstatus_t1;



/************************************************************************/
/*  IFEHLER                                   ACS Object-structure      */
/************************************************************************/

#define IFEHLER 0x0005
/* Fehlermeldung der Funktionseinheit */

typedef struct ifehler_t1_tag
   {
        ushort               fehlernummer;
        uchar              kategorie;
        uchar              umgebung1;
        uchar              umgebung2;
        uchar              umgebung3;
        uchar              umgebung4;
        uchar              umgebung5;
        uchar              umgebung6;
        uchar              umgebung7;
        uchar              umgebung8;
        uchar              umgebung9;
        uchar              umgebung10;
   }__attribute__ ((packed)) ifehler_t1;



/************************************************************************/
/*  IFEHLERANZ                                ACS Object-structure      */
/************************************************************************/

#define IFEHLERANZ 0x0091
/* Steuerung der Fehleranzeige */

typedef struct ifehleranz_t1_tag
   {
        ushort               fehlernummer;
        uchar              apid;
        uchar              kategorie;
        char               fehlertext[FEHLERTEXT_LENGTH];
   }__attribute__ ((packed)) ifehleranz_t1;



/************************************************************************/
/*  IFEHLERQUIT                               ACS Object-structure      */
/************************************************************************/

#define IFEHLERQUIT 0x0015
/* Quittierung von behebbaren Fehlern */




/************************************************************************/
/*  IFESTATUS                                 ACS Object-structure      */
/************************************************************************/

#define IFESTATUS 0x0011
/* Zustandsmeldung der Funktionseinheit */

typedef struct ifestatus_t1_tag
   {
        uchar              festatus;
   }__attribute__ ((packed)) ifestatus_t1;



/************************************************************************/
/*  IFFA                                      ACS Object-structure      */
/************************************************************************/

#define IFFA 0x0324
/* Aktueller FFA-Wert */

typedef struct iffa_t1_tag
   {
        sshort                ffa;
   }__attribute__ ((packed)) iffa_t1;



/************************************************************************/
/*  IGENANZ                                   ACS Object-structure      */
/************************************************************************/

#define IGENANZ 0x008E
/* Anzeigesteuerung der Generatorenbedienung */

typedef struct igenanz_t1_tag
   {
        uchar              technik;
        ushort               kv;
        slong              mas;
        slong              ms;
        uchar              fokus;
        uchar              proz;
        uchar              kennl;
        uchar              kvauto;
        uchar              statusigenanz;
   }__attribute__ ((packed)) igenanz_t1;



/************************************************************************/
/*  IGGANZ                                    ACS Object-structure      */
/************************************************************************/

#define IGGANZ 0x0078
/* Anzeigesteuerung Geraetegeometrie */

typedef struct igganz_t1_tag
   {
        ushort               anzcode;
        sshort                param;
   }__attribute__ ((packed)) igganz_t1;



/************************************************************************/
/*  IGGFFA                                    ACS Object-structure      */
/************************************************************************/

#define IGGFFA 0x01A0
/* Angabe des aktuellen FFA's */

typedef struct iggffa_t1_tag
   {
        sshort                ffa;
   }__attribute__ ((packed)) iggffa_t1;



/************************************************************************/
/*  IIDENT                                    ACS Object-structure      */
/************************************************************************/

#define IIDENT 0x0001
/* Bekanntgabe einer Funktionseinheit im XNet */

typedef struct iident_t1_tag
   {
        uchar              fetyp;
        uchar              knotenid;
        uchar              apid;
        char               kompname[KOMPNAME_LENGTH];
   }__attribute__ ((packed)) iident_t1;



/************************************************************************/
/*  IINFOCOMP                                 ACS Object-structure      */
/************************************************************************/

#define IINFOCOMP 0x0BC9
/* Info ueber Komponenten */

typedef struct iinfocomp_t1_tag
   {
        uchar              backup_set;
        uchar              apanzahl;
   }__attribute__ ((packed)) iinfocomp_t1;

typedef struct iinfocomp_t2_tag
   {
        uchar              apid;
        uchar              anzahl_kennid;
   }__attribute__ ((packed)) iinfocomp_t2;

typedef struct iinfocomp_t3_tag
   {
        uchar              kenndatum_id;
        uchar              anzahlkenneintr;
   }__attribute__ ((packed)) iinfocomp_t3;

typedef struct iinfocomp_t4_tag
   {
        char               kenneintrag[KENNEINTRAG_LENGTH];
   }__attribute__ ((packed)) iinfocomp_t4;



/************************************************************************/
/*  IINIT                                     ACS Object-structure      */
/************************************************************************/

#define IINIT 0x0008
/* Meldung der Initialisierungsdaten */



typedef struct iinit_t1_tag
   {
        uchar              initkennung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) iinit_t1;

typedef struct iinit_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) iinit_t2;



/************************************************************************/
/*  IIONANZ                                   ACS Object-structure      */
/************************************************************************/

#define IIONANZ 0x008F
/* Anzeigesteuerung der Generatorenbedienung */


typedef struct iionanz_t1_tag
   {
        sshort                korrionanz;
        uchar              gewmessf;
        uchar              aktmessf;
        uchar              folie;
        ushort               folieempf;
        ushort               dosis;
   }__attribute__ ((packed)) iionanz_t1;



/************************************************************************/
/*  IISTWERTEQUIT                             ACS Object-structure      */
/************************************************************************/

#define IISTWERTEQUIT 0x001A
/* Quittung fuer Istwertabfrage */




/************************************************************************/
/*  IJUSTAGECMD                               ACS Object-structure      */
/************************************************************************/

#define IJUSTAGECMD 0x000C
/* Rueckmeldung eines Justageauftrags */


typedef struct ijustagecmd_t1_tag
   {
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) ijustagecmd_t1;

typedef struct ijustagecmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) ijustagecmd_t2;



/************************************************************************/
/*  IKASSANZ                                  ACS Object-structure      */
/************************************************************************/

#define IKASSANZ 0x0082
/* Anzeigesteuerung bei Kassetten (Ziel)betrieb */

typedef struct ikassanz_t1_tag
   {
        ushort               bildformat_q;
        ushort               bildformat_l;
        uchar              kasspos;
        uchar              kassgel;
        uchar              gewteilg;
        uchar              anzahlerlteilg;
   }__attribute__ ((packed)) ikassanz_t1;

typedef struct ikassanz_t2_tag
   {
        uchar              erlteilg;
   }__attribute__ ((packed)) ikassanz_t2;



/************************************************************************/
/*  IKASSDATEN                                ACS Object-structure      */
/************************************************************************/

#define IKASSDATEN 0x01F4
/* Rueckmeldung der Kenndaten einer eingelegten Kassette */

typedef struct ikassdaten_t1_tag
   {
        uchar              ident;
        ushort               bildformat_q;
        ushort               bildformat_l;
        uchar              teilanzahl;
   }__attribute__ ((packed)) ikassdaten_t1;

typedef struct ikassdaten_t2_tag
   {
        uchar              teilung_q;
        uchar              teilung_l;
   }__attribute__ ((packed)) ikassdaten_t2;

typedef struct ikassdaten_t3_tag
   {
        char               kennung[KENNUNG_LENGTH];
   }__attribute__ ((packed)) ikassdaten_t3;



/************************************************************************/
/*  IKASSPOS                                  ACS Object-structure      */
/************************************************************************/

#define IKASSPOS 0x01F6
/* Rueckmeldung der aktuellen Position der Kassette */

typedef struct ikasspos_t1_tag
   {
        uchar              kassposition;
        uchar              dlsteuerung;
   }__attribute__ ((packed)) ikasspos_t1;



/************************************************************************/
/*  IKENNDATEN                                ACS Object-structure      */
/************************************************************************/

#define IKENNDATEN 0x000A
/* Rueckmeldung der Kenndaten */

typedef struct ikenndaten_t1_tag
   {
        uchar              anzahlkenndaten;
   }__attribute__ ((packed)) ikenndaten_t1;

typedef struct ikenndaten_t2_tag
   {
        uchar              kenndatum_id;
        uchar              anzahlkenneintr;
   }__attribute__ ((packed)) ikenndaten_t2;

typedef struct ikenndaten_t3_tag
   {
        char               kenneintrag[KENNEINTRAG_LENGTH];
   }__attribute__ ((packed)) ikenndaten_t3;



/************************************************************************/
/*  IKOLLAUFL                                 ACS Object-structure      */
/************************************************************************/

#define IKOLLAUFL 0x0079
/* Angabe der Kollisionsaufloesung */

typedef struct ikollaufl_t1_tag
   {
        uchar              auflanzahl;
   }__attribute__ ((packed)) ikollaufl_t1;

typedef struct ikollaufl_t2_tag
   {
        ushort               fktcode;
        uchar              auflrichtung;
   }__attribute__ ((packed)) ikollaufl_t2;



/************************************************************************/
/*  IKOLLISION                                ACS Object-structure      */
/************************************************************************/

#define IKOLLISION 0x019D
/* Angabe einer Kollision */



typedef struct ikollision_t1_tag
   {
        uchar              antriebsanzahl;
   }__attribute__ ((packed)) ikollision_t1;

typedef struct ikollision_t2_tag
   {
        uchar              antrieb;
        uchar              antriebsrichtung;
   }__attribute__ ((packed)) ikollision_t2;



/************************************************************************/
/*  INACHANZ                                  ACS Object-structure      */
/************************************************************************/

#define INACHANZ 0x0090
/* Anzeigesteuerung der Nachanzeige(Generatorenbedienung) */

typedef struct inachanz_t1_tag
   {
        ushort               kvist;
        slong              masist;
        slong              msist;
        uchar              szeit;
        uchar              pulse;
        uchar              ionlimit;
   }__attribute__ ((packed)) inachanz_t1;



/************************************************************************/
/*  INETZAUFNAHME                             ACS Object-structure      */
/************************************************************************/

#define INETZAUFNAHME 0x0002
/* Aufnahme einer Funktionseinheit im XNet */




/************************************************************************/
/*  INOTSTOPANZ                               ACS Object-structure      */
/************************************************************************/

#define INOTSTOPANZ 0x0097
/* Anzeige Notstop */

typedef struct inotstopanz_t1_tag
   {
        uchar              notstop;
   }__attribute__ ((packed)) inotstopanz_t1;



/************************************************************************/
/*  IORGANANZ                                 ACS Object-structure      */
/************************************************************************/

#define IORGANANZ 0x008D
/* Anzeigesteuerung der Region und Organwahl */

typedef struct iorgananz_t1_tag
   {
        uchar              arzt;
        uchar              region;
        uchar              organ;
        sshort                transpkorr;
   }__attribute__ ((packed)) iorgananz_t1;



/************************************************************************/
/*  IPRINTAUFN                                ACS Object-structure      */
/************************************************************************/

#define IPRINTAUFN 0x009A
/* Druckerdaten fuer Aufnahme */

typedef struct iprintaufn_t1_tag
   {
        ushort               kvist;
        slong              masist;
        slong              dfp;
   }__attribute__ ((packed)) iprintaufn_t1;



/************************************************************************/
/*  IPRINTDL                                  ACS Object-structure      */
/************************************************************************/

#define IPRINTDL 0x009B
/* Druckerdaten fuer DL */

typedef struct iprintdl_t1_tag
   {
        ushort               kv;
        ushort               ma;
        ushort               min;
        slong              dfp;
   }__attribute__ ((packed)) iprintdl_t1;



/************************************************************************/
/*  IQUIT                                     ACS Object-structure      */
/************************************************************************/

#define IQUIT 0x0094
/* Quittieren einer nicht zulaessigen Funktion */

typedef struct iquit_t1_tag
   {
        uchar              bedeinh;
        ushort               fktcode;
        uchar              statusiquit;
   }__attribute__ ((packed)) iquit_t1;



/************************************************************************/
/*  IRASTER                                   ACS Object-structure      */
/************************************************************************/

#define IRASTER 0x032B
/* Rueckmeldung des Rasterzustandes */

typedef struct iraster_t1_tag
   {
        uchar              rasternr;
        uchar              rasterstatus;
        uchar              rasterposition;
   }__attribute__ ((packed)) iraster_t1;



/************************************************************************/
/*  IROEANZ                                   ACS Object-structure      */
/************************************************************************/

#define IROEANZ 0x007D
/* Anzeigesteuerung der strahlenabhaengigen Anzeigen */

typedef struct iroeanz_t1_tag
   {
        uchar              tubeld;
        ushort               pause;
   }__attribute__ ((packed)) iroeanz_t1;



/************************************************************************/
/*  ISCHICHTANTR                              ACS Object-structure      */
/************************************************************************/

#define ISCHICHTANTR 0x0199
/* Angabe der Schichtantriebe */

typedef struct ischichtantr_t1_tag
   {
        uchar              antriebsanzahl;
   }__attribute__ ((packed)) ischichtantr_t1;

typedef struct ischichtantr_t2_tag
   {
        uchar              antrieb;
        uchar              antriebsrichtung;
   }__attribute__ ((packed)) ischichtantr_t2;



/************************************************************************/
/*  ISCHICHTSCHUSS                            ACS Object-structure      */
/************************************************************************/

#define ISCHICHTSCHUSS 0x0198
/* Rueckmeldung der Schichtschussposition */




/************************************************************************/
/*  ISERVBETRIEB                              ACS Object-structure      */
/************************************************************************/

#define ISERVBETRIEB 0x0BD5
/* Meldung der Betriebsdaten */

typedef struct iservbetrieb_t1_tag
   {
        slong              einschaltdauer;
        uchar              tubectr;
   }__attribute__ ((packed)) iservbetrieb_t1;

typedef struct iservbetrieb_t2_tag
   {
        uchar              tubenr;
        slong              lasteinheit;
        slong              aufnctrwait;
        slong              aufnctranode;
   }__attribute__ ((packed)) iservbetrieb_t2;



/************************************************************************/
/*  ISERVDATA                                 ACS Object-structure      */
/************************************************************************/

#define ISERVDATA 0x0BD0
/* Status der Servicedatenspeicherung */

typedef struct iservdata_t1_tag
   {
        uchar              datastatus;
   }__attribute__ ((packed)) iservdata_t1;



/************************************************************************/
/*  ISERVERRORLOG                             ACS Object-structure      */
/************************************************************************/

#define ISERVERRORLOG 0x0BCD
/* Rueckmeldung des Errorlog */


typedef struct iserverrorlog_t1_tag
   {
        uchar              anzahlfehler;
        sshort                anzahldaten;
   }__attribute__ ((packed)) iserverrorlog_t1;

typedef struct iserverrorlog_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) iserverrorlog_t2;



/************************************************************************/
/*  ISERVINIT                                 ACS Object-structure      */
/************************************************************************/

#define ISERVINIT 0x0BCA
/* Rueckmeldung von Initbloecken */

typedef struct iservinit_t1_tag
   {
        uchar              apid;
        uchar              initkennung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) iservinit_t1;

typedef struct iservinit_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) iservinit_t2;



/************************************************************************/
/*  ISERVJUSTCMD                              ACS Object-structure      */
/************************************************************************/

#define ISERVJUSTCMD 0x0BCB
/* Justagedaten einer FE */

typedef struct iservjustcmd_t1_tag
   {
        uchar              apid;
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) iservjustcmd_t1;

typedef struct iservjustcmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) iservjustcmd_t2;



/************************************************************************/
/*  ISERVMONITOR                              ACS Object-structure      */
/************************************************************************/

#define ISERVMONITOR 0x0BCF
/* Monitordaten */

typedef struct iservmonitor_t1_tag
   {
        uchar              apid;
        uchar              monstatus;
        uchar              monanzahl;
        slong              monstart;
        uchar              monanzdat;
   }__attribute__ ((packed)) iservmonitor_t1;

typedef struct iservmonitor_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) iservmonitor_t2;



/************************************************************************/
/*  ISERVQUIT                                 ACS Object-structure      */
/************************************************************************/

#define ISERVQUIT 0x0BD2
/* Quittung Initblock */

typedef struct iservquit_t1_tag
   {
        uchar              apid;
        uchar              initkennung;
        uchar              storestatus;
   }__attribute__ ((packed)) iservquit_t1;



/************************************************************************/
/*  ISERVSTORE                                ACS Object-structure      */
/************************************************************************/

#define ISERVSTORE 0x0BD3
/* RÅckmeldung fÅr Daten gespeichert */

typedef struct iservstore_t1_tag
   {
        uchar              datastatus;
   }__attribute__ ((packed)) iservstore_t1;



/************************************************************************/
/*  ISERVTESTCMD                              ACS Object-structure      */
/************************************************************************/

#define ISERVTESTCMD 0x0BCC
/* Testdaten einer FE */

typedef struct iservtestcmd_t1_tag
   {
        uchar              apid;
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) iservtestcmd_t1;

typedef struct iservtestcmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) iservtestcmd_t2;



/************************************************************************/
/*  ISESTATUS                                 ACS Object-structure      */
/************************************************************************/

#define ISESTATUS 0x02C6
/* Rueckmeldung des SE-Zustandes */

typedef struct isestatus_t1_tag
   {
        uchar              ss;
        uchar              tuerkon;
        uchar              drucksch;
   }__attribute__ ((packed)) isestatus_t1;



/************************************************************************/
/*  ISPANZ                                    ACS Object-structure      */
/************************************************************************/

#define ISPANZ 0x0092
/* Anzeigesteuerung der Seriendaten */

typedef struct ispanz_t1_tag
   {
        uchar              bfreq;
        uchar              serie;
        ushort               dose;
        ushort               aufnzeit;
        uchar              szeit;
   }__attribute__ ((packed)) ispanz_t1;



/************************************************************************/
/*  ISTATABSCHALT                             ACS Object-structure      */
/************************************************************************/

#define ISTATABSCHALT 0x02CB
/* Wer hat die Aufnahme abgeschaltet */

typedef struct istatabschalt_t1_tag
   {
        uchar              abschaltung;
   }__attribute__ ((packed)) istatabschalt_t1;



/************************************************************************/
/*  ISTATUSGENAUFN                            ACS Object-structure      */
/************************************************************************/

#define ISTATUSGENAUFN 0x02C9
/* Zustand der Aufnahme */

typedef struct istatusgenaufn_t1_tag
   {
        uchar              heizgok;
        uchar              anodeok;
        uchar              strabereit;
   }__attribute__ ((packed)) istatusgenaufn_t1;



/************************************************************************/
/*  ISTATUSREPORT                             ACS Object-structure      */
/************************************************************************/

#define ISTATUSREPORT 0x0BCE
/* Angabe ueber Status der FE */

typedef struct istatusreport_t1_tag
   {
        uchar              apid;
        uchar              festatus;
   }__attribute__ ((packed)) istatusreport_t1;



/************************************************************************/
/*  ISTELLUNG                                 ACS Object-structure      */
/************************************************************************/

#define ISTELLUNG 0x0197
/* Rueckmeldung bei Anfahrt einer Festposition */

typedef struct istellung_t1_tag
   {
        uchar              festposition;
        uchar              antriebstatus;
   }__attribute__ ((packed)) istellung_t1;



/************************************************************************/
/*  ISTRAHLERWAHL                             ACS Object-structure      */
/************************************************************************/

#define ISTRAHLERWAHL 0x02C1
/* Teilt dem Anlagencontroller mit, welcher Strahler gewaelt worden ist */

typedef struct istrahlerwahl_t1_tag
   {
        uchar              strahler;
   }__attribute__ ((packed)) istrahlerwahl_t1;



/************************************************************************/
/*  ISTRAHLGAUFN                              ACS Object-structure      */
/************************************************************************/

#define ISTRAHLGAUFN 0x02CA
/* Zustand der Aufnahmestrahlung */

typedef struct istrahlgaufn_t1_tag
   {
        uchar              strahlung;
   }__attribute__ ((packed)) istrahlgaufn_t1;



/************************************************************************/
/*  ISTRAHLGDL                                ACS Object-structure      */
/************************************************************************/

#define ISTRAHLGDL 0x02CC
/* Mitteilung der Strahlung bei DL */

typedef struct istrahlgdl_t1_tag
   {
        uchar              strahlung;
   }__attribute__ ((packed)) istrahlgdl_t1;



/************************************************************************/
/*  ISTRFR                                    ACS Object-structure      */
/************************************************************************/

#define ISTRFR 0x02D1
/* Strahlungsfreigabe-Signal */

typedef struct istrfr_t1_tag
   {
        uchar              statusstrfr;
   }__attribute__ ((packed)) istrfr_t1;



/************************************************************************/
/*  ISTRMANANZ                                ACS Object-structure      */
/************************************************************************/

#define ISTRMANANZ 0x0081
/* Anzeigesteuerung der Strahlungsmanipulationsspezifischen Daten */

typedef struct istrmananz_t1_tag
   {
        uchar              filter;
        uchar              raster;
        uchar              schrift;
        uchar              fauto;
        uchar              fkontr;
   }__attribute__ ((packed)) istrmananz_t1;



/************************************************************************/
/*  ISYSTEMANZ                                ACS Object-structure      */
/************************************************************************/

#define ISYSTEMANZ 0x008C
/* Anzeigesteuerung Systemwahl */

typedef struct isystemanz_t1_tag
   {
        uchar              systemnr;
        uchar              strahler;
        uchar              sysok;
   }__attribute__ ((packed)) isystemanz_t1;



/************************************************************************/
/*  ITESTCMD                                  ACS Object-structure      */
/************************************************************************/

#define ITESTCMD 0x0017
/* Rueckmeldung eines Testauftrags */

typedef struct itestcmd_t1_tag
   {
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) itestcmd_t1;

typedef struct itestcmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) itestcmd_t2;



/************************************************************************/
/*  ITOMOANZ                                  ACS Object-structure      */
/************************************************************************/

#define ITOMOANZ 0x0085
/* Anzeige der Schichtparameter */

typedef struct itomoanz_t1_tag
   {
        ushort               tomozeit;
        ushort               tomohoehe;
        uchar              tomowinkel;
        uchar              tomoauto;
        ushort               tomostep;
        uchar              tomoupdown;
   }__attribute__ ((packed)) itomoanz_t1;



/************************************************************************/
/*  IXRAY                                     ACS Object-structure      */
/************************************************************************/

#define IXRAY 0x007F
/* Anzeigesteuerung der Strahlungsanzeige */

typedef struct ixray_t1_tag
   {
        uchar              xray;
   }__attribute__ ((packed)) ixray_t1;



/************************************************************************/
/*  RQ_OBJECT                                 ACS Object-structure      */
/************************************************************************/

#define RQ_OBJECT 0x0F0B
/* Anforderung des Passwortes */




/************************************************************************/
/*  SANTRFREIGABE                             ACS Object-structure      */
/************************************************************************/

#define SANTRFREIGABE 0x0098
/* Freigabe einer Geraetebewegung */

typedef struct santrfreigabe_t1_tag
   {
        uchar              antriebsanzahl;
   }__attribute__ ((packed)) santrfreigabe_t1;

typedef struct santrfreigabe_t2_tag
   {
        uchar              antrieb;
   }__attribute__ ((packed)) santrfreigabe_t2;



/************************************************************************/
/*  SAPPLIKATION                              ACS Object-structure      */
/************************************************************************/

#define SAPPLIKATION 0x000D
/* Anstoss fuer einen Zustandswechsel */




/************************************************************************/
/*  SAUFNAUSL                                 ACS Object-structure      */
/************************************************************************/

#define SAUFNAUSL 0x02C2
/* Teilt der Strahlungserzeugung mit, dass Aufnahme ausgeloest werden soll */

typedef struct saufnausl_t1_tag
   {
        uchar              vorbereitung;
        uchar              hauptkontakt;
        uchar              strahlgbereit;
   }__attribute__ ((packed)) saufnausl_t1;



/************************************************************************/
/*  SAUFNDATEN                                ACS Object-structure      */
/************************************************************************/

#define SAUFNDATEN 0x02BC
/* Anwahl der Aufnahmedaten in der Strahlungserzeugung */

typedef struct saufndaten_t1_tag
   {
        uchar              technik;
        uchar              mode;
        ushort               kv;
        ushort               ma;
        uchar              fokus;
        uchar              proz;
        slong              mas;
        slong              ms;
        uchar              szeit;
   }__attribute__ ((packed)) saufndaten_t1;



/************************************************************************/
/*  SAUSLBED                                  ACS Object-structure      */
/************************************************************************/

#define SAUSLBED 0x006F
/* Steuert die Strahlungskoordinierung im Anlagercontroller an */

typedef struct sauslbed_t1_tag
   {
        uchar              bedeinh;
        uchar              dl;
        uchar              vorbereitung;
        uchar              hk;
   }__attribute__ ((packed)) sauslbed_t1;



/************************************************************************/
/*  SBEDALLG                                  ACS Object-structure      */
/************************************************************************/

#define SBEDALLG 0x006E
/* Allgemeine Bedienungen */

typedef struct sbedallg_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodeallg;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedallg_t1;



/************************************************************************/
/*  SBEDBVFS                                  ACS Object-structure      */
/************************************************************************/

#define SBEDBVFS 0x006C
/* Bedienung Online-Bildverarbeitung */

typedef struct sbedbvfs_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodebvfs;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedbvfs_t1;



/************************************************************************/
/*  SBEDEINBL                                 ACS Object-structure      */
/************************************************************************/

#define SBEDEINBL 0x006B
/* Bedienung Einblendung */

typedef struct sbedeinbl_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodeeinbl;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedeinbl_t1;



/************************************************************************/
/*  SBEDGEN                                   ACS Object-structure      */
/************************************************************************/

#define SBEDGEN 0x0066
/* Bedienung der Strahlungserzeugung */

typedef struct sbedgen_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodegen;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedgen_t1;



/************************************************************************/
/*  SBEDGG                                    ACS Object-structure      */
/************************************************************************/

#define SBEDGG 0x0064
/* Bedienung der Geraetegeometrie */

typedef struct sbedgg_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodegg;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedgg_t1;



/************************************************************************/
/*  SBEDKS                                    ACS Object-structure      */
/************************************************************************/

#define SBEDKS 0x0065
/* Bedienung des Kasettensystems */

typedef struct sbedks_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodeks;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedks_t1;



/************************************************************************/
/*  SBEDORG                                   ACS Object-structure      */
/************************************************************************/

#define SBEDORG 0x0069
/* Bedienung Organwahl */

typedef struct sbedorg_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodeorg;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedorg_t1;



/************************************************************************/
/*  SBEDSP                                    ACS Object-structure      */
/************************************************************************/

#define SBEDSP 0x0067
/* Bedienung Serienparameter */

typedef struct sbedsp_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodesp;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedsp_t1;



/************************************************************************/
/*  SBEDSTRM                                  ACS Object-structure      */
/************************************************************************/

#define SBEDSTRM 0x006A
/* Bedienung Strahlungsmanipulation */

typedef struct sbedstrm_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodestrm;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedstrm_t1;



/************************************************************************/
/*  SBEDSYS                                   ACS Object-structure      */
/************************************************************************/

#define SBEDSYS 0x0068
/* Bedienung Systemwahl */

typedef struct sbedsys_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodesys;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedsys_t1;



/************************************************************************/
/*  SBEDTOMO                                  ACS Object-structure      */
/************************************************************************/

#define SBEDTOMO 0x0075
/* Bedienung der Schichtparameter */

typedef struct sbedtomo_t1_tag
   {
        uchar              bedeinh;
        ushort               fktscodetomo;
        uchar              bedienobj;
        sshort                param;
   }__attribute__ ((packed)) sbedtomo_t1;



/************************************************************************/
/*  SBETRIEB                                  ACS Object-structure      */
/************************************************************************/

#define SBETRIEB 0x000E
/* Anstoss fuer einen Zustandswechsel */




/************************************************************************/
/*  SBETRIEBSART                              ACS Object-structure      */
/************************************************************************/

#define SBETRIEBSART 0x0191
/* Betriebsart/Target Angabe */

typedef struct sbetriebsart_t1_tag
   {
        uchar              betriebsart;
        uchar              target;
   }__attribute__ ((packed)) sbetriebsart_t1;



/************************************************************************/
/*  SBEWEGUNG                                 ACS Object-structure      */
/************************************************************************/

#define SBEWEGUNG 0x0190
/* Ansteuerung einer Geraete-Bewegung */

typedef struct sbewegung_t1_tag
   {
        uchar              antrieb;
        uchar              funktion;
        uchar              logposition;
        uchar              geschw;
   }__attribute__ ((packed)) sbewegung_t1;



/************************************************************************/
/*  SBILD                                     ACS Object-structure      */
/************************************************************************/

#define SBILD 0x0384
/* Ansteuerung der Bildverarbeitung */

typedef struct sbild_t1_tag
   {
        uchar              bild_v;
        uchar              bild_h;
        uchar              avr;
        uchar              zoom;
   }__attribute__ ((packed)) sbild_t1;



/************************************************************************/
/*  SBLENDENPOS                               ACS Object-structure      */
/************************************************************************/

#define SBLENDENPOS 0x0321
/* Einstellung von Blendenpositionen */

typedef struct sblendenpos_t1_tag
   {
        uchar              blendenanzahl;
   }__attribute__ ((packed)) sblendenpos_t1;

typedef struct sblendenpos_t2_tag
   {
        uchar              blendenauswahl;
        ushort               blendenposition;
        sshort                blendenwinkel;
   }__attribute__ ((packed)) sblendenpos_t2;



/************************************************************************/
/*  SBREMSUNG                                 ACS Object-structure      */
/************************************************************************/

#define SBREMSUNG 0x019E
/* Bremsenansteuerung */

typedef struct sbremsung_t1_tag
   {
        uchar              bremse;
        uchar              bremscmd;
   }__attribute__ ((packed)) sbremsung_t1;



/************************************************************************/
/*  SBV                                       ACS Object-structure      */
/************************************************************************/

#define SBV 0x012C
/* Ansteuerung des BV-Systems */


typedef struct sbv_t1_tag
   {
        uchar              zoom;
        uchar              dominante;
   }__attribute__ ((packed)) sbv_t1;



/************************************************************************/
/*  SDATE                                     ACS Object-structure      */
/************************************************************************/

#define SDATE 0x0BBA
/* Speichern der Zeit */

typedef struct sdate_t1_tag
   {
        uchar              year;
        uchar              month;
        uchar              day;
        uchar              hour;
        uchar              minute;
        uchar              second;
   }__attribute__ ((packed)) sdate_t1;



/************************************************************************/
/*  SDLAUSL                                   ACS Object-structure      */
/************************************************************************/

#define SDLAUSL 0x02C3
/* DL Ausloesung */

typedef struct sdlausl_t1_tag
   {
        uchar              dl;
   }__attribute__ ((packed)) sdlausl_t1;



/************************************************************************/
/*  SDLDATEN                                  ACS Object-structure      */
/************************************************************************/

#define SDLDATEN 0x02BE
/* Anwahl der Durchleuchtungsdaten in der Strahlungserzeugung */

typedef struct sdldaten_t1_tag
   {
        uchar              dlmode;
        uchar              kennl;
        ushort               dosisl;
        ushort               kv;
        ushort               ma;
        uchar              regstop;
        uchar              ionch;
   }__attribute__ ((packed)) sdldaten_t1;



/************************************************************************/
/*  SDLDCMD                                   ACS Object-structure      */
/************************************************************************/

#define SDLDCMD 0x0003
/* Steuerung des Downloadvorgangs */

typedef struct sdldcmd_t1_tag
   {
        uchar              kommando;
        uchar              prozessor;
   }__attribute__ ((packed)) sdldcmd_t1;



/************************************************************************/
/*  SDLDDATA                                  ACS Object-structure      */
/************************************************************************/

#define SDLDDATA 0x0004
/* Downloaddatenuebergabe */

typedef struct sdlddata_t1_tag
   {
        uchar              selektor;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sdlddata_t1;
)
typedef struct sdlddata_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sdlddata_t2;



/************************************************************************/
/*  SDOWNLOAD                                 ACS Object-structure      */
/************************************************************************/

#define SDOWNLOAD 0x000F
/* Anstoss fuer einen Zustandwechsel */




/************************************************************************/
/*  SFANZLOESCHEN                             ACS Object-structure      */
/************************************************************************/

#define SFANZLOESCHEN 0x0095
/* Fehleranzeige loeschen */




/************************************************************************/
/*  SFKREKONFIG                               ACS Object-structure      */
/************************************************************************/

#define SFKREKONFIG 0x0018
/* Anstoss fuer eine Funktionskreisaenderung */

typedef struct sfkrekonfig_t1_tag
   {
        uchar              zielfktkreis;
        uchar              apanzahl;
   }__attribute__ ((packed)) sfkrekonfig_t1;

typedef struct sfkrekonfig_t2_tag
   {
        uchar              apid;
   }__attribute__ ((packed)) sfkrekonfig_t2;



/************************************************************************/
/*  SGROUP                                    ACS Object-structure      */
/************************************************************************/

#define SGROUP 0x0BC7
/* Eintrag der Gruppenberechtigung */




/************************************************************************/
/*  SH_PASSWD                                 ACS Object-structure      */
/************************************************************************/

#define SH_PASSWD 0x0F10
/* Angabe des Passwortes */


typedef struct sh_passwd_t1_tag
   {
        uchar              pwdstatus;
        char               passwort[PASSWORT_LENGTH];
        char               ablaufdatum[ABLAUFDATUM_LENGTH];
        char               produktid[PRODUKTID_LENGTH];
        char               sn[SN_LENGTH];
        char               hostid[HOSTID_LENGTH];
        char               anlagendatum[ANLAGENDATUM_LENGTH];
        char               pwddatum[PWDDATUM_LENGTH];
   }__attribute__ ((packed)) sh_passwd_t1;



/************************************************************************/
/*  SINIT                                     ACS Object-structure      */
/************************************************************************/

#define SINIT 0x0007
/* Vorgabe der Initialisierungsdaten */

typedef struct sinit_t1_tag
   {
        uchar              initkennung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sinit_t1;

typedef struct sinit_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sinit_t2;



/************************************************************************/
/*  SIONDATEN                                 ACS Object-structure      */
/************************************************************************/

#define SIONDATEN 0x02BD
/* Anwahl der Iontomatdaten in der Strahlungserzeugung */

typedef struct siondaten_t1_tag
   {
        sshort                schwaerzkorr;
        uchar              messf;
        uchar              folie;
        ushort               dosis;
        uchar              zoom;
        uchar              ionch;
   }__attribute__ ((packed)) siondaten_t1;



/************************************************************************/
/*  SJUSTAGECMD                               ACS Object-structure      */
/************************************************************************/

#define SJUSTAGECMD 0x000B
/* Ausloesung eines Justageauftrags */

typedef struct sjustagecmd_t1_tag
   {
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sjustagecmd_t1;

typedef struct sjustagecmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sjustagecmd_t2;



/************************************************************************/
/*  SKASSPOS                                  ACS Object-structure      */
/************************************************************************/

#define SKASSPOS 0x01F5
/* Positionierung der Kassette */

typedef struct skasspos_t1_tag
   {
        uchar              kassposition;
        uchar              teilnr;
   }__attribute__ ((packed)) skasspos_t1;



/************************************************************************/
/*  SLICHTVISIER                              ACS Object-structure      */
/************************************************************************/

#define SLICHTVISIER 0x032C
/* Wechseln des LV-Zustandes */
// add by ding sujian for collimate behavior 2010-3-24 
#define SLICHTVISIER_2 0x0334




/************************************************************************/
/*  SLIMIT                                    ACS Object-structure      */
/************************************************************************/

#define SLIMIT 0x0320
/* Begrenzung der Blendenoeffnung und Blockierung der Handverstellung */

typedef struct slimit_t1_tag
   {
        uchar              blockierung;
        uchar              kreisform;
        uchar              blendenanzahl;
   }__attribute__ ((packed)) slimit_t1;

typedef struct slimit_t2_tag
   {
        uchar              blendenauswahl;
        ushort               oeffnung;
        uchar              limitaktion;
   }__attribute__ ((packed)) slimit_t2;



/************************************************************************/
/*  SRASTER                                   ACS Object-structure      */
/************************************************************************/

#define SRASTER 0x032A
/* Steuerung der Rasterbewegung */

typedef struct sraster_t1_tag
   {
        uchar              rasternr;
        uchar              rasteraktion;
   }__attribute__ ((packed)) sraster_t1;



/************************************************************************/
/*  SREGELDATEN                               ACS Object-structure      */
/************************************************************************/

#define SREGELDATEN 0x02BF
/* Regelkennlinie fuer Indirekttechnik-Szenen (Sircam,DR) */

typedef struct sregeldaten_t1_tag
   {
        uchar              startw;
        uchar              punkte;
        uchar              bp_punkte;
        ushort               kv_punkte;
        ushort               ma_punkte;
        slong              ms;
   }__attribute__ ((packed)) sregeldaten_t1;



/************************************************************************/
/*  SRESET                                    ACS Object-structure      */
/************************************************************************/

#define SRESET 0x0012
/* Resetausloesung der Funktionseinheit */




/************************************************************************/
/*  SRESETFEHLER                              ACS Object-structure      */
/************************************************************************/

#define SRESETFEHLER 0x0014
/* Ruecksetzen einer Fehlermeldung */




/************************************************************************/
/*  SSCHICHT                                  ACS Object-structure      */
/************************************************************************/

#define SSCHICHT 0x0192
/* Daten fuer Betriebsart Schichten */

typedef struct sschicht_t1_tag
   {
        uchar              tomowinkel;
        ushort               tomozeit;
        ushort               tomohoehe;
   }__attribute__ ((packed)) sschicht_t1;



/************************************************************************/
/*  SSELECTCOMP                               ACS Object-structure      */
/************************************************************************/

#define SSELECTCOMP 0x0BBB
/* Auswahl von FE's fuer Service */

typedef struct sselectcomp_t1_tag
   {
        uchar              selfunktion;
        uchar              apanzahl;
   }__attribute__ ((packed)) sselectcomp_t1;

typedef struct sselectcomp_t2_tag
   {
        uchar              apid;
   }__attribute__ ((packed)) sselectcomp_t2;



/************************************************************************/
/*  SSERVDATA                                 ACS Object-structure      */
/************************************************************************/

#define SSERVDATA 0x0BD1
/* Servicedaten */

typedef struct sservdata_t1_tag
   {
        uchar              year;
        uchar              month;
        uchar              day;
        uchar              hourstart;
        uchar              minutestart;
        uchar              secondstart;
        uchar              hourend;
        uchar              minuteend;
        uchar              secondend;
        char               user[USER_LENGTH];
        uchar              group;
        char               comment[COMMENT_LENGTH];
   }__attribute__ ((packed)) sservdata_t1;



/************************************************************************/
/*  SSERVDLDCMD                               ACS Object-structure      */
/************************************************************************/

#define SSERVDLDCMD 0x0BC5
/* Steuerung des Downloadvorgangs */

typedef struct sservdldcmd_t1_tag
   {
        uchar              kommando;
        uchar              prozessor;
   }__attribute__ ((packed)) sservdldcmd_t1;



/************************************************************************/
/*  SSERVDLDDATA                              ACS Object-structure      */
/************************************************************************/

#define SSERVDLDDATA 0x0BC6
/* Downloaddatenuebergabe */

typedef struct sservdlddata_t1_tag
   {
        uchar              selektor;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sservdlddata_t1;

typedef struct sservdlddata_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sservdlddata_t2;



/************************************************************************/
/*  SSERVDOWNLOAD                             ACS Object-structure      */
/************************************************************************/

#define SSERVDOWNLOAD 0x0BC4
/* Anstoss Downloadmode */

typedef struct sservdownload_t1_tag
   {
        uchar              apid;
   }__attribute__ ((packed)) sservdownload_t1;



/************************************************************************/
/*  SSERVERRORLOG                             ACS Object-structure      */
/************************************************************************/

#define SSERVERRORLOG 0x0BC2
/* Kommando fuer Errorlog */

typedef struct sserverrorlog_t1_tag
   {
        uchar              errorcmd;
   }__attribute__ ((packed)) sserverrorlog_t1;



/************************************************************************/
/*  SSERVICE                                  ACS Object-structure      */
/************************************************************************/

#define SSERVICE 0x0010
/* Anstoss fuer einen Zustandwechsel */




/************************************************************************/
/*  SSERVINIT                                 ACS Object-structure      */
/************************************************************************/

#define SSERVINIT 0x0BBD
/* Initblock */

typedef struct sservinit_t1_tag
   {
        uchar              apid;
        uchar              initkennung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sservinit_t1;

typedef struct sservinit_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sservinit_t2;



/************************************************************************/
/*  SSERVJUSTCMD                              ACS Object-structure      */
/************************************************************************/

#define SSERVJUSTCMD 0x0BBF
/* Justagekommando */

typedef struct sservjustcmd_t1_tag
   {
        uchar              apid;
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sservjustcmd_t1;

typedef struct sservjustcmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sservjustcmd_t2;



/************************************************************************/
/*  SSERVMONITOR                              ACS Object-structure      */
/************************************************************************/

#define SSERVMONITOR 0x0BC3
/* Anfordern von Monitorbloecken */



typedef struct sservmonitor_t1_tag
   {
        uchar              apid;
        ushort               timeint;
        uchar              monanzahl;
   }__attribute__ ((packed)) sservmonitor_t1;

typedef struct sservmonitor_t2_tag
   {
        uchar              moncmd;
        uchar              monlen;
        slong              monstart;
   }__attribute__ ((packed)) sservmonitor_t2;



/************************************************************************/
/*  SSERVRESET                                ACS Object-structure      */
/************************************************************************/

#define SSERVRESET 0x0BBC
/* Reset an FE */

typedef struct sservreset_t1_tag
   {
        uchar              apid;
   }__attribute__ ((packed)) sservreset_t1;



/************************************************************************/
/*  SSERVTESTCMD                              ACS Object-structure      */
/************************************************************************/

#define SSERVTESTCMD 0x0BC0
/* Testcommando */

typedef struct sservtestcmd_t1_tag
   {
        uchar              apid;
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) sservtestcmd_t1;

typedef struct sservtestcmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) sservtestcmd_t2;



/************************************************************************/
/*  SSTELLUNG                                 ACS Object-structure      */
/************************************************************************/

#define SSTELLUNG 0x0193
/* Anfahrt einer Festposition */

typedef struct sstellung_t1_tag
   {
        uchar              festposition;
   }__attribute__ ((packed)) sstellung_t1;



/************************************************************************/
/*  SSTRAHLERWAHL                             ACS Object-structure      */
/************************************************************************/

#define SSTRAHLERWAHL 0x02C0
/* Teilt der Strahlungserzeugung mit, welcher Strahler gewaelt werden soll */

typedef struct sstrahlerwahl_t1_tag
   {
        uchar              strahler;
   }__attribute__ ((packed)) sstrahlerwahl_t1;



/************************************************************************/
/*  STEILUNG                                  ACS Object-structure      */
/************************************************************************/

#define STEILUNG 0x01F7
/* Parametrisierung der Unterteilung */

typedef struct steilung_t1_tag
   {
        uchar              teilung_q;
        uchar              teilung_l;
   }__attribute__ ((packed)) steilung_t1;



/************************************************************************/
/*  STESTCMD                                  ACS Object-structure      */
/************************************************************************/

#define STESTCMD 0x0016
/* Ausloesung eines Testauftrags */

typedef struct stestcmd_t1_tag
   {
        uchar              cmdkennung;
        uchar              aktivierung;
        sshort                anzahldaten;
   }__attribute__ ((packed)) stestcmd_t1;

typedef struct stestcmd_t2_tag
   {
        uchar              daten;
   }__attribute__ ((packed)) stestcmd_t2;



/************************************************************************/
/*  ST_PASSWD                                 ACS Object-structure      */
/************************************************************************/

#define ST_PASSWD 0x0F0F
/* Passwortinformation */

typedef struct st_passwd_t1_tag
   {
        uchar              pwdstatus;
        char               passwort[PASSWORT_LENGTH];
        char               ablaufdatum[ABLAUFDATUM_LENGTH];
        char               produktid[PRODUKTID_LENGTH];
        char               sn[SN_LENGTH];
        char               hostid[HOSTID_LENGTH];
        char               anlagendatum[ANLAGENDATUM_LENGTH];
        char               pwddatum[PWDDATUM_LENGTH];
   }__attribute__ ((packed)) st_passwd_t1;



/************************************************************************/
/*  SVERSTELLUNG                              ACS Object-structure      */
/************************************************************************/

#define SVERSTELLUNG 0x0322
/* Verstellung von Blendenpositionen */

typedef struct sverstellung_t1_tag
   {
        uchar              blendenanzahl;
   }__attribute__ ((packed)) sverstellung_t1;

typedef struct sverstellung_t2_tag
   {
        uchar              blendenauswahl;
        uchar              verstellrichtung;
        uchar              verstellaktion;
   }__attribute__ ((packed)) sverstellung_t2;

#endif
