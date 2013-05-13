/******************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                          */
/******************************************************************************/
/*                                                                            */
/* _COMMON\_State.H                                                           */
/*                                                                            */
/******************************************************************************/
/*                                                                            */
/* Changes:                                                                   */
/*                                                                            */
/* 07-apr-2005 - KS - E000 - Aus IT/A100/Martix geclont                       */
/*                                                                            */
/******************************************************************************/
#ifndef  L_FILE__COMMON__STATE_H
   #define  L_FILE__COMMON__STATE_H

//lint -save
//lint -e1709
typedef enum      
   {
   E_STATE_START           = 0x00,
   E_STATE_INIT            = 0x01,
   E_STATE_INIT_DONE       = 0x02,
   E_STATE_INITIAL_STOP    = 0x03,
   E_STATE_RESET           = 0x04,
   E_STATE_BLOCKED         = 0x05,
   E_STATE_STANDBY         = 0x06,
   E_STATE_PREP            = 0x07,
   E_STATE_PREP_DONE       = 0x08,
   E_STATE_EXPOSURE        = 0x09,
   E_STATE_EXPOSURE_DONE   = 0x0a, // 10
   E_STATE_STOP            = 0x0b, // 11
   E_STATE_HALT            = 0x0c,  // 12
   
   E_STATE_UNDEF           = 0xFF
   }
e_state_type;

#define L_MAX_STATE          0x0d  // 13
//lint -restore
#endif 

/******************************************************************************/
/*                                                                            */
/* End of _COMMON\State.H                                                     */
/*                                                                            */
/******************************************************************************/

