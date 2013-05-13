/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product      : XCU XRAY Communication Unit
*
* Name         : taskmbid.h
*
* Author       : H.Janschitz      ; Siemens AG ANL A 426 PR; (09131) 7-25627
*
* Language     : C
*
* Description  : Deklaration aller RMOS Resourcen :
*                Task_ID's
*                Mailbox_ID's
*                Semaphore_ID's
*                Eventflag_ID's
*                Memorypool_ID's
*
*
* Achtung :  Wenn neue ID's hinzugefuegt werden, muss diese Aenderung im File
*            SW_CONF.asm auch nachgezogen werden.
*
* PVCS-Header   : $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/taskmbid.h,v 1.34 2007/07/06 14:35:42 fabian Exp $
*
\************************************************************************/
/* Gegen Wiedereintritt sichern */
#ifndef TASKMBID
#define TASKMBID
/************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: taskmbid.h,v $
* Revision 1.34  2008/03/10 11:58:35  Yang Zhiming
* Add some declaration for Screensaver
*
* Revision 1.34  2007/07/06 14:35:42  fabian
* Erweiterung auf Ks-Interface
* 
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/
//#include <svc.h>	//09.08.05 Layh
//#include <portab.h>

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/
extern void*  startup(void*);
extern void*  acs_recv(void*);
extern void*  acs_send(void*);
extern void*  tech_fkt(void*);
extern void*  disk_t(void*);
extern void*  dld_tsk(void*);
extern void*  serv_quit_t(void*);
extern void*  srv_tsk(void*);
extern void*  alarm_tsk(void*);
extern void*  bvfs_t(void*);
extern void*  err_t(void*);
extern void*  err_rd_t(void*); 
extern void*  testtsk(void*);
extern void*  trac_evt_t(void*);
extern void*  trac_t(void*); 

//added function for W23 project
extern void* w23GenInterface_thread(void*);
extern void* w23CheckTask_thread(void*);

/*----------------------------------------------------------------------*/
/* DECLARATION: external data                                           */
/*----------------------------------------------------------------------*/
/*] END: common definitions */



/*----------------------------------------------------------------------*/
/* STACK definitions                                                      */
/*----------------------------------------------------------------------*/

/*----------------------------------------------------------------------*/
/* Task_ID definitions                                                  */
/*----------------------------------------------------------------------*/

#define STARTING_TASK_ID 8

enum task_id {
          STARTUP_T = STARTING_TASK_ID,                /* Achtung Reihenfolge mu?mit der in der main() in init.cpp uebereinstimmen!!!!! */
          ACS_RECV_T,
          ACS_SEND_T,	
          TECH_FKT_T,
          DISK_T,
          SERV_QUIT_T,
          SERVICE_T_ID,
          ALARM_T_ID,
          ERR_T_ID,
          ERR_RD_T_ID,           
          TESTTSK_T,
          TRAC_EVT_T,
          TRAC_T,
          SE_T_ID,

          DOWNLOAD_RECV_ID,
          DOWNLOAD_SEND_ID,
          W23_CHECK_TSK_ID,
          W23_GENERATOR_TSK_ID,
          W23_AWS_TASK_ID,
          W23_ACQ_TSK_ID,
          W23_IOCONTROL_TSK_ID,
          W23_MOTIONCONTROL_TSK_ID,
          W23_WEB_TASK_ID,
	      NUM_TASKS       /* Anzahl der Tasks , die im Hochlauf gestartet werden */
	      };



#define PRN_TSK 0 
#define IRRC_TSK 0
#define IRRC_COM_TSK 0
#define FD1_TSK 0
#define FD2_TSK 0
#define FD_S_TSK 0
#define FD_R1_TSK 0
#define FD_R2_TSK 0
#define FDBS_TSK 0
#define CAN_TRACE_TSK 0




#define NUM_BOOT_TASKS  SERVICE_T_ID
#define NUM_APPL_TASKS  NUM_TASKS - NUM_BOOT_TASKS

