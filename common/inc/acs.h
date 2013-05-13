/* Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : acs.h
*
* Author       : Kapp   ; Siemens AG RXE5; (09131) 846543
*
* Language     : C
*
* Description  : ACS-Definitionen
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/acs.h,v 1.29 2007/07/06 14:35:42 fabian Exp $
*
\************************************************************************/


/*********************** Changes ****************************************\
*
* $Log: acs.h,v $
* Revision 1.30  2009/04/14 13:17:45  Yang Zhiming
* Collimator size increases by offset after release the Pre-contact
*
* Revision 1.29  2007/07/06 14:35:42  fabian
* Erweiterung auf Ks-Interface
*
* Revision 1.28  2007/06/12 11:58:35  reinhold
* Result of merging NRF branch to MAIN
*
* Revision 1.27.2.1  2007/05/10 10:01:40  alexander_s
* - Fixed a bug in ST_STPAR to iGGPos conversion.
* - Added initialization for new SH_STPAR fields.
* - Added new RAD SOU (Stand Operation Unit) interface 0xE3.
*
* Revision 1.27  2007/02/15 12:31:03  alexander_m
* APID_TUI_DEFAULT hinzugefuegt
*
* Revision 1.26  2007/02/14 09:05:26  alexander_m
* APID_RAD_SCU_INTERFACE und APID_RAD_CCU_INTERFACE geaendert
*
* Revision 1.25  2007/01/19 12:52:15  alexander_m
* REP added
*
* Revision 1.24  2007/01/17 09:38:04  alexander_s
* Extended comments.
*
* Revision 1.23  2007/01/10 11:22:58  alexander_s
* Updated RAD interface.
*
* Revision 1.22  2006/11/15 10:16:56  michael
* PMS APID
*
* Revision 1.21  2006/10/17 08:15:24  alexander_s
* Fixed RAD APIDs.
*
* Revision 1.20  2006/08/29 15:00:26  alexander_s
* Split the single Rad4XcuInterface into GG and SM parts.
*
* Revision 1.19  2006/08/22 16:28:40  reinhold
* changed TUI define
*
* Revision 1.18  2006/08/21 12:15:57  reinhold
* Changed Apid of TUI and TUI_INTERFACE acording to the newest decision, additionally all three possible TUI units Apids where defined.
*
* Revision 1.17  2006/08/21 08:26:10  alexander_s
* Changed RAD interface application ID.
*
* Revision 1.16  2006/08/08 08:07:45  alexander_s
* Added RAD <-> XCU2 interface.
*
* Revision 1.15  2006/07/24 16:02:39  reinhold
* After test
*
* Revision 1.14  2006/07/04 20:05:41  reinhold
* 04.07.2006
*
* Revision 1.13  2006/06/09 14:17:14  michael
* bv simulation
*
* Revision 1.12  2006/05/11 13:20:00  reinhold
* First component integration with TUI
*
* Revision 1.11  2006/04/18 09:40:24  reinhold
* Tui startup with XCU works
*
* Revision 1.10  2006/03/31 09:23:40  christian_l
* ALL_GROUPS    0xFF
*
* Revision 1.9  2006/03/22 17:31:23  michael
* Set All Groups to  01 ,   just for test, if axnroot is working proper change it back to ff
*
* Revision 1.8  2006/02/13 15:03:52  christian_l
* RMOS-Changes made in QNX-Version
*
* Revision 1.7  2005/11/21 09:32:21  michael
* acs_install_fe moved to XCUSysLib
*
* Revision 1.6  2005/10/24 11:25:04  michael
* AXNROOT
*
* Revision 1.5  2005/09/15 06:55:54  michael
* timeouts auf vorgegebene werete gesetzt
*
* Revision 1.4  2005/09/09 13:05:23  michael
* new acs_recv_initialize function to attach acs_axn_rx_channel
*
* Revision 1.3  2005/08/30 10:47:39  michael
* make acs ready for axn
*
* Revision 1.2  2005/08/22 07:50:07  christian_l
* New ArcCon connection.
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/16   2004/02/16 14:00    Toni
* Define aus err_fkt.c, errmsg.c und srv_konf.h eingefügt
*
*    Rev /main/15   2004/02/09 14:00    Toni
* AP_ID define für "GEN_PULT_AP_ID" eingefügt
*
*    Rev /main/14   1999/3/16 12:24:1   achim 
* Repet-Timeout erniedrigen
*
*    Rev /main/13   1999/3/8 15:24:42   achim
* User- und Repet-Timeout erhoehen ( Charm 8951 ).
*
*    Rev /main/12   1999/3/3 14:11:51   achim
* ACS-User-Timeout auf 100 erhoeht.
*
*    Rev /main/11   1998/1/15 15:4:58   hans
* Wenn sich eine Task mit acs_install_fe angemeldet hat, werden ankommende

* Telegramme mit dieser AP_ID direkt an die Task gesendet.
*
*    Rev /main/10   1997/9/1 11:38:58   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.8   25 Mar 1997 15:09:54   gaby
 * Aenderungen fuer FD-Detektor eingebracht.
 *
 *    Rev 1.7   07 Nov 1996 15:54:16   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.6   12 Jul 1996 17:11:30   michael
 *
 * Erweiterung um Unit Infrarotfernbedienung
 *
 *    Rev 1.5   15 Jan 1996 15:44:30   hans
 *
 * AP_ID fuer Printer eingefuegt. Makro IPC_TO_ACS_HDR angepasst, sodass
 * bei Telegrammen, die von der PRinter-Task kommen die AP-ID des Printers
 * eingetragen wird.
 *
 *    Rev 1.4   10 Oct 1995 16:32:50   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.3   27 Apr 1995 18:13:24   udo
 * extern ACS_memcpy eingefuegt
 *
 *    Rev 1.2   21 Apr 1995 13:43:44   udo
 * Codingstandards eingebaut, trace-Funktionalitaet rausgenommen,
 * Aenderungen von Leda nachgezogen
 *
 *    Rev 1.1   17 Aug 1994 08:38:06   susi
 * Adresse des DPRAMS von DD000 auf D0000 geaendert.
 *
 *    Rev 1.0   10 Aug 1994 09:20:44   susi
 * Initial revision.
*
*
*     Date    Name       Description
*
* 18.12.92    Kapp       Macro IPC_TO_ACS_HEADER eingefuegt
* 24.03.93    Janschitz  define XCU_AP_ID eingefuegt
*                        ( fuer ACS_SEND und  ACS_RECV )
*
\************************************************************************/


