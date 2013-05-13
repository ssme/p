/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product		: XCU XRAY Communication Unit
*
* Name			: bptabs.h
*
* Author		: S. Klar    ; Siemens AG ANL A451SR; (09131) 7-25793
*
* Language		: C
*
* Description	: Strukturtypen- & Makrodefinitionen fuer Belichtungspunkt-
*				  tabellen (in bptabs.c)
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/bptabs.h,v 1.1 2005/08/18 15:02:00 christian_l Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: bptabs.h,v $
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/9   1997/9/15 11:3:33   hans 
* get_ms und get_ma far deklariert, weil se ins ovl gekommen ist.
*
*    Rev /main/8   1997/9/1 11:38:24   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
*
*    Rev /main/7   1997/8/14 10:57:2   susi
* Die int_iDLDaten melden die mA jetzt in 0.01 mA statt in 0.1 mA, um hoehere
* Praezesion bei der WW-Rechnung zu erzielen. Diese Praezesion wird in der Fkt.
* get_ma_bp() erreicht, indem der Parameter mA ebenfalls in 0.01mA statt in 0.1 mA
* angegeben wird.
* (Charm 8360)
* -> Parameter mA bei get_ma_bp() von ushort auf ulong in Prototyp geaendert
*
*    Rev /main/7   1997/8/14 10:21:13   susi
* Die int_iDLDaten melden die mA jetzt in 0.01 mA statt in 0.1 mA, um hoehere
* Praezesion bei der WW-Rechnung zu erzielen. Diese Praezesion wird in der Fkt.
* get_ma_bp() erreicht, indem der Parameter mA ebenfalls in 0.01mA statt in 0.1 mA
* angegeben wird.
* (Charm 8360)
* -> Prototyp angepasst (ulong statt ushort)
 *
 *    Rev 1.5   07 Nov 1996 15:55:22   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.4   10 Oct 1995 16:34:18   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.3   26 Jun 1995 15:25:10   andrea
 *
 * Ueberarbeitung nach dem Code-Review (22./23. KW)
 *
 *    Rev 1.2   13 Dec 1994 11:47:26   andrea
 *
 * Prototypen und Fehlernr. d. Files 'konfdat\bp_fkt.c' eingebracht
 *
 *    Rev 1.1   07 Oct 1994 12:22:40   susi
 * Belichtungspunkttabellen auf 1/4 PB umgestellt.
 *
 *    Rev 1.0   10 Aug 1994 09:32:24   susi
 * Initial revision.
*
\************************************************************************/

/* Gegen Wiedereintritt sichern */
#ifndef BPTABS
#define BPTABS
/************************************************************************/


/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/

#include <portab.h>

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

/* Prototypen fuer Umrechnung pysik. Aufngroesse <-> BP	(->se_adbp.c)	*/
/*----------------------------------------------------------------------*/
extern ushort far get_kv_bp(ushort *kv_bp,ushort kv);
extern ushort far get_ma_bp(ushort *ma_bp,ulong ma);
extern ushort far get_mas_bp(ushort *mas_bp,ulong mas);
extern ushort far get_ms_bp(ushort *ms_bp,ulong ms);
extern ushort far get_dosis_bp(sshort *dosis_bp,ushort dosis);
extern ushort far get_dosisl_bp(sshort *dosisl_bp,ushort dosisl);

extern ushort far get_kv(ushort *kv,ushort kv_bp);
extern ushort far get_ma(ushort *ma,ushort ma_bp);
extern ushort far get_mas(ulong* mas,ushort mas_bp);
extern ushort far get_ms(ulong* ms,ushort ms_bp);
extern ushort far get_dosis(ushort *dosis,sshort dosis_bp);


/*----------------------------------------------------------------------*/
/* DECLARATION: internal functions                                      */
/*----------------------------------------------------------------------*/

/*] END: common definitions */


/* Groesse und Aufbau der Belichtungspunkttabellen: */
/*--------------------------------------------------*/
#define	KV_BP_TAB_LEN		105
#define	LIN_BP_TAB_LEN		281
#define	BP_TAB_AUFBAU		4	/* Kehrwert	f. Schrittweite	i. Aufbau d. BP-Tabelle	*/
								/* alle	BP-Tab sind	in 1/4 BP aufgebaut
								(Kehrwert zu 1/4 =>	4 !) */



/* Offsetwerte fuer die WW- und APS-Berechnung in 1/4 BP */
/* + zugehoerige Index des Null-Bezugswertes zum Offsetwert */
/* in Wertigkeit der Tab */

/*--------------------------------------------------------------------*/
/* !!!  Bezugspunkte duerfen nicht ohne weiteres geaendert werden !!! */
/*--------------------------------------------------------------------*/

/* 40 kV   	-> 30 BP */
/*-------------------*/
#define KV_BP_OFFSET		 120		/* (30 BP *4) */
#define KV_BP_BEZUGSPKT_I	   0		/* Index in KV-BP-Tab zu Wert 400 */
										/* (40 kV mit Wertigk. 1/10 = 400) */

/* 0,1 mA  	->  0 BP */
/*-------------------*/
#define MA_BP_OFFSET	 	   0		/* (0 BP *4) */
#define MA_BP_BEZUGSPKT_I	  40		/* Index in lin. BP-Tab zu Wert 10 */
										/* (0,1 mA mit Wertigk. 1/100 = 10) */