#define FIRST_XCU_TASK_ID XCU_INIT_T_ID
#define LAST_XCU_TASK_ID  NUM_TASKS-1



/*----------------------------------------------------------------------*/
/* Mailbox definitions                                                  */
/*----------------------------------------------------------------------*/

enum mailbox_id {
	      MBX_ID_ACS_SEND,
	      CAN_RECV_MBX,
	      MBX_ID_USR_SEN1,
	      MBX_ID_TECH_FKT,
	      IVT_MBX     ,
	      ERR_MBX     ,
	      ERR_RD_MBX     ,
	      SERVICE_MBX    ,
	      SYSW_MBX    ,
	      ALARM_MBX   ,
	      TESTTSK_MBX ,
	      RLR_MBX,
	      SERV_QUIT_MBX,
	      DFR_MBX,
		  DISK_MBX,
	      TRAC_MBX     ,
		  DOWNLOAD_RECV_MBX,
		  W23_CHECK_MBX,
		  W23_GENERATOR_MBX,
          W23_AWS_MAILBOX_ID,
		  W23_ACQ_MBX,
	      NUM_MBX           /* Anzahl der Mailboxes muss immer am Schluss stehen */
	     };



/*----------------------------------------------------------------------*/
/* Pool_ID definitions                                                  */
/*----------------------------------------------------------------------*/
#define	     IPC_POOL_ID (unsigned int) -1	/* Heap-Pool (-1)*/

/*----------------------------------------------------------------------*/
/* Eventflag definitions                                                  */
/*----------------------------------------------------------------------*/
/************************************************************************/
/* Masken fuer CAN EFG                                                  */
/************************************************************************/
#define CAN_INTERRUPT   	0x0001
#define CAN_TRANSMIT_READY  0x0002
#define CAN_MBX_RECV_FLAG   0x0080      /* Adresse DD800 */
#define CAN_MBX_RECV2_FLAG  0x0040      /* Adresse C8000 */
#define CAN_TRACE_LOGGED_ON 0x4000
#define CAN_RECV_TRACE      0x8000

/************************************************************************/
/* Masken fuer TRAC_EVT_GR                                              */
/************************************************************************/

#define TRAC_ON			0x0001
#define TRAC_STORE_MDX 	0x0002
#define TRAC_STORE_IDX 	0x0004
#define TRAC_STORE_TRC 	0x0008
#define TRAC_STORE		0x000E
#define TRAC_AKTIV 		0x0010

/******************************************\
*                                          *
* Makros fuer Eventflaggruppe efg_acs_sync *
*                                          *
\******************************************/

enum efg_acs_sync_flags {
	       s_flag = 0x0001,
	       r_flag = 0x0002
	       };

extern unsigned char XGRP;
extern unsigned int  XFLAGS;

/***********************************************\
*                                               *
*  Makros fuer Eventflaggruppe TECH_FKT_EVT_GR  *
*                                               *
\***********************************************/

 #define FE_HOCHL       0x0001
 #define TASK_HOCHL     0x0002
 #define FLASH_OK       0x0004
 #define DLD_AKTIV      0x0008
 #define SPC_GESP       0x0010
 #define POWER_FAIL     0x0020
 #define SPC_CONNECT    0x0040
 #define INITIALIZED    0x0080
 //#define NOTSTROM_FLAG  0x0100 wird nicht mehr benЖtigt
 #define NOTSTROM_FLAG  0x0100 //wird nicht mehr benЖtigt //for IconosM development,10/03/2008,Yang Zhi Ming add
 #define X_RAY_DISABLE  0x0200
 #define POWERDOWN_FLAG 0x0400
 #define SYSTEM_OK		0x0800
 #define POWER_FAIL_ERR 0x1000
 #define POWER_FAIL_REQ 0x2000
 #define START_FE       0x4000

/************************************************************************/
/* Masken fuer Event-Flaggruppen DL_EVT_GR_1,DL_EVT_GR_2                */
/************************************************************************/

