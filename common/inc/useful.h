/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : useful.h
*
* Author       : S. Klar        ; Siemens AG ANL A451SR; (09131) 7-25 793
*
* Language     : C
*
* Description  : Diese Modul enthaelt allgemein-nuetzliche Makros &
*				 Funktionsprototypen.
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/useful.h,v 1.2 2007/02/20 15:57:00 alexander_m Exp $
*
\************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef USEFUL
#define USEFUL
/************************************************************************/
/*********************** Changes ****************************************\
*
* $Log: useful.h,v $
* Revision 1.2  2007/02/20 15:57:00  alexander_m
* Prototyp fuer screensaver_off() hinzugefuegt
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/13   1997/9/15 11:2:9   hans 
* stdlib.h included wegen abs-Funktion.
*
*    Rev /main/12   1997/9/1 11:34:54   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.10   14 Feb 1997 15:26:28   udo
 *
 * Prototypen fuer string_to_long eingebracht
 *
 *    Rev 1.9   18 Nov 1996 13:54:58   udo
 *
 * Funktionsprototypen zur Cosinus und Sinusberechnung eingefuegt.
 *
 *    Rev 1.8   07 Nov 1996 15:55:44   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.7   09 Apr 1996 14:59:44   gaby
 * Prototyp fuer m_mkdir eingefuegt.
 *
 *    Rev 1.6   10 Oct 1995 16:41:02   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.5   04 Oct 1995 16:54:20   andrea
 *
 * Prototype fuer neue Fkt. 'wert_aus_kennl_ui()' (Charm 4410)
 *
 *    Rev 1.4   26 Jun 1995 15:25:48   andrea
 *
 * Ueberarbeitung nach dem Code-Review (22./23. KW)
 *
 *    Rev 1.3   12 May 1995 09:56:54   gerhard
 * An C-Richtlinien angepaát.
 * šbertragung der Code-Review-Ergebnisse von LE auf HE.
 *
 *    Rev 1.2   20 Dec 1994 16:35:54   andrea
 *
 * Prototyp 'b_suche_von_anfang_an()' eingebracht
 *
 *    Rev 1.1   07 Oct 1994 12:33:10   udo
 *
 * Deklaration fuer lin_interpol_ui ergaenzt.
 *
 *    Rev 1.0   10 Aug 1994 10:06:40   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*--------------------------------------------------------------------- */

#include <stddef.h>
#include <stdlib.h>
/* f. XCU-spez. Datentypen wie sshort (s. lin. Interpol.) */
#include <portab.h>


/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* Subject: Cosinusberechnung                                               */
/*----------------------------------------------------------------------*/

#define GRADMASS 0
#define BOGENMASS 1
#define PI  (long) 31415


//Layh, 17.08.05: Funktion zur Wandlung eines Initfilenamens in eine Zahl */
#ifndef TCHAR
#define TCHAR char
#define _T(x)	x
#endif 
#ifndef _tcslen
#define	_tcslen strlen
#endif
long initfilename_to_long(TCHAR* szInitName);

/* Funktion zur Wandlung eines Strings in eine Zahl */
extern long far string_to_long ( char * string, long init_faktor, int laenge);

/* Funktion zur Ermittlung des Cosinus eines winkels in Grad- oder Bogenmass */
extern long far cosinus (long winkel, int grad_bog);

/* Funktion zur Ermittlung des Sinus eines winkels in Grad- oder Bogenmass */
extern long far sinus (long winkel, int grad_bog);

/*----------------------------------------------------------------------*/
/* Subject: Interpolation                                               */
/*----------------------------------------------------------------------*/

/* Lineare Interpolation f. unsigned-long-Tabellen */
extern unsigned long far lin_interpol_ul(unsigned long x, size_t xindex,
								unsigned long *xtab, unsigned long *ytab);

/* Lineare Interpolation f. signed-long-Tabellen */
extern signed long far lin_interpol_sl(signed long x, size_t xindex,
								signed long *xtab, signed long *ytab);

/* Lineare Interpolation f. sshort-Tabellen */
extern sshort far lin_interpol_si(sshort x, size_t xindex,
                                sshort *xtab, sshort *ytab);