#ifndef ACS_SND_C
  #define GLOB_TYPE extern
#else
  #define GLOB_TYPE
#endif

//#include <AxnClientRX.h>
/*----------------------------------------------------------------------*/
/* DECLARATION: external funktions                                      */
/*----------------------------------------------------------------------*/

//extern void ACS_memcpy (void *, const void *, ushort );
//extern AxnClientRecv_t* acs_install_fe (uchar task_id, uchar apid);
extern bool acs_recv_initialize(void);

#ifndef acsendis
 // extern void far enable_acs (void);
  extern void disable_acs (void);
#endif

extern void XSEF (void);

/*] END: common definitions */



/*----------------------------------------------------------------------*/
/*              Struktur Definitionen fuer das ACS-Task                 */
/*----------------------------------------------------------------------*/

#if 0 // moved to XCUSysLib

#define FE_ID_MAX 255

GLOB_TYPE struct
		{
			uchar apid[FE_ID_MAX];
		} fe_taskid_apid;


GLOB_TYPE struct
		{
			uchar taskid[FE_ID_MAX];
		} fe_apid_taskid;

#endif
/*----------------------------------------------------------------------*/
/*              Struktur Type Definitionen fuer das ACS DPR             */
/*----------------------------------------------------------------------*/

#define XCU_AP_ID				0xF0	/* ACS-Knotenpunkt-ID der XCU */
#define PRINTER_AP_ID			0xE6	/* ACS-Knotenpunkt-ID des Printers */
#define IRRC_AP_ID				0x76	/* ACS-Knotenpunkt-ID der IR-Fernbedienung */
#define GEN_PULT_AP_ID			0x40	/* ACS-Knotenpunkt-ID des Generatorbedienpultes */

#define APID_DFR				0xF3
#define APID_SE					0x50
#define APID_BV                 0x51
#define APID_TUI				0x5A
#define APID_TUI2				0x5B
#define APID_TUI3				0x5C
#define APID_TUI_INTERF			0x5D
#define APID_TUI_DEFAULT        0x5E	
#define APID_RAD_SOU_INTERFACE  0xE3    /// \brief RAD stand operating unit interface APID.
#define APID_RAD_SCU_INTERFACE  0xE2    /// \brief RAD SCU interface APID.
#define APID_RAD_SCU            0x11    /// \brief RAD SCU APID.
#define APID_RAD_CCU_INTERFACE  0xE1    /// \brief RAD CCU interface APID.
#define APID_RAD_KS_INTERFACE   0xE4    /// \brief RAD KS interface APID.
#define APID_RAD_CCU            0x15    /// \brief RAD CCU_A APID.
#define APID_SYC                0x71    /// \brief SYC APID.
#define APID_Polystar_Bed		0x22
#define APID_Sireskop_SX_Bed	0x24
#define APID_GG                 0x20
#define APID_PMS                0x61  // PMS service
#define APID_SCU                0x80
#define APID_CCU                0x90
#define APID_REP                0x60    /// \brief REP Errorinterface
#define APID_SM                 0x21  //for IconosM development,04/14, 2009, Yang Zhiming