/* Flagmasken f?r DL_EVT_GR_1 */
#define SE_DL_MASK              0x0001
#define GG_DL_MASK              0x0002
#define BVFS_DL_MASK            0x0004
#define KS_DL_MASK              0x0008
#define SM_DL_MASK              0x0010
#define DFR_DL_MASK				0x0020
#define DL_FREI_GEN             0x0040
#define SW_DL_MASK              0x0080
#define DL_FREI_UHR             0x0100
#define DL_XRAY_DIS				0x0200
#define DL_AUFN_FREI    		0x0400
#define DL_FREI_AUFN    		0x0400
#define DL_EIN                  0x0800
#define DL_FREI_ERR             0x1000
#define DL_FREI_DLP				0x2000
#define S_SCHUETZ               0x4000
#define DL_STRAHL_EIN   		0x8000
#define DL_FREIGABE             0x3FFF

/* Flagmasken f?r DL_EVT_GR_2 */
#define DL_GESP_GEN             0x0040
#define DL_GESP_UHR             0x0100
#define DL_AUS                  0x0800
#define DL_GESP_ERR             0x1000
#define DL_STRAHL_AUS   		0x8000
#define DL_GESP                 0x3FFF

/************************************************************************/
/* Masken fuer Event-Flaggruppen AFN_EVT_GR_1,AFN_EVT_GR_2,AFN_EVT_GR_3,*/
/*                              AFN_EVT_GR_4,AFN_EVT_GR_5               */
/************************************************************************/

/* Flagmasken f?r AFN_EVT_GR_1 */
#define ERR_AUFN_FREI_MASK      0x0001
#define SW_AUFN_FREIG_MASK      0x0002
#define AUFN_FREI_SYS           0x0002
#define SE_AUFN_FREIG_MASK      0x0004
#define KS_AUFN_FREIG_MASK      0x0008
#define SM_AUFN_FREIG_MASK      0x0010
#define GG_AUFN_FREIG_MASK      0x0020
#define DFR_AUFN_FREIG_MASK		0x0040
#define ORG_AUFN_FREIG_MASK		0x0080
#define FDBS_AUFN_FREIG_MASK	0x0100
#define FS_AUFN_FREIG_MASK		0x0200
#define VK_FLANKE               0x2000
#define AUFN_VK_EIN             0x4000
#define WW_NOT_OK               0x8000
#define AUFN_PRUEFEN_RES        0x03FF
#define AUFN_PRUEFEN            0x02FF

/* Flagmasken f?r AFN_EVT_GR_2 */
#define SE_AUFN_VORB_MASK       0x0001
#define KS_AUFN_VORB_MASK       0x0002
#define SM_AUFN_VORB_MASK       0x0004
#define GG_AUFN_VORB_MASK       0x0008
#define DFR_AUFN_VORB_MASK		0x0010
#define FDBS_AUFN_VORB_MASK     0x0020
#define ERR_AUFN_VORB_MASK      0x0040
#define VORB_VK_AUS             0x4000
#define AUFN_VORB               0x005F

/* Flagmasken f?r AFN_EVT_GR_3 */
#define SE_STR_VORB_MASK        0x0001
#define KS_STR_VORB_MASK        0x0002
#define SM_STR_VORB_MASK        0x0004
#define GG_STR_VORB_MASK        0x0008
#define DFR_STR_VORB_MASK		0x0010
#define FDBS_STR_VORB_MASK   	0x0020
#define ERR_STR_VORB_MASK		0x0040
#define SE_STRAHL_EIN           0x0080
#define STR_HK_AUS      	    0x2000
#define VK_AUS                  0x4000
#define AUFN_HK_EIN             0x8000
#define HK_VK                   0xC000
#define STRAHL_VORB             0x005F

