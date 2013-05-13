/* Compilation unit ****************************************************\
*
* Product      : XCU XRAY Communication Unit
*
* Name         : glob_var.h
*
* Author       : Kapp   ; Siemens AG RXE5; (09131) 846543
*
* Language     : C
*
* Description  : Definiton der globalen Variablen
*
* COPYRIGHT (C) SIEMENS AG 1995 ALL RIGHTS RESERVED
*
* PVCS-Header	: $Header: /data/cvsrepository/XCU_2/05-Proto/src/XCU_2/inc/glob_var.h,v 1.7 2007/07/13 16:40:48 reinhold Exp $
*
\************************************************************************/


/*********************** Changes ****************************************\
*
* $Log: glob_var.h,v $
* Revision 1.7  2007/07/13 16:40:48  reinhold
* Einsprungspunkte definiert
*
* Revision 1.6  2007/06/26 15:52:32  reinhold
* changed isNrf to GLOB_TYP
*
* Revision 1.5  2007/06/13 13:03:21  reinhold
* Globale Variable ob NRF oder nicht
*
* Revision 1.4  2007/05/25 08:51:31  hans
* Neuer Globaler Parameter für Screensaver Status
*
* Revision 1.3  2005/09/01 08:42:36  christian_l
* Changes to include the SysLib.
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
*    Rev /main/6   2001/10/15  hans
* Adresse für CAN-Kaufkarte definiert
*
*    Rev /main/5   1999/8/13 16:31:39   achim
* Struktur fuer CAN eingefuegt
*
*    Rev /main/4   1998/1/15 15:5:13   hans
* Wenn sich eine Task mit acs_install_fe angemeldet hat, werden ankommende

* Telegramme mit dieser AP_ID direkt an die Task gesendet.
*
*    Rev /main/3   1997/9/1 11:37:36   hans
* uint durch ushort und sint durch sshort ersetzt
* wegen neuem RMOS
 *
 *    Rev 1.1   10 Oct 1995 16:35:30   susi
 * Hazard-Classification und Copyright eingefuegt.
 *
 *    Rev 1.0   10 Aug 1994 09:41:30   susi
 * Initial revision.
*
\************************************************************************/
#ifndef _glob_var_h
#define _glob_var_h

#include <portab.h>

#ifndef init_tsk
  #define GLOB_TYP extern far
#else
  #define GLOB_TYP
#endif

/*----------------------------------------------------------------------*/
/*              Allgemeine Definitionen                                 */
/*----------------------------------------------------------------------*/
#define true  (unsigned char) 0x1
#define false (unsigned char) 0x0



/*----------------------------------------------------------------------*/
/*              Variable fuer ACS-Kopplung                              */
/*----------------------------------------------------------------------*/
/* Testvariablen */
GLOB_TYP long test_err_ctr;
GLOB_TYP long test_rec_ctr;
GLOB_TYP long test_send_ctr;
GLOB_TYP long usr_rec_ctr;


/* Zaehlvariable fuer ACS-Kopplung        */
GLOB_TYP long c_int_acs_all;
GLOB_TYP long c_int_acs_recv;
GLOB_TYP long c_int_acs_send;

GLOB_TYP long c_acs_dummy;
GLOB_TYP long c_acs_turn_on;
GLOB_TYP long c_acs_turn_off;
GLOB_TYP long c_acs_err;
GLOB_TYP long c_acs_init;

/* Zeiger auf die ACS DPR-Struktur        */
//GLOB_TYP acs_dpr_t * far acs_dpr_str_ptr;

/* Variable, die angibt, ob ACS_SEND auf  */
/* ACS-Interrupt wartet                   */
//GLOB_TYP int acs_wait_for_send;

/* Variable, die angibt, ob ACS_RECV auf  */
/* ACS-Interrupt wartet                   */
//GLOB_TYP int acs_wait_for_recv;

/* Mailbox ID fuer umschaltung in Testtask */
GLOB_TYP unsigned int akt_mbox;

/* CAN-Controller auf Adresse 0xdd800*/
#define CAN_BASE_ADR	(unsigned long)0xdd800
/* CAN-Controller auf Adresse 0xc8000*/
#define CAN2_BASE_ADR    (unsigned long)0xc8000
#define CAN_LIMIT       (unsigned long)0x400

/* Flags of the status register */
#define CAN_FLAG_RCV_BUFFER     0x01
#define CAN_FLAG_DATA_OVERRUN   0x02
#define CAN_FLAG_TXBUFFACCESS   0x04
#define CAN_FLAG_TRM_COMPLETE   0x08
#define CAN_FLAG_RECEIVE        0x10
#define CAN_FLAG_TRANSMIT       0x20
#define CAN_FLAG_ERROR          0x40
#define CAN_FLAG_BUS            0x80
/* Flags of the control register */
#define CAN_FLAG_RESET_REQUEST  0x01
#define CAN_FLAG_IE_RECEIVE     0x02
#define CAN_FLAG_IE_TRANSMIT    0x04
#define CAN_FLAG_IE_ERROR       0x08
#define CAN_FLAG_IE_OVERRUN     0x10
/* Flags of the command register */
#define CAN_FLAG_TX_REQUEST     0x01
#define CAN_FLAG_RELEASE_RX     0x04
#define CAN_FLAG_CLEAR_OVERRUN  0x08
#define CAN_FLAG_GOTO_SLEEP     0x10
/* Flags of the interrupt register */
#define CAN_FLAG_INT_RECEIVE    0x01
#define CAN_FLAG_INT_TRANSMIT   0x02
#define CAN_FLAG_INT_ERROR      0x04
#define CAN_FLAG_INT_OVERRUN    0x08
#define CAN_FLAG_INT_WAKEUP     0x10

typedef struct can_cntr_str_t_tag
    {
     unsigned char  can_control;
     unsigned char  can_command;
     unsigned char  can_status;
     unsigned char  can_interrupt;
     unsigned char  can_accept_code;
     unsigned char  can_accept_mask;
     unsigned char  can_bus_timing_0;
     unsigned char  can_bus_timing_1;
     unsigned char  can_out_control;
     unsigned char  can_test_reserved;
     unsigned char  can_tx_identifier;
     unsigned char  can_tx_ident_dlc;
     unsigned char  can_tx_data[8];
     unsigned char  can_rx_identifier;
     unsigned char  can_rx_ident_dlc;
     unsigned char  can_rx_data[8];
     unsigned char  can_unknown;
     unsigned char  can_clock_divider;
    } __attribute__ ((packed)) can_cntrl_str_t;

GLOB_TYP	can_cntrl_str_t	* far can_str_p;
GLOB_TYP    can_cntrl_str_t * far can2_str_p;
GLOB_TYP	unsigned char		can_msg[12];
GLOB_TYP    unsigned char     	far can_accept_mask;
GLOB_TYP    unsigned char     	far can_accept_code;
GLOB_TYP 	unsigned char 		akt_screensaver_status; /* Merker des Screensaver-Status, wird in SE_Tsk gesetzt und DL-Tsk ausgewertet */

/**
 * \brief      NRF system flag. Set to \c true if NRF.
 ******************************************************************************/
GLOB_TYP bool isNrf;

#endif