/* Lineare Interpolation f. ushort-Tabellen */
extern ushort far lin_interpol_ui(ushort x, size_t xindex,
                                ushort *xtab, ushort *ytab);

/*-----------------------------------------------------------------------*/
/* Subject: binaere Suche */
/*-----------------------------------------------------------------------*/

extern int far b_suche(int not_found, size_t * gef_index, 	/* gefundener Index */
		const void *suchwert, const void *suchtab,
		size_t nelem, size_t elem_groesse,
        int(far *vgl_fkt)(const void far* far ,const void far* far ));


extern int far int_vgl(const void far* far zahl1,const void far* far zahl2);
extern int far long_vgl(const void far* far zahl1,const void far* far zahl2);

/*-----------------------------------------------------------------------*/
/* Subject: beliebigen Wert aus Kennlinie ermitteln                      */
/*-----------------------------------------------------------------------*/
/* f. Tabellen vom Typ slong: */
extern ushort far wert_aus_kennl_sl(slong * y_wert,
							slong x_wert,
							slong* x_tab, slong* y_tab,
							size_t tab_len,
							unsigned char lin_interpol_flag);

/* f. Tabellen vom Typ sshort: */
extern ushort far wert_aus_kennl_si(sshort * y_wert,
                            sshort x_wert,
                            sshort* x_tab, sshort* y_tab,
							size_t tab_len,
							unsigned char lin_interpol_flag);

/* f. Tabellen vom Typ ushort: */
extern ushort far wert_aus_kennl_ui(ushort * y_wert,
                            ushort x_wert,
                            ushort* x_tab, ushort* y_tab,
							size_t tab_len,
							unsigned char lin_interpol_flag);

/*-----------------------------------------------------------------------*/
/* Subject: Allgemeiner Teil der useful.cpp-Prototypen                   */
/*-----------------------------------------------------------------------*/

/* Funktion, die ein SBEDALLG schickt, um den Screensaver zu deaktivieren */
extern bool far screensaver_off(uchar group_id, bool sperre);


/* Defines fuer Funktion b_suche */
/*-------------------------------*/
/* Defines f. Param. "not_found" */
#define BEFORE 				0
#define NEXT				1

/* Defines f. Rueckgabewert */
#define GEFUNDEN			1
#define NICHT_GEFUNDEN		0
#define ANFANG				-1	/* FAll: suchwert liegt unterhalb d. Tabelle */
#define ENDE				-2  /* FALL: suchwert liegt oberhalb d. Tabelle
										(i. Speicher) */
#define B_SUCHE_NOT_OK		-3	/* Fehlerfall */

/* Defines fuer Funktion wert_aus_kennl */
/*--------------------------------------*/
/* Defines fuer Rueckgabewert*/
#define WERT_AUS_TAB_OK			1
#define WERT_AUS_TAB_NOT_OK		0

/* Defines fuer lin_interpol_flag */
#define LIN_INTERPOL			1
#define NOT_LIN_INTERPOL		0

/*-----------------------------------------------------------------------*/
/* MACROS                                                                */
/*-----------------------------------------------------------------------*/

/* Makro, das den kleineren der beiden uebergebenen Werte zurueckgibt */
#define MINIMUM(wert1,wert2)  ((wert1) < (wert2)? (wert1):(wert2))

/* Makro, das den groesseren der beiden uebergebenen Werte zurueckgibt */
#define MAXIMUM(wert1,wert2)  ((wert1) > (wert2)? (wert1):(wert2))

/* Makro, das 1. Wert auf 2. Wert nach oben hin begrenzt */
#define MAX_GRENZE(wert,grenze)		((wert) > (grenze)? (grenze):(wert))

/* Makro, das 1. Wert auf 2. Wert nach unten hin begrenzt */
#define MIN_GRENZE(wert,grenze)		((wert) < (grenze)? (grenze):(wert))

/* Makro, das den Wert quadriert */
#define QUADR(wert)					((ulong)(wert) * (ulong)(wert))

/************************************************************************/

/* Ende v. Wiedereintrittssicherung */
#endif