/* Flagmasken f?r AFN_EVT_GR_4 */
#define SE_STR_SPERR_MASK       0x0001
#define KS_STR_SPERR_MASK       0x0002
#define SM_STR_SPERR_MASK       0x0004
#define GG_STR_SPERR_MASK       0x0008
#define DFR_STR_SPERR_MASK		0x0010
#define SYSW_STR_SPERR_MASK     0x0020
#define ERR_STR_SPERR_MASK      0x0040
#define DFR_AUFN_ENDE		    0x0080
#define SE_STRAHL_AUS           0x0100
#define FDBS_STR_SPERR_MASK   	0x0200
#define AUFN_VK_AUS             0x4000
#define AUFN_HK_AUS             0x8000
#define STRAHL_ENDE             0x83FF
#define STRAHL_ABBR             0x00FF

/* Flagmasken f?r AFN_EVT_GR_5 */
#define SE_SERIE_MASK           0x0001
#define KS_SERIE_MASK           0x0002
#define SM_SERIE_MASK           0x0004
#define GG_SERIE_MASK           0x0008
#define DFR_SERIE_MASK			0x0010
#define FDBS_SERIE_MASK         0x0020
#define KS_SERIE_VOLL           0x0040
#define SERIE_VK_AUS            0x4000
#define SERIE_AKTIV             0x8000
#define SERIE_VORB              0x001F

/************************************************************************/
/* Masken fuer Event-Flaggruppe SERV_QUIT_EVT_GR                        */
/************************************************************************/

/* Flagmasken fuer SERV_QUIT_EVT_GR */
#define SERV_QUIT_MASK              0x0001
#define INT_IINIT_QUIT_MASK			0x0002

/************************************************************************/
/* Masken fuer Event-Flaggruppe IRRC_EVT_GR                             */
/************************************************************************/

/* Flagmasken fuer IRRC_EVT_GR */
#define IRRC_START_MASK              0x0001

/************************************************************************/
/* Masken fuer Event-Flaggruppe FD_EVT_GR                             */
/************************************************************************/

/* Flagmasken fuer FD_TASK */
#define FD_R1_START_MASK             0x0001
#define FD_R2_START_MASK             0x0002

/************************************************************************/
/* Masken fuer Event-Flaggruppe SRV_EVT_GR                             */
/************************************************************************/

/* Flagmasken fuer SRV_TASK */
#define SRV_SPC_KONFIG				0x0001

/************************************************************************/
/* Masken fuer Event-Flaggruppe ERRLOG_EVT_GR                             */
/************************************************************************/

/* Flagmasken fuer SRV_TASK */
#define ERRLOG_QUIT_RECEIVED              0x0001

