/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product		: XCU XRAY Communication Unit
*
* Name			: eewrite.h
*
* Author		: Janschitz      ; Siemens AG ANL A426PR; (09131) 7-25627
*
* Language		: C
*
* Description	: Prototyp- & Makrodefinitionen f. nvwrite.c (Schreiben
*														auf NV-Ram)
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/eewrite.h,v 1.3 2006/10/06 11:36:18 hans Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: eewrite.h,v $
* Revision 1.3  2006/10/06 11:36:18  hans
* NOVRAM Startadresse auf D80000 verschoben, Reservierter Bereich für Gerätetask D8000-D8FFF
*
* Revision 1.2  2006/10/05 14:17:01  hans
* Adressen für NOVRAM geändert ( D0000-D7FFF)
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
*
*    Rev /main/10   1998/11/24 13:56:47   achim
* BV-Zoom wird im NV-Ram gespeichert und beim Hochlauf ueber-

* nommen ( Charm 8913 ).
*
*    Rev /main/9   1997/11/3 11:17:24   gaby
* Novram-Speicherplatz fuer FD-Kalibrierungs-Infos anlegen.
*
*    Rev /main/8   1997/9/1 11:37:54   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
*
*    Rev \main\7   1997/4/25 15:13:11   achim
* NV-Ram Bereich fuer Passwort, wegen History-Liste auf 0x200 erweitert.
 *
 *    Rev 1.5   07 Nov 1996 15:56:04   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.4   19 Sep 1996 19:59:04   hans
 *
 * Pointer fuer Permanent_remote_serrvice im NVRAM eingebaut.
 *
 *    Rev 1.3   09 Apr 1996 14:56:36   gaby
 *
 * Defines fuer Strahlerdokumentation eingefuegt.
 * Vergroesserung des Bereiches fuer Betriebsdaten im NVRAM.
 * NV_BetrData_p nicht mehr char+ sondern iservbetrieb_t*.
 *
 *    Rev 1.2   27 Sep 1995 15:27:42   achim
 *
 * Selektive Checksummen fuer NV-Ram implementiert.
 *
 *    Rev 1.1   07 Oct 1994 12:23:56   achim
 *
 * NOVRAM-Adressen an High-end-Hardware angepasst.
 * EEPROM-Bereiche sind entfallen.
 *
 *    Rev 1.0   10 Aug 1994 09:39:58   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/
#include <p_struct.h>
/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

#ifndef EEWRITE
#define EEWRITE

/* --- Definitionen fuer die Betriebsdaten --------------------------------- */
#define 	BETR_DATA_OK    11
/* ------------------------------------------------------------------------- */


enum NonVDevice
  {
  EEPROM,
  NVDEV_ERRORLOG,
  NVDEV_SERVICE,
  NVDEV_RLR,
  NVDEV_BETRIEB,
  NVDEV_PASSWORD
  };
#define NVDEV_MIN NVDEV_ERRORLOG
#define NVDEV_MAX NVDEV_PASSWORD

	/* Fehlermeldungen */
#define PROG_FAIL	1
#define E_NV_CHECKSUM	2

	/* Pointer auf NVRAM */

#ifndef NVWRITE
	#define NV_GLOB extern
#else
	#define NV_GLOB
#endif

NV_GLOB ushort far * far NovramChecksum_p;
NV_GLOB char far * far NovramStart_p;
NV_GLOB char far * far NV_ServData_p;
NV_GLOB char far * far NV_RLRData_p;
NV_GLOB char far * far NV_RLRDataChksum_p;
NV_GLOB char far * far NV_kalitime_fd_p;      /*  letzter Kalibrierungszeitpunkt FD  */
NV_GLOB iservbetrieb_t far * far NV_BetrData_p;
NV_GLOB char far * far NV_BetrDataChksum_p;
NV_GLOB char far * far NV_Backup_p;
NV_GLOB char far * far NV_DFR_inititalized_p; /*  0 = Initbloecke an DFR senden  */
NV_GLOB char far * far NV_permanent_remote_p; /*  0 = permanent remote allowed  */
NV_GLOB char far * far NV_bv_zoom_p;		  /*  BV-Zoomstufe bei Anlagenhochlauf */
NV_GLOB char far * far NV_PassWD_p;
NV_GLOB char far * far NV_PassWDChksum_p;
NV_GLOB char far * far NV_CanTrace_p;


