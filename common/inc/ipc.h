/*[ Compilation unit ****************************************************\
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* Product		: XCU XRAY Communication Unit
*
* Name			: ipc.h
*
* Author		: Ritter       ; Siemens AG MED RXE52; (09131) 84-5079
*
* Language		: C
*
* Description	: Definition der Daten fuer die Inter-Prozess-
*													Kommunikation IPC
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/ipc.h,v 1.9 2006/12/21 09:54:18 alexander_m Exp $
*
\************************************************************************/

/*********************** Changes ****************************************\
*
* $Log: ipc.h,v $
* Revision 1.9  2006/12/21 09:54:18  alexander_m
* IPC_RecBuf_t jetzt mit MAX_LEN_ACS_OBJ als max. Datenlaenge im Telegramm
*
* Revision 1.8  2006/09/29 16:03:12  alexander_s
* Changed S_Obj_p pointer of send structure to const, read-only data.
*
* Revision 1.7  2005/12/19 16:46:18  wei
* roll back to 1.5
*
* Revision 1.5  2005/11/16 13:07:55  wei
* no message
*
* Revision 1.3  2005/11/03 15:42:43  wei
* no message
*
* Revision 1.2  2005/08/30 10:47:39  michael
* make acs ready for axn
*
* Revision 1.1  2005/08/18 15:02:00  christian_l
* First checkin of the  RMOS to QNX converted XCU-source file.
*
* Revision 1.1  2005/07/19 14:29:07  christian_l
* Initial checkin.
*
* 
*    Rev /main/9   1999/7/13 11:27:38   achim 
* Timeout von 2 sec fuer Versenden eines Telegramms eingefuehrt

* ( Charm 9004 ).
*
*    Rev /main/8   1998/1/15 15:5:25   hans
* Wenn sich eine Task mit acs_install_fe angemeldet hat, werden ankommende

* Telegramme mit dieser AP_ID direkt an die Task gesendet.
*
*    Rev /main/7   1997/9/1 11:37:26   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.5   07 Nov 1996 15:56:28   gaby
 * Aenderungen von Funktionen auf far wegen Speicherproblemen beim Booten der
 * XCU.
 *
 *    Rev 1.4   23 Oct 1996 18:32:54   hans
 * Neuen Timeout fuer ipc_send ( FLOW1SEC ) eingefuehrt.
 *
 *    Rev 1.3   10 Oct 1995 16:35:52   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.2   21 Apr 1995 13:45:18   udo
 * Codingstandards eingebaut
 *
 *    Rev 1.1   07 Oct 1994 12:12:10   hans
 * Telegrammpuffer vergroesert und auf 386 umgestellt.
 *
 *    Rev 1.0   10 Aug 1994 09:42:58   susi
 * Initial revision.
*
\************************************************************************/

/*----------------------------------------------------------------------*/
/* Include Files                                                        */
/*----------------------------------------------------------------------*/

#include <gbl/xcsobj.h>

/*] END: common definitions */


/* Gegen Wiedereintritt sichern */
#ifndef IPC
#define IPC

#define uchar unsigned char
#define ushort unsigned short
/***************************************************************/

/* Defines fuer r_pid */
#define SEND_INDIREKT	0

/* Defines fuer FLOW: */
#define NOFLOW	  0
#define FLOWCTRL  1
#define FLOW100MS 2
#define FLOW200MS 3
#define FLOW400MS 4
#define FLOW1SEC  10
#define FLOW2SEC  20

/* Sendepuffer Aufbau */
typedef struct IPC_TransBuf {
    uchar s_pid;		 /* Sender-Prozess-ID */
    uchar r_pid;		 /* Receiver-Prozess-ID */
    uchar flow;			 /* Flow-Control-Parameter */
    uchar group_id;		 /* Funktionskreis */
    uchar mode;          /* Mode fuer ACS */
    uchar target;        /* Empfaenger im ACS-System */
    ushort obj_id;		 /* Identifikation */
    ushort length;		 /* Laenge */
    const void *S_Obj_p; /* Pointer auf Daten */
} __attribute__ ((packed)) IPC_TransBuf_t;

/* Empfangspuffer Header-Aufbau */
typedef struct IPC_RecBuf {
    uchar s_pid;		/* Sender-Prozess-ID */
    uchar r_pid;		/* Receiver-Prozess-ID */
    uchar flow;			/* Flow-Control-Parameter */
    uchar group_id;		/* Funktionskreis */
    uchar mode;         /* Mode fuer ACS */
    uchar target;       /* Empfaenger im ACS-System */
    ushort obj_id;		/* Identifikation */
    ushort length;		/* Laenge */
    char data[0];       /* Ab hier Daten */
} __attribute__ ((packed)) RecBuf_t;

/* Aufbau Empfangspuffer */
typedef struct IPC_RecBuf_t_tag{
    uchar s_pid;		/* Sender-Prozess-ID */
    uchar r_pid;		/* Receiver-Prozess-ID */
    uchar flow;			/* Flow-Control-Parameter */
    uchar group_id;		/* Funktionskreis */
    uchar mode;         /* Mode fuer ACS */
    uchar target;       /* Empfaenger im ACS-System */
    ushort obj_id;		/* Identifikation */
    ushort length;		/* Laenge */
    uchar data[MAX_LEN_ACS_OBJ];	/* Daten */
} __attribute__ ((packed)) IPC_RecBuf_t;


/* Mailboxstruktur */
typedef struct mbx_str_t_tag{
   ushort rec_id;   		/* Empfaenger-ID */
   ushort send_id;			/* Sender-ID */
   void *pool_p;				/* Zeiger auf Memorypool */
   unsigned int dummy;			/* Weil die RMOS3 Mailbox 12 Byte hat */
} __attribute__ ((packed)) mbx_str_t;

/* Defines fuer IPC-Aufrufe */
#define IPC_SendMsg ipc_SendMsg
#define IPC_RecvMsg(buf,len,wait) ipc_RecvMsg((void far * far) buf,(ushort)len, (ushort) wait,(uchar) _THISTASK_)
#define IPC_Init(count,idptr) ipc_Init((uchar)_THISTASK_,(uchar)_MY_MAILBOX_,(ushort)0,(ushort)count,(ushort far * far)idptr)
#define IPC_Reset ipc_reset

/* Defines f. Rueckgabewerte von IPC_SendMsg() */
/*---------------------------------------------*/
#define IPC_SEND_OK    			(int) 0
#define IPC_SEND_NOT_OK			(int) -1

/* Defines f. Rueckgabewerte von IPC_RecvMsg() */
/*---------------------------------------------*/
#define IPC_RECV_NO_MAIL		(int) 0
#define IPC_RECV_MAIL			(int) 1
#define IPC_RECV_NOT_OK			(int) -1

/* Defines f. Rueckgabewerte von IPC_Init() */
/*---------------------------------------------*/
#define IPC_INIT_OK				(int) 0
#define IPC_INIT_NOT_OK			(int) -1

/*----------------------------------------------------------------------*/
/* DECLARATION: external functions                                      */
/*----------------------------------------------------------------------*/

#ifndef IPC
extern  int  far ipc_Init (uint, uint, ushort, ushort, ushort far * far);
extern  int  far ipc_RecvMsg (void far * far, ushort, ushort int, uint);
extern  int  far ipc_SendMsg (struct IPC_TransBuf far * far);
extern  void far ipc_reset(void);
#endif

/***************************************************************/
/* Ende v. Wiedereintrittssicherung: */
#endif

