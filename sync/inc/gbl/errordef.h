/*####################################################################################################################*/
/*                                                                                                                    */
/*                                       Error Messsage Class and definitions                                         */
/*                                                     S1 Plattform                                                   */
/*                                                                                                                    */
/*####################################################################################################################*/
/*                                                                                                                    */
/*          CErrorMsg has to be derived into the class that want to use error message outputs.                        */
/*          It provides one method "SendErrorMsg" which can either be called with                                     */
/*            - 3 params "error_num", "category" and 10 char "info" string  or                                        */
/*            - 4 params "error_num", "category", 5 char "info" string and actual "line" number                       */
/*                                                                                                                    */
/*                                          Programming language: C ( ANSI )                                          */
/*                                                                                                                    */
/*####################################################################################################################*/
/*                                                                                                                    */
/*                                                 FILENAME: errordef.h                                               */
/*                                        CREATED FOR: S1-VA10A  VERSION: 0000                                        */
/*                                        DATE       : 09.09.2011                                                     */
/*                                                                                                                    */
/*####################################################################################################################*/

/*
History version 0000 for S1:
- created

*/

#ifndef ERROR_DEF_H
#define ERROR_DEF_H

#include "mcstelegram.h"
/****** common ERROR definitions **************************************************************************************/
#define E_1001_SEND_MASSAGE_FAILED     1001, WARNUNG  // Process to receive this message is not running
#define E_1003_MISSING_HEARTBEAT       1003, WARNUNG  // expected heartbeat of a component missing

#define E_1010_GENERAL_CAN_BUS_ERROR   1010, WARNUNG  // CoMaster detected a general CAN bus error (nothing connected, Tx overflow, etc) 

#define E_1101_XCS_TELEGRAMM_UNBEKANNT 1101, WARNUNG  //process received an unknown XCS-telegram
#define E_1102_XCS_TELEGRAMM_GRENZWERT 1102, WARNUNG  //process received an XCS-telegram with parameter out of range

#define E_1201_CAN_TELEGRAMM_UNBEKANNT 1201, WARNUNG  //process received an unknown CAN-telegram

#define E_1301_CAF_FILE_NOT_OPENED     1301, WARNUNG  //caf-file could not be opened
#define E_1302_CAF_GROUP_NOT_FOUND     1302, WARNUNG  //group not found in caf-file
#define E_1303_CAF_PAR_NOT_FOUND       1303, WARNUNG  //par not found in caf-file
#define E_1304_CAF_PAR_OUT_OF_RANGE    1304, WARNUNG  //par out of range in caf-file

#define E_1401_FTP_DOWNLOAD_FAILED     1401, WARNUNG  //file download not succesful, file not received


#define EXECUTE_TIMEOUT       10//10s timeout for the system-command to finish processing

/**********************************************************************************************************************/
/*   WARNUNG               0x01   Warning [w]                                                                         */
/*   BEHEB_FEHLER          0x02   Recoverable Error [r]                                                               */
/*   NICHT_BEHEB_FEHLER    0x03   non-recoverable error [e]                                                           */
/*   FATALER_FEHLER        0x04   fatal error [f]                                                                     */
/*   USERMESSAGE           0x05   information [i]                                                                     */
/*   BEDIENEVENT           0x06   Action [a]                                                                          */
/*   TELEGRAM              0x07   Telegram from or to System [t]                                                      */
/*   MSGBOX_NO_OK_NO_TUI   0x09   MessageBox w/o OK w/o display on TUI [m]                                            */
/*   ORTHOMESSAGE          0x0a   MessageBox w/o OK with display on TUI [o]                                           */
/*   RESET_WARNING         0x11   reset warning [x]                                                                   */
/*   RESET_ERROR           0x12   reset recoverable error [x]                                                         */
/*   RESET_SEVERE          0x13   reset severe (non-recoverable) error [x]                                            */
/*   RESET_FATAL           0x14   reset fatal error [x]                                                               */
/*   RESET_USERMESSAGE     0x15   reset usermessage [x]                                                               */
/*   RESET_MSGBOX          0x19   reset status message of type MSGBOX_NO_OK_NO_TUI [x]                                */
/*   RESET_ORTHOMSG        0x1a   reset message of type ORTHOMESSAGE [x]                                              */
/**********************************************************************************************************************/

typedef struct  
{
  ACS_WORD     error_num;                                                                  /* number of error */
  ACS_ENUM      category;                                                                    /* Type of error */
  ACS_BYTE      info[10];                         /* additional information, e.g. code module and line number */
} t_error_msg;

class CErrorMsg
{
  public:
	void SendErrorMsg( unsigned short error_num, unsigned char category, char* info )
	{ 
      m_error.error_num = error_num;
      m_error.category  = category;
      memset( m_error.info, 0, 10 );
      if(info)  strncpy( (char*)m_error.info, info, 10 );
                                                   
      getApp() -> sendMsg( MSG_ENDPOINTID_OWNTHREAD, MSG_XCS_SEND_ERROR, &m_error, sizeof(m_error) );
	};
	 
	void SendErrorMsg( unsigned short error_num, unsigned char category, char* name, unsigned long line )
	{ 
	  char txt[8];
      m_error.error_num = error_num;
      m_error.category  = category;
      memset( m_error.info, 0, 10 );
      if(name)  strncpy( (char*)&m_error.info[0], name, 6 ); 
      strcat( (char*)&m_error.info[0], "      " ); 
      sprintf( txt, "%05d", line );
      strncpy( (char*)&m_error.info[6], &txt[1], 4 );
                                                   
      getApp() -> sendMsg( MSG_ENDPOINTID_OWNTHREAD, MSG_XCS_SEND_ERROR, &m_error, sizeof(m_error) );
	};
		
		
  private:
    t_error_msg  m_error;
};

#endif //ERROR_DEF_H