/* --- Aufteilung des NVRAM ------------------------------------------------ */
/*      NOVRAM Start bei D8000    */
/* Reservierter Bereich fuer Nachladbare Tasks D8000 bis D8FFF */
/* Error     D9000  - DAFFF  */
/* Service   DB000  - DB4FF  */
/* RLR       DB500  - DB5EF  */
/* FDBS-Kali DB600  - DB605  */
/* Backup    DB680  - DB683  */
/* DFR_init  DB684  - DB687  */
/* Remote_   DB688  - DB68B  */
/* BV-Zoom   DB68C  - DB68F  */
/* PassWD    DB890  - DBA8F  */
/* Betr_Data DC000  - DC6FF  */
/* Cantrace  DC700  - DC703  */
/*    XCU  NOVRAM Ende bei DFFFF    */

#define NovramStart             (long)0xD9000
#define NovramStart_limit		(long)0x8000

#define NovramChecksum          (long)0xDAFFE
#define NovramChecksum_limit    (long)0x2       /* fuer alle Checksummen */

#define NV_ErrorData            (long)0xD9000
#define NV_ErrorData_limit		(long)0x2000
#define	NV_ErrorData_length		(long)0x1FFD
#define NV_ErrorDataChecksum    (long)0xDAFFE
#define	NOVRAM_LENGTH		0x2000
#define	NOVRAM_DATA_LENGTH	0x1FFD

#define NV_ServData             (long)0xDB000
#define NV_ServData_limit		(long)0x500

#define NV_RLRData              (long)0xDB500
#define NV_RLRData_limit		(long)0x100 /* Gesamtlänge Daten incl. Blockcheck */
#define NV_RLRDataChecksum      (long)0xDB5FE /* Zeiger auf RLR-Checksumme */
#define NV_RLR_DATA_LENGTH		(long)0xFE /*  Länge RLR-Daten für Blockcheck */

#define NV_kalitime_fd          (long)0xDB600   /* letzter Kalibrierungszeitpunkt+Warnung FD */
#define NV_kalitime_fd_limit 	(long)0x6       /* (wird nicht checksum-ueberwacht) */

#define NV_Backup               (long)0xDB680
#define NV_Backup_limit			(long)0x4

#define NV_DFR_init             (long)0xDB684   /* Zum Senden der Initbl. an DFR */
#define NV_DFR_init_limit		(long)0x4

#define NV_permanent_remote     (long)0xDB688   /* Permanent Remote Service */
#define NV_permanent_remote_limit (long)0x4

#define NV_bv_zoom              (long)0xDB68C   /* BV-Zoomstufe bei Anlagenhochlauf */
#define NV_bv_zoom_limit		(long)0x4

#define NV_PassWD               (long)0xDB890
#define NV_PassWD_limit			(long)0x200    /* Gesamtlänge Daten incl. Blockcheck */
#define NV_PassWDDataChecksum   (long)0xDBA8E /* Zeiger auf Passwd.Daten-Checksumme */
#define NV_PASSWD_DATA_LENGTH	(long)0x01FE /*  Länge Passwd.-Daten für Blockcheck */

#define NV_BetrData             (long)0xDC000
#define NV_BetrData_limit		(long)0x700    /* Gesamtlänge Daten incl. Blockcheck */
#define NV_BetrDataChecksum     (long)0xDC6FE  /* Zeiger auf Betr.Daten-Checksumme */
#define NV_BETR_DATA_LENGTH     (long)0x6FE    /*  Länge Betr.-Daten für Blockcheck */

#define NV_CanTrace             (long)0xDC700   /*  Can-Trace vor dem ausschalten aktiv Ja/nein */
#define NV_CanTrace_limit       (long)0x1



/*--------------------------------------------------/
/ Funktionsprototypen                               /
/--------------------------------------------------*/
extern int      InitNonVolatile ();
extern int      far TestChecksum (enum NonVDevice Device);
extern int      far ResetDevice (enum NonVDevice Device);
extern int		far NovramWriteChecksum (void);
extern void     far NVcpy(char  far * far dest, char  far * far source, ushort count);
extern void     far NVRAMRangeChecksum (char *Range_p, ushort RangeSize, char *RangeChksum_p);


#endif




/*] END: common definitions */