/* 1 ms  	->  0 BP */
/*-------------------*/
#define MS_BP_OFFSET	 	    0		/* (0 BP *4) */
#define MS_BP_BEZUGSPKT_I	   80		/* Index in lin. BP-Tab zu Wert 100 */
										/* (1 ms mit Wertigk. 1/100 = 100) */

/* 0,1 mAs	-> 30 BP */
/*-------------------*/
#define MAS_BP_OFFSET		  120		/* (30 BP *4) */
#define MAS_BP_BEZUGSPKT_I	   40		/* Index in lin. BP-Tab zu Wert 10 */
										/* (0,1 mAs mit Wertigk. 1/100 = 10) */

/* 10 uR 	-> 40 BP */
/*-------------------*/
#define DOSIS_BP_OFFSET		  160		/* (40 BP *4) */
#define DOSIS_BP_BEZUGSPKT_I  120		/* Index in lin. BP-Tab zu Wert 1000 */
										/* (10 uR mit Wertigk. 1/100 = 1000) */

/* 10 uR/s 	-> 10 BP */
/*-------------------*/
#define DOSISL_BP_OFFSET	   40		/* (10 BP *4) */
#define DOSISL_BP_BEZUGSPKT_I 120		/* Index in lin. BP-Tab zu Wert 1000 */
										/* (10 uR/s mit Wertigk. 1/100 = 1000) */


/* 0,1 Abstandsfaktor -> 0 BP */		/* Abstand: FFA bzw. BVFA */
/*----------------------------*/
										/* Der Abstands-Bezugspunkt darf */
										/* nicht 0 sein */
#define ABSTAND_MM_BEZUGSPKT	 1000	/* [mm] ; 100 cm := 0 BP */
#define ABSTAND_FAK_BP_OFFSET		0	/*  100 cm := 0 BP */
#define ABSTAND_BP_BEZUGSPKT_I	   40	/* Index in lin. BP-Tab zu Wert 10 */
										/* (0,1 mit Wertigk. 1/100 = 10) */
										/* (Wertigkeit von Abstandsfaktor ist */
										/* auf 0,1 festgelegt, um Umrech- */
										/* nungsbereich AbstandsFaktor-> BP in */
										/* den Bereich ab 10.. zu legen, um */
										/* eine groessere Genauigkeit zu */
										/* erzielen als z.B. im Bereich */
										/* von 1..10) */


/* Wasserwertoffset: */
/*-------------------*/

/* Bei der WW-Berechnung werden oben aufgefuehrte Offsetwerte mitein- */
/* berechnet, damit der WW bei der APS- Berechnung nicht neg. wird. */
/* Vor Ermittlung der KV aus der Uebernahmekennlinie muessen daher */
/* diese Offsetwerte wieder herausgerechnet werden. */

#define WW_OFFSET	(KV_BP_OFFSET + MA_BP_OFFSET - DOSISL_BP_OFFSET )


/* Umrechnungsfaktor uR -> nGy */
/*-----------------------------*/

#define UR_TO_NGY_FAKTOR	87			/* [1/10] */
										/* nGy = 8.7 * uR */


/* Bezugspkt. bzgl. Dosiswert bei Folieneingangsempfindlichkeit: */
/*---------------------------------------------------------------*/
/* Steckerstellung/Eingangsempfindlichkeit von 0 BP = 15,8 uR */
#define FOLIENEMPF_BP_BEZUGSPKT_I  128	/* Index in lin. BP-Tab zu Wert 1585 */
										/* (15,8 uR mit Wertigk. 1/100 = 1580) */

/* Angleich kV-BP, mA-BP und ms-BP fuer Regelkennlinie in 1/4 BP */
/*---------------------------------------------------------------*/
/* BP fuer Regelkennlinie sind ohne Offset */
/* => Angleich auf 40 kV = 0 BP */
/*				  0,1 mA = 0 BP	*/
/*				    1 ms = 0 BP	*/

										/* Bezuege der Regelkennlinien: */
#define	REGKL_KV_BP_ANGLEICH	0		/* 40 kV = 0 BP */
#define	REGKL_MA_BP_ANGLEICH	(-40)	/* 1 mA = 0 BP (Faktor 10 = 10 BP) */
#define	REGKL_MS_BP_ANGLEICH	0		/* 1 ms = 0 BP */


/* Strukturen der Belichtungspunkttabellen: */
/*------------------------------------------*/

typedef	struct kv_bp_tab_tag
			{
            ushort    laenge;
            ushort    kv[KV_BP_TAB_LEN];
			}__attribute__ ((packed))
			kv_bp_tab_t;


typedef	struct linear_bp_tab_tag
			{
            ushort    laenge;
			ulong	linear_wert[LIN_BP_TAB_LEN];
			}__attribute__ ((packed))
			linear_bp_tab_t;


/* Externreferenzen auf BP-Tabellen: */
/*-----------------------------------*/

/* Definition & Initializierung der BP-Tabellen in bptabs.c */
extern const linear_bp_tab_t far linear_bp_tab;
extern const kv_bp_tab_t far kv_bp_tab;


/*************************************
** Vorl„ufige Fehlernummern der SE  **
*************************************/

#define E_BP_FKT_PARAM_WRONG    (ushort) (SE_E_MIN + E_FKTPARAM), WARNUNG, 1
#define E_BP_BSUCHE             (ushort) (SE_E_MIN + 26), WARNUNG, 1

/************************************************************************/
/* Ende v. Wiedereintrittssicherung     */
#endif