/************************************************************************/
/* Event-Flaggruppen					                                */
/************************************************************************/

 enum evt_flag_group
	{
		INTERN,              /* Task-Interne Eventflaggruppe */
        CAN_EFG,             /* CAN Eventflaggruppe  !!! muss 1 bleiben!!!*/
        efg_acs_sync,        /* ACS Eventflaggruppe */
		TECH_FKT_EVT_GR,    /* Fuer Technische Funktionen */
		DL_EVT_GR_1,    	/* Evt-Flaggruppe 3 fuer Durchleuchtung */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Dl freigeben (SE )
	 ??????????????юд 0002: Dl freigeben ( GG )
	 ?????????????юд?0004: Dl freigeben ( BVFS )
	 ????????????юддд 0008: Dl freigeben ( KS )
	 ???????????юддд?0010: Dl freigeben ( SM )
	 ??????????юддддд 0020: Dl freigeben ( DFR )
	 ?????????юддддд?0040: Dl freigeben ( Generator )
	 ????????юддддддд 0080: Dl freigeben (Sys.-Amwahl)
	 ???????юддддддд?0100: Dl-Uhr: Dl frei
	 ??????юддддддддд 0200: Dl freigeben ( Aufnahme )
	 ?????юддддддддд?0400: Dl ein ( sBedAusl )
	 ????юддддддддддд 0800: Dl freigeben ( Error-Task )
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?4000: Sicherheitssch?tz ein ( iStatus )
	 юддддддддддддддд 8000: Strahlung ein ( iStrahlgDl )
																	*/

		DL_EVT_GR_2,    /* Evt-Flaggruppe 4 fuer Durchleuchtung */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Dl sperren ( SE )
	 ??????????????юд 0002: Dl sperren ( GG )
	 ?????????????юд?0004: Dl sperren ( BVFS )
	 ????????????юддд 0008: Dl sperren ( KS )
	 ???????????юддд?0010: Dl sperren ( SM )
	 ??????????юддддд 0020: Dl sperren ( DFR )
	 ?????????юддддд?0040: Dl sperren ( Generator )
	 ????????юддддддд 0080: Dl sperren (Sys.-Amwahl)
	 ???????юддддддд?0100: Dl-Uhr: Dl gesperrt
	 ??????юддддддддд 0200: Dl sperren ( Aufnahme )
	 ?????юддддддддд?0400: Dl aus ( sBedAusl )
	 ????юддддддддддд 0800: Dl sperren ( Error-Task )
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?
	 юддддддддддддддд 8000: Strahlung aus ( iStrahlgDl )
																	*/

		AFN_EVT_GR_1,   /* Evt-Flaggruppe 5 fuer Aufnahmebereitschaft pruefen */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Aufn-Freigabe ok ( Error )
	 ??????????????юд 0002: Aufn-Freigabe ok ( Sys.-Anwahl )
	 ?????????????юд?0004: Aufn_Freigabe ok ( SE )
	 ????????????юддд 0008: Aufn_Freigabe ok ( KS )
	 ???????????юддд?0010: Aufn_Freigabe ok ( SM )
	 ??????????юддддд 0020: Aufn_Freigabe ok ( GG )
	 ?????????юддддд?0040: Aufn_Freigabe ok ( DFR )
	 ????????юддддддд 0080: Aufn_Freigabe ok ( BVFS )
	 ??????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд 2000: Vk-Flanke
	 ?юддддддддддддд?4000: Vorkontakt ein
     юддддддддддддддд 8000: Wasserwert noch nicht berechnet
																	*/

		AFN_EVT_GR_2,   /* Evt-Flaggruppe 6 fuer Aufnahme-Vorbereitung */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Afn-Vorbereitet ( SE )
	 ??????????????юд 0002: Afn-Vorbereitet ( KS )
	 ?????????????юд?0004: Afn-Vorbereitet ( SM )
	 ????????????юддд 0008: Afn-Vorbereitet ( GG )
	 ???????????юддд?0010: Afn-Vorbereitet ( DFR )
	 ??????????юддддд
	 ?????????юддддд?
	 ????????юддддддд
	 ???????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?4000: Vorb-VK-aus
	 юддддддддддддддд
																	*/

		AFN_EVT_GR_3,   /* Evt-Flaggruppe 7 fuer Aufnahme: Str-Vorbereitung */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Str-Vorbereitet ( SE )
	 ??????????????юд 0002: Str-Vorbereitet ( KS )
	 ?????????????юд?0004: Str-Vorbereitet ( SM )
	 ????????????юддд 0008: Str-Vorbereitet ( GG )
	 ???????????юддд?0010: Str-Vorbereitet ( DFR )
	 ??????????юддддд 0020: Strahlung ein
	 ?????????юддддд?
	 ????????юддддддд
	 ???????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?4000: Vk aus
	 юддддддддддддддд 8000: HK ein
																	*/

		AFN_EVT_GR_4,   /* Evt-Flaggruppe 8 fuer Aufnahme: Strahlung gesp. */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Str-gesperrt ( SE )
	 ??????????????юд 0002: Str-gesperrt ( KS )
	 ?????????????юд?0004: Str-gesperrt ( SM )
	 ????????????юддд 0008: Str-gesperrt ( GG )
	 ???????????юддд?0010: Str-gesperrt ( ERR )
	 ??????????юддддд 0020: Str-gesperrt ( DFR )
	 ?????????юддддд?0040: Str-gesperrt ( SYSW )
	 ????????юддддддд
	 ???????юддддддд?0100: Strahlung aus
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?4000: Vk aus
	 юддддддддддддддд 8000: HK aus
																	*/

		AFN_EVT_GR_5,   /* Evt-Flaggruppe 9 fuer Aufnahme: Serie vorbereiten */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Serie-Vorbereitet ( SE )
	 ??????????????юд 0002: Serie-Vorbereitet ( KS )
	 ?????????????юд?0004: Serie-Vorbereitet ( SM )
	 ????????????юддд 0008: Serie-Vorbereitet ( GG )
	 ???????????юддд?0010: Serie-Vorbereitet ( BV )
	 ??????????юддддд 0020: Serie-Vorbereitet ( FS )
	 ?????????юддддд?0040: kein freies Bild ( KS )
	 ????????юддддддд
	 ???????юддддддд?0100: Serie-Vorbereitet ( DFR )
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?4000: Serie-VK-aus
	 юддддддддддддддд 8000: Serie aktiv
																	*/

		SERV_QUIT_GR,   /* Evt-Flaggruppe 10 fuer Quittierung der Init-Daten */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Telegramm iServQuitt gekommen
	 ??????????????юд
	 ?????????????юд?
	 ????????????юддд
	 ???????????юддд?
	 ??????????юддддд
	 ?????????юддддд?
	 ????????юддддддд
	 ???????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?
	 юддддддддддддддд
																*/
	TRAC_EVT_GR,	/* Eventflaggruppe fuer Telegrammtrace */
	IRRC_EVT_GR,	/* Eventflaggruppe fuer Infrarotfernbedienung */
	FD_EVT_GR,      /* Eventflaggruppe fuer FestkoerperDetektor */
/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Start FD_R_TSK COM1
	 ??????????????юд 0002: Start FD_R_TSK COM2
	 ?????????????юд?
	 ????????????юддд
	 ???????????юддд?
	 ??????????юддддд
	 ?????????юддддд?
	 ????????юддддддд
	 ???????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?
	 юддддддддддддддд    */

	SRV_EVT_GR,		 /* Eventflaggruppe fuer Service */
	/*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
	 ????????????????0001: Konfiguration wurde mit SPC geaendert
	 ??????????????юд
	 ?????????????юд?
	 ????????????юддд
	 ???????????юддд?
	 ??????????юддддд
	 ?????????юддддд?
	 ????????юддддддд
	 ???????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?
	 юддддддддддддддд    */
    ERRLOG_EVT_GR,                      /* Eventflaggruppe fuer Errorlog */
    /*
	здбдбдбдбдбдбдбдбдбдбдбдбдбдбдбд?
	юдададададададададададададададад?
	 ????????????????
     ????????????????0001: IserverrorlogQuit empfangen
	 ??????????????юд
	 ?????????????юд?
	 ????????????юддд
	 ???????????юддд?
	 ??????????юддддд
	 ?????????юддддд?
	 ????????юддддддд
	 ???????юддддддд?
	 ??????юддддддддд
	 ?????юддддддддд?
	 ????юддддддддддд
	 ???юддддддддддд?
	 ??юддддддддддддд
	 ?юддддддддддддд?
     юддддддддддддддд    */

	NUM_EFG         /* Anzahl Eventflags */

	};



/*----------------------------------------------------------------------*/
/* Semaphore_ID definitions                                             */
/*----------------------------------------------------------------------*/

enum sem_id
	{
		sema_trace_buf,
		DL_ISTDAT_SEM,
		RLR_DAT_SEM,
		IPC_SEM,
		BETR_DAT_SEM,
		ACSTRACE_SEM,
		DISK_SEM,
		WARN_BUF_SEM,
		ERR_BUF_SEM,
		UNIX_TIME_SEM,
        DL_RDOSE_SEMA,
		NUM_OF_SEMA
	};

/************************************************************************/
/* Ende v. Wiedereintrittssicherung */
#endif