/*----------------------------------------------------------------------*/
/*      Defines fuer ACS DPR                                            */
/*----------------------------------------------------------------------*/
#define ANY_VALUE     (uchar) 0x00	/* Irgendein Wert */

                                   /* Reset Wert fuer ACS DPR Semaphore      */
#define ACS_DPR_EMPTY (uchar)0x00

                                   /* Set Wert fuer ACS DPR Semaphore um     */
                                   /* anzuzeigen, dass vom ACS Controller    */
                                   /* ein Quittungsshorterrupt generiert werden*/
                                   /* soll                                   */
#define ACS_DPR_FILLED (uchar)0x01

//definition for W23 project
#define W23_GENERATOR_APID      0x50


/* Adresse des ACS DPR */
/* Ist an den ACS-Controller anzupassen!!!*/
#define ACS_DPR_ADR (long)0xD0000    /* fuer XCS Adapterplatine  */
#define ACS_DPR_LIMIT 0x800

/*----------------------------------------------------------------------*/
/*      Defines fuer ACS Timeoutueberwachung                            */
/*----------------------------------------------------------------------*/

                                   /* Timeoutwerte fuer ACS-Controller im    */
                                   /* 10 msec Raster                         */

                                   /* Zeit ohne Dummy-Objekt: 1 sec          */
#define ACS_BASE_LOAD_PERIOD (unsigned char)100

                                   /* Zeit zum Lesen des Empfangspuffers ohne*/
                                   /* Turn off: 500 msec                     */
#define ACS_USER_TIMEOUT     (unsigned char)50

                                   /* Zeit fuer Wiederholinterrupt beim Lesen*/
                                   /* des Empfangspuffers: 30 msec           */
#define ACS_REPET_TIMEOUT    (unsigned char)3


/*----------------------------------------------------------------------*/
/*      Defines fuer ACS Telegrammodis                                  */
/*----------------------------------------------------------------------*/
#define FUNCTIONAL_MODE  0x00
#define DIREKT_MODE      0x01
#define MESSAGE_MODE     0x02
#define MONITOR_MODE     0x03
#define SERVICE_MODE     0x04


/*----------------------------------------------------------------------*/
/*      Defines fuer ACS Telegramm-Ids                                  */
/*----------------------------------------------------------------------*/

/* Functional Mode */
#define TID_ILE  0x00	/* Objekt-ID fuer Anmeldung und Inlistenangabe bei Controller */
#define TID_ILR  0x01	/* Objekt-ID fuer Inlistenreduction */

/* Message Mode */
#define OBJ_INIT      0x00
#define OBJ_ERROR     0x01
#define OBJ_TURN_ON   0x02
#define OBJ_TURN_OFF  0x03
#define OBJ_DUMMY     0x04

/* ACS Errormessages */
#define NO_TARGET     0x00

/* Group ID */
#define ALL_GROUPS    0xFF

/*----------------------------------------------------------------------*/
/*      Macrodefinitions                                                */
/*----------------------------------------------------------------------*/

/* Macro zur Umwandlung des IPC-Headers in den ACS-Header */
#define IPC_TO_ACS_HEADER(IPC_HDR_p,ACS_HDR)\
ACS_HDR.length=IPC_HDR_p->length+TEL_HDR_LEN;\
ACS_HDR.mode=IPC_HDR_p->mode;\
ACS_HDR.fktkreis=(IPC_HDR_p->group_id>0)&&(IPC_HDR_p->group_id<=8)?\
1<<(IPC_HDR_p->group_id-1):IPC_HDR_p->group_id;\
ACS_HDR.target=IPC_HDR_p->target;\
ACS_HDR.sender = acs_TaskID2APID(IPC_HDR_p->s_pid) != 0?\
acs_TaskID2APID(IPC_HDR_p->s_pid) : XCU_AP_ID;\
ACS_HDR.telid=IPC_HDR_p->obj_id;

