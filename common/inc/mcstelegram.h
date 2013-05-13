/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: mcstelegram.h
 * Revision: 1.0
 * Brief Description:
 *       Define all the telegrams ID and its data structure.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/
#include "_state.h"
#include "_BlockTyp.h"
#include "ExData.h"
#include "warning_id.h"
#include "mcs_intTelParaTrans.h"
#include "_para_get_act.h"

#ifndef _MCSTTELEGRAM_H_
#define _MCSTTELEGRAM_H_


#define MAX_TELEGRAM_LENGTH 8
/************************************************************************/ 
/* NO_CMD */ 
/************************************************************************/ 

#define MSG_NO_CMD 0x1000

typedef struct 
{ 

}__attribute__ ((packed)) Msg_NO_CMD_t; 


/************************************************************************/ 
/* CMD_ACT */ 
/************************************************************************/ 

#define MSG_CMD_ACT 0x1001

typedef struct 
{ 
    alt_u8          subCommand;
    alt_u8          actData[MAX_TELEGRAM_LENGTH-2];
}__attribute__ ((packed)) Msg_CMD_ACT_t; 


/************************************************************************/ 
/* CMD_ACT_EX_DATA */ 
/************************************************************************/ 

#define MSG_CMD_ACT_EX_DATA 0x1002

typedef struct 
{ 
  unsigned char mode;
  unsigned char focus;
  unsigned char target;
  unsigned char filter;
  unsigned char aec_channel;
  unsigned char hud;
  unsigned char tube;
  unsigned short adjust;
  unsigned int kv;
  unsigned int pre_mAs;
  unsigned int pre_mA;
  unsigned int pre_ms;
  unsigned int main_mAS;
  unsigned int main_mA;
  unsigned int main_mS;
}__attribute__ ((packed)) Msg_CMD_ACT_EX_DATA_t; 


/************************************************************************/ 
/* CMD_BLOCK */ 
/************************************************************************/ 

#define MSG_CMD_BLOCK 0x1003

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BLOCK_t; 


/************************************************************************/ 
/* CMD_BLOCKED */ 
/************************************************************************/ 

#define MSG_CMD_BLOCKED 0x1004

typedef struct 
{ 
    BlockType blockMask;
}__attribute__ ((packed)) Msg_CMD_BLOCKED_t; 


/************************************************************************/ 
/* CMD_BLOCK_REQUEST */ 
/************************************************************************/ 

#define MSG_CMD_BLOCK_REQUEST 0x1005

typedef struct 
{ 
    BlockType blockMask;
}__attribute__ ((packed)) Msg_CMD_BLOCK_REQUEST_t; 


/************************************************************************/ 
/* CMD_CANCEL_DONE */ 
/************************************************************************/ 

#define MSG_CMD_CANCEL_DONE 0x1006

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CANCEL_DONE_t; 


/************************************************************************/ 
/* CMD_CANCEL_EX_PARA */ 
/************************************************************************/ 

#define MSG_CMD_CANCEL_EX_PARA 0x1007

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CANCEL_EX_PARA_t; 


/************************************************************************/ 
/* CMD_CANCEL_EXPOSURE */ 
/************************************************************************/ 

#define MSG_CMD_CANCEL_EXPOSURE 0x1008

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CANCEL_EXPOSURE_t; 


/************************************************************************/ 
/* CMD_COM_START */ 
/************************************************************************/ 

#define MSG_CMD_COM_START 0x1009

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COM_START_t; 


/************************************************************************/ 
/* CMD_COM_DONE */ 
/************************************************************************/ 

#define MSG_CMD_COM_DONE 0x100a

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COM_DONE_t; 


/************************************************************************/ 
/* CMD_DATA_DELETED */ 
/************************************************************************/ 

#define MSG_CMD_DATA_DELETED 0x100b

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DATA_DELETED_t; 


/************************************************************************/ 
/* CMD_DEBUG */ 
/************************************************************************/ 

#define MSG_CMD_DEBUG 0x100c

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DEBUG_t; 


/************************************************************************/ 
/* CMD_DEL_DATA */ 
/************************************************************************/ 

#define MSG_CMD_DEL_DATA 0x100d

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DEL_DATA_t; 


/************************************************************************/ 
/* CMD_END_EXPOSURE */ 
/************************************************************************/ 

#define MSG_CMD_END_EXPOSURE 0x100e

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_END_EXPOSURE_t; 


/************************************************************************/ 
/* CMD_ERROR */ 
/************************************************************************/ 

#define MSG_CMD_ERROR 0x100f

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_ERROR_t; 


/************************************************************************/ 
/* CMD_EX_DATA */ 
/************************************************************************/ 

#define MSG_CMD_EX_DATA 0x1010

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_EX_DATA_t; 


/************************************************************************/ 
/* CMD_EX_DATA_ACCEPTED */ 
/************************************************************************/ 

#define MSG_CMD_EX_DATA_ACCEPTED 0x1011

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_EX_DATA_ACCEPTED_t; 


/************************************************************************/ 
/* MSG_CMD_EXPOSURE_DONE */ 
/************************************************************************/ 

#define MSG_CMD_EXPOSURE_DONE 0x1012

typedef struct 
{ 
    alt_u16     AcqEndReason;
}__attribute__ ((packed)) Msg_CMD_EXPOSURE_DONE_t; 


/************************************************************************/ 
/* CMD_GET */ 
/************************************************************************/ 

#define MSG_CMD_GET 0x1013

typedef struct 
{ 
  t_int_p_typ infoID;
}__attribute__ ((packed)) Msg_CMD_GET_t; 


/************************************************************************/ 
/* CMD_HALT */ 
/************************************************************************/ 

#define MSG_CMD_HALT 0x1014

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_HALT_t; 


/************************************************************************/ 
/* CMD_INFO */ 
/************************************************************************/ 

#define MSG_CMD_INFO 0x1015

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INFO_t; 


/************************************************************************/ 
/* CMD_INIT */ 
/************************************************************************/ 

#define MSG_CMD_INIT 0x1016

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INIT_t; 


/************************************************************************/ 
/* CMD_INIT_DONE */ 
/************************************************************************/ 

#define MSG_CMD_INIT_DONE 0x1017

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INIT_DONE_t; 


/************************************************************************/ 
/* CMD_INT_COM_START */ 
/************************************************************************/ 

#define MSG_CMD_INT_COM_START 0x1018

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INT_COM_START_t; 


/************************************************************************/ 
/* CMD_INT_COM_STARTED */ 
/************************************************************************/ 

#define MSG_CMD_INT_COM_STARTED 0x1019

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INT_COM_STARTED_t; 


/************************************************************************/ 
/* CMD_KEY */ 
/************************************************************************/ 

#define MSG_CMD_KEY 0x101a

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_KEY_t; 


/************************************************************************/ 
/* CMD_LIFECHECK_DONE */ 
/************************************************************************/ 

#define MSG_CMD_LIFECHECK_DONE 0x101b

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_LIFECHECK_DONE_t; 


/************************************************************************/ 
/* CMD_LIFECHECK_REQUEST */ 
/************************************************************************/ 

#define MSG_CMD_LIFECHECK_REQUEST 0x101c

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_LIFECHECK_REQUEST_t; 


/************************************************************************/ 
/* CMD_PARA_ACCEPTED */ 
/************************************************************************/ 

#define MSG_CMD_PARA_ACCEPTED 0x101d

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PARA_ACCEPTED_t; 


/************************************************************************/ 
/* CMD_PARA */ 
/************************************************************************/ 

#define MSG_CMD_PARA 0x101e

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PARA_t; 


/************************************************************************/ 
/* CMD_PREP */ 
/************************************************************************/ 

#define MSG_CMD_PREP 0x101f

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PREP_t; 


/************************************************************************/ 
/* CMD_PREP_DONE */ 
/************************************************************************/ 

#define MSG_CMD_PREP_DONE 0x1020

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PREP_DONE_t; 


/************************************************************************/ 
/* CMD_READY_FOR_XRAY */ 
/************************************************************************/ 

#define MSG_CMD_READY_FOR_XRAY 0x1021

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_READY_FOR_XRAY_t; 


/************************************************************************/ 
/* CMD_RESET */ 
/************************************************************************/ 

#define MSG_CMD_RESET 0x1022

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_RESET_t; 


/************************************************************************/ 
/* CMD_RESET_DONE */ 
/************************************************************************/ 

#define MSG_CMD_RESET_DONE 0x1023

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_RESET_DONE_t; 


/************************************************************************/ 
/* CMD_SEC_CIRCUIT_STATE */ 
/************************************************************************/ 

#define MSG_CMD_SEC_CIRCUIT_STATE 0x1024

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_SEC_CIRCUIT_STATE_t; 


/************************************************************************/ 
/* CMD_SET */ 
/************************************************************************/ 

#define MSG_CMD_SET 0x1025

typedef struct 
{ 
    alt_u8 infoID;
    //the parameters' definition should be added later.currently only used for
    //test.
}__attribute__ ((packed)) Msg_CMD_SET_t; 


/************************************************************************/ 
/* CMD_SET_SEC_CIRCUIT */ 
/************************************************************************/ 

#define MSG_CMD_SET_SEC_CIRCUIT 0x1026

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_SET_SEC_CIRCUIT_t; 


/************************************************************************/ 
/* CMD_START_EXPOSURE */ 
/************************************************************************/ 

#define MSG_CMD_START_EXPOSURE 0x1027

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_START_EXPOSURE_t; 


/************************************************************************/ 
/* CMD_STOP */ 
/************************************************************************/ 

#define MSG_CMD_STOP 0x1028

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STOP_t; 


/************************************************************************/ 
/* CMD_WARNING */ 
/************************************************************************/ 

#define MSG_CMD_WARNING 0x1029

typedef struct 
{ 
	//TODO: review
	E_WarningID warningID; //what is the warning, e.g. parameter invalid
	unsigned short reason;    //what cause the warning, e.g. parameter over max limit
	unsigned short parameter0; //the parameter of this warning, e.g. actual parameter, max limit ...
	unsigned short parameter1;
	unsigned short parameter2;
}__attribute__ ((packed)) Msg_CMD_WARNING_t; 


/************************************************************************/ 
/* CMD_UDC_OK */ 
/************************************************************************/ 

#define MSG_CMD_UDC_OK 0x102a

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_UDC_OK_t; 


/************************************************************************/ 
/* CMD_UNBLOCK */ 
/************************************************************************/ 

#define MSG_CMD_UNBLOCK 0x102b

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_UNBLOCK_t; 


/************************************************************************/ 
/* CMD_UNBLOCKED */ 
/************************************************************************/ 

#define MSG_CMD_UNBLOCKED 0x102c

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_UNBLOCKED_t; 


/************************************************************************/ 
/* CMD_UNBLOCK_REQUEST */ 
/************************************************************************/ 

#define MSG_CMD_UNBLOCK_REQUEST 0x102d

typedef struct 
{ 
    BlockType blockMask;
}__attribute__ ((packed)) Msg_CMD_UNBLOCK_REQUEST_t; 


/************************************************************************/ 
/* CMD_XRAY_OFF */ 
/************************************************************************/ 

#define MSG_CMD_XRAY_OFF 0x102e

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_XRAY_OFF_t; 


/************************************************************************/ 
/* CMD_XRAY_ON */ 
/************************************************************************/ 

#define MSG_CMD_XRAY_ON 0x102f

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_XRAY_ON_t; 


/************************************************************************/ 
/* CMD_MAIN_PULS_DATA */ 
/************************************************************************/ 

#define MSG_CMD_MAIN_PULS_DATA 0x1030

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_MAIN_PULS_DATA_t; 


/************************************************************************/ 
/* CMD_PRXRAY_OFF */ 
/************************************************************************/ 

#define MSG_CMD_PRXRAY_OFF 0x1031

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PRXRAY_OFF_t; 


/************************************************************************/ 
/* CMD_READY_MAIN */ 
/************************************************************************/ 

#define MSG_CMD_READY_MAIN 0x1032

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_READY_MAIN_t; 


/************************************************************************/ 
/* CMD_EX_PARA_CANCELED */ 
/************************************************************************/ 

#define MSG_CMD_EX_PARA_CANCELED 0x1033

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_EX_PARA_CANCELED_t; 


/************************************************************************/ 
/* CMD_PATIENT_NAME */ 
/************************************************************************/ 

#define MSG_CMD_PATIENT_NAME 0x1034

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PATIENT_NAME_t; 


/************************************************************************/ 
/* CMD_DISPLAY */ 
/************************************************************************/ 

#define MSG_CMD_DISPLAY 0x1035

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DISPLAY_t; 


/************************************************************************/ 
/* CMD_DISPLAY_CLR */ 
/************************************************************************/ 

#define MSG_CMD_DISPLAY_CLR 0x1036

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DISPLAY_CLR_t; 


/************************************************************************/ 
/* CMD_DISPLAY_BAR */ 
/************************************************************************/ 

#define MSG_CMD_DISPLAY_BAR 0x1037

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DISPLAY_BAR_t; 


/************************************************************************/ 
/* CMD_EMCY_ACT_EXDATA */ 
/************************************************************************/ 

#define MSG_CMD_EMCY_ACT_EXDATA 0x1038

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_EMCY_ACT_EXDATA_t; 


/************************************************************************/ 
/* CMD_GO_GRID */ 
/************************************************************************/ 

#define MSG_CMD_GO_GRID 0x1039

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_GO_GRID_t; 


/************************************************************************/ 
/* CMD_JUMP_BOOT */ 
/************************************************************************/ 

#define MSG_CMD_JUMP_BOOT 0x103a

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_JUMP_BOOT_t; 


/************************************************************************/ 
/* CMD_SERVICREQUEST */ 
/************************************************************************/ 

#define MSG_CMD_SERVICREQUEST 0x103b

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_SERVICREQUEST_t; 


/************************************************************************/ 
/* CMD_SERVICDATA */ 
/************************************************************************/ 

#define MSG_CMD_SERVICDATA 0x103c

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_SERVICDATA_t; 


/************************************************************************/ 
/* CMD_DISPLAY_BITMAP */ 
/************************************************************************/ 

#define MSG_CMD_DISPLAY_BITMAP 0x103d

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DISPLAY_BITMAP_t; 


/************************************************************************/ 
/* CMD_DISPLAY_GRAPHIC */ 
/************************************************************************/ 

#define MSG_CMD_DISPLAY_GRAPHIC 0x103e

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DISPLAY_GRAPHIC_t; 


/************************************************************************/ 
/* CMD_ACT_EX_DATA_ADVANCED */ 
/************************************************************************/ 

#define MSG_CMD_ACT_EX_DATA_ADVANCED 0x103f

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_ACT_EX_DATA_ADVANCED_t; 


/************************************************************************/ 
/* CMD_EX_DATA_ADVANCED */ 
/************************************************************************/ 

#define MSG_CMD_EX_DATA_ADVANCED 0x1040

//typedef struct
//{
//	//TODO: it is temp use, to be updated
//}__attribute__ ((packed)) Msg_CMD_EX_DATA_ADVANCED_t;

typedef t_AufnahmeBufferTyp Msg_CMD_EX_DATA_ADVANCED_t;


/************************************************************************/ 
/* CMD_STEREO_READY_FOR_XRAY */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_READY_FOR_XRAY 0x1041

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_READY_FOR_XRAY_t; 


/************************************************************************/ 
/* CMD_STEREO_XRAY_ON */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_XRAY_ON 0x1042

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_XRAY_ON_t; 


/************************************************************************/ 
/* CMD_STEREO_XRAY_OFF */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_XRAY_OFF 0x1043

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_XRAY_OFF_t; 


/************************************************************************/ 
/* CMD_STEREO_MOVE */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_MOVE 0x1044

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_MOVE_t; 


/************************************************************************/ 
/* CMD_STEREO_MOVDONE */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_MOVDONE 0x1045

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_MOVDONE_t; 


/************************************************************************/ 
/* CMD_STEREO_PREP */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_PREP 0x1046

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_PREP_t; 


/************************************************************************/ 
/* CMD_STEREO_PREP_DONE */ 
/************************************************************************/ 

#define MSG_CMD_STEREO_PREP_DONE 0x1047

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_STEREO_PREP_DONE_t; 


/************************************************************************/ 
/* CMD_INTENRAL_START_HOMING */ 
/************************************************************************/ 

#define MSG_CMD_INTENRAL_START_HOMING 0x1048

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INTENRAL_START_HOMING_t; 


/************************************************************************/ 
/* CMD_BIOPSY_TARGET_DATA */ 
/************************************************************************/ 

#define MSG_CMD_BIOPSY_TARGET_DATA 0x1049

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BIOPSY_TARGET_DATA_t; 


/************************************************************************/ 
/* CMD_BIOPSY_TARGET_DATA_ACCEPTED */ 
/************************************************************************/ 

#define MSG_CMD_BIOPSY_TARGET_DATA_ACCEPTED 0x104a

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BIOPSY_TARGET_DATA_ACCEPTED_t; 


/************************************************************************/ 
/* CMD_BIOPSY_TARGET_DATA_REJECTED */ 
/************************************************************************/ 

#define MSG_CMD_BIOPSY_TARGET_DATA_REJECTED 0x104b

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BIOPSY_TARGET_DATA_REJECTED_t; 


/************************************************************************/ 
/* CMD_BIOPSY_ERROR */ 
/************************************************************************/ 

#define MSG_CMD_BIOPSY_ERROR 0x104c

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BIOPSY_ERROR_t; 


/************************************************************************/ 
/* CMD_BIOPSY_RECOVER */ 
/************************************************************************/ 

#define MSG_CMD_BIOPSY_RECOVER 0x104d

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BIOPSY_RECOVER_t; 


/************************************************************************/ 
/* CMD_BIOPSY_GO_HOME */ 
/************************************************************************/ 

#define MSG_CMD_BIOPSY_GO_HOME 0x104e

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_BIOPSY_GO_HOME_t; 


/************************************************************************/ 
/* CMD_TOMO_READY_FOR_XRAY */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_READY_FOR_XRAY 0x104F

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_READY_FOR_XRAY_t; 


/************************************************************************/ 
/* CMD_TOMO_XRAY_ON */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_XRAY_ON 0x1050

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_XRAY_ON_t; 


/************************************************************************/ 
/* CMD_TOMO_XRAY_OFF */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_XRAY_OFF 0x1051

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_XRAY_OFF_t; 


/************************************************************************/ 
/* CMD_TOMO_MOVE */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_MOVE 0x1052

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_MOVE_t; 


/************************************************************************/ 
/* CMD_TOMO_MOVDONE */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_MOVDONE 0x1053

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_MOVDONE_t; 


/************************************************************************/ 
/* CMD_TOMO_DATA */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_DATA 0x1054

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_DATA_t; 


/************************************************************************/ 
/* CMD_TOMO_DONE */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_DONE 0x1055

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_DONE_t; 


/************************************************************************/ 
/* CMD_TOMO_XRAY_ON_ROT */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_XRAY_ON_ROT 0x1056

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_XRAY_ON_ROT_t; 


/************************************************************************/ 
/* CMD_TOMO_READY_ROT */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_READY_ROT 0x1057

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_READY_ROT_t; 


/************************************************************************/ 
/* CMD_TOMO_XRAY_OFF_ROT */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_XRAY_OFF_ROT 0x1058

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_XRAY_OFF_ROT_t; 


/************************************************************************/ 
/* CMD_2D3D_READY_FOR_XRAY */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_READY_FOR_XRAY 0x1059

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_READY_FOR_XRAY_t; 


/************************************************************************/ 
/* CMD_2D3D_XRAY_ON */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_XRAY_ON 0x105A

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_XRAY_ON_t; 


/************************************************************************/ 
/* CMD_2D3D_XRAY_OFF */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_XRAY_OFF 0x105B

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_XRAY_OFF_t; 


/************************************************************************/ 
/* CMD_2D3D_MOVE */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_MOVE 0x105C

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_MOVE_t; 


/************************************************************************/ 
/* CMD_2D3D_MOVDONE */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_MOVDONE 0x105D

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_MOVDONE_t; 


/************************************************************************/ 
/* CMD_2D3D_DATA */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_DATA 0x105E

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_DATA_t; 


/************************************************************************/ 
/* CMD_2D3D_DONE */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_DONE 0x105F

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_DONE_t; 


/************************************************************************/ 
/* CMD_2D3D_XRAY_ON_ROT */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_XRAY_ON_ROT 0x1060

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_XRAY_ON_ROT_t; 


/************************************************************************/ 
/* CMD_2D3D_READY_ROT */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_READY_ROT 0x1061

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_READY_ROT_t; 


/************************************************************************/ 
/* CMD_2D3D_XRAY_OFF_ROT */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_XRAY_OFF_ROT 0x1062

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_XRAY_OFF_ROT_t; 


/************************************************************************/ 
/* CMD_2D3D_MAIN_DATA */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_MAIN_DATA 0x1063

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_MAIN_DATA_t; 


/************************************************************************/ 
/* CMD_2D3D_STOP_GRID */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_STOP_GRID 0x1064

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_STOP_GRID_t; 


/************************************************************************/ 
/* CMD_2D3D_GRID_DONE */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_GRID_DONE 0x1065

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_GRID_DONE_t; 


/************************************************************************/ 
/* CMD_TOMO_PREP_ON */ 
/************************************************************************/ 

#define MSG_CMD_TOMO_PREP_ON 0x1066

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_TOMO_PREP_ON_t; 


/************************************************************************/ 
/* CMD_2D3D_PREP_ON */ 
/************************************************************************/ 

#define MSG_CMD_2D3D_PREP_ON 0x1067

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_2D3D_PREP_ON_t; 


/************************************************************************/ 
/* CMD_CRL_GENERATOR_TOMO */ 
/************************************************************************/ 

#define MSG_CMD_CRL_GENERATOR_TOMO 0x1068

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CRL_GENERATOR_TOMO_t; 


/************************************************************************/ 
/* CMD_CRL_INTERFACSTART_RT_DATA */ 
/************************************************************************/ 

#define MSG_CMD_CRL_INTERFACSTART_RT_DATA 0x1069

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CRL_INTERFACSTART_RT_DATA_t; 


/************************************************************************/ 
/* CMD_CDF_DOWNLOAD */ 
/************************************************************************/ 

#define MSG_CMD_CDF_DOWNLOAD 0x106A

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CDF_DOWNLOAD_t; 


/************************************************************************/ 
/* CMD_CDF_ACK */ 
/************************************************************************/ 

#define MSG_CMD_CDF_ACK 0x106B

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_CDF_ACK_t; 


/************************************************************************/ 
/* CMD_PROD_ACT */ 
/************************************************************************/ 

#define MSG_CMD_PROD_ACT 0x106C

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PROD_ACT_t; 


/************************************************************************/ 
/* CMD_PROD_GET */ 
/************************************************************************/ 

#define MSG_CMD_PROD_GET 0x106D

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PROD_GET_t; 


/************************************************************************/ 
/* CMD_PROD_SET */ 
/************************************************************************/ 

#define MSG_CMD_PROD_SET 0x106E

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_PROD_SET_t; 


/************************************************************************/ 
/* CMD_AWS_FORCBLOCK */ 
/************************************************************************/ 

#define MSG_CMD_AWS_FORCBLOCK 0x106F

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_AWS_FORCBLOCK_t; 


/************************************************************************/ 
/* CMD_AWS_RELEASBLOCK */ 
/************************************************************************/ 

#define MSG_CMD_AWS_RELEASBLOCK 0x1070

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_AWS_RELEASBLOCK_t; 


/************************************************************************/ 
/* CMD_EMCY_DECOMPRESS */ 
/************************************************************************/ 

#define MSG_CMD_EMCY_DECOMPRESS 0x1071

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_EMCY_DECOMPRESS_t; 


/************************************************************************/ 
/* CMD_EMCY_DECOMPRESS */ 
/************************************************************************/ 

#define MSG_CMD_INTSTATE_SET 0x1072

typedef struct 
{ 
    e_state_type eState2Be;
}__attribute__ ((packed)) Msg_CMD_INTSTATE_SET_t; 

/************************************************************************/ 
/* MSG_CMD_TIMEOUT */ 
/************************************************************************/ 

#define MSG_CMD_TIMEOUT 0x1073

typedef struct 
{ 
    unsigned char timerID;
}__attribute__ ((packed)) Msg_CMD_TIMEOUT_t; 

/************************************************************************/ 
/* MSG_CMD_TIMEOUT */ 
/************************************************************************/ 

#define MSG_CMD_BUTTON 0x1074

typedef struct 
{ 
    unsigned char ucButtonID;
    unsigned char ucParameter;
}__attribute__ ((packed)) Msg_CMD_BUTTON_t; 

/************************************************************************/ 
/* MSG_INT_EX_DATA_ACCEPTED */ 
/************************************************************************/ 

#define MSG_INT_EX_DATA_ACCEPTED 0x1075


/************************************************************************/ 
/* MSG_INTSTATE_REQ */ 
/************************************************************************/
#define MSG_INT_STATE_REQ 0x1076

typedef struct 
{ 
    e_state_type stateModified;
}__attribute__ ((packed)) Msg_INT_STATE_REQ_t; 

/************************************************************************/ 
/* MSG_INTSTATE_REQ */ 
/************************************************************************/
#define MSG_INT_STATE_SET 0x1077

typedef struct 
{ 
    e_state_type stateModified;
}__attribute__ ((packed)) Msg_INT_STATE_SET_t;

/************************************************************************/ 
/* MSG_INT_READY_FOR_XRAY */ 
/************************************************************************/
#define MSG_INT_READY_FOR_XRAY 0x1078

typedef struct 
{ 
    alt_8 senderAPID;
    alt_8 status; //two status: true, false
}__attribute__ ((packed)) Msg_INT_READY_FOR_XRAY_t;

/************************************************************************/ 
/* MSG_CMD_END_EXPOSURE_OK */ 
/************************************************************************/
#define MSG_CMD_END_EXPOSURE_OK 0x1079

/************************************************************************/ 
/* MSG_CMD_END_EXPOSURE_OK */ 
/************************************************************************/
#define MSG_CMD_CANCEL_EXPOSURE_OK 0x107A

/************************************************************************/ 
/* MSG_CMD_END_EXPOSURE_OK */ 
/************************************************************************/
#define MSG_INT_ACT_EX_DATA 0x107B
typedef struct 
{ 
    alt_u8    actEXDataType;
    union u_Ex_Data_union
    {
    	Msg_act_ex_data_GEN_t         Msg_act_ex_data_GEN;
    	Msg_act_ex_data_Table_t       Msg_act_ex_data_Table;
    	Msg_act_ex_data_Dose_t        Msg_act_ex_data_Dose;
    	Msg_act_ex_data_Exposure_t    Msg_act_ex_data_Exposure;
    	Msg_act_ex_data_Collimator_t  Msg_act_ex_data_Collimator;
    }u_Act_Ex_Data;
    
}__attribute__ ((packed)) Msg_INT_ACT_EX_DATA_t;


/************************************************************************/ 
/* CMD_COL_ACT */ 
/************************************************************************/ 

#define MSG_CMD_COL_ACT 0x10A0

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_ACT_t; 


/************************************************************************/ 
/* CMD_COL_COM_START */ 
/************************************************************************/ 

#define MSG_CMD_COL_COM_START 0x10A1

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_COM_START_t; 


/************************************************************************/ 
/* CMD_COL_COM_STARTED */ 
/************************************************************************/ 

#define MSG_CMD_COL_COM_STARTED 0x10A2

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_COM_STARTED_t; 


/************************************************************************/ 
/* CMD_COL_DEAD */ 
/************************************************************************/ 

#define MSG_CMD_COL_DEAD 0x10A3

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_DEAD_t; 


/************************************************************************/ 
/* CMD_COL_DEBUG */ 
/************************************************************************/ 

#define MSG_CMD_COL_DEBUG 0x10A4

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_DEBUG_t; 


/************************************************************************/ 
/* CMD_COL_ERROR */ 
/************************************************************************/ 

#define MSG_CMD_COL_ERROR 0x10A5

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_ERROR_t; 


/************************************************************************/ 
/* CMD_COL_FILTER */ 
/************************************************************************/ 

#define MSG_CMD_COL_FILTER 0x10A6

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_FILTER_t; 


/************************************************************************/ 
/* CMD_COL_FILTER_DONE */ 
/************************************************************************/ 

#define MSG_CMD_COL_FILTER_DONE 0x10A7

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_FILTER_DONE_t; 


/************************************************************************/ 
/* CMD_COL_GET */ 
/************************************************************************/ 

#define MSG_CMD_COL_GET 0x10A8

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_GET_t; 


/************************************************************************/ 
/* CMD_COL_INIT */ 
/************************************************************************/ 

#define MSG_CMD_COL_INIT 0x10A9

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_INIT_t; 


/************************************************************************/ 
/* CMD_COL_INIT_DONE */ 
/************************************************************************/ 

#define MSG_CMD_COL_INIT_DONE 0x10Aa

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_INIT_DONE_t; 


/************************************************************************/ 
/* CMD_COL_JUST_GET_POS */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUST_GET_POS 0x10Ab

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUST_GET_POS_t; 


/************************************************************************/ 
/* CMD_COL_JUST_MOVE */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUST_MOVE 0x10Ac

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUST_MOVE_t; 


/************************************************************************/ 
/* CMD_COL_JUST_MOVNOT_POS */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUST_MOVNOT_POS 0x10Ad

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUST_MOVNOT_POS_t; 


/************************************************************************/ 
/* CMD_COL_JUST_MOVED */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUST_MOVED 0x10Ae

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUST_MOVED_t; 


/************************************************************************/ 
/* CMD_COL_JUST_POS */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUST_POS 0x10Af

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUST_POS_t; 


/************************************************************************/ 
/* CMD_COL_JUSTAGE */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUSTAGE 0x10b0

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUSTAGE_t; 


/************************************************************************/ 
/* CMD_COL_JUSTAGEND */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUSTAGEND 0x10b1

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUSTAGEND_t; 


/************************************************************************/ 
/* CMD_COL_JUSTAGENDED */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUSTAGENDED 0x10b2

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUSTAGENDED_t; 


/************************************************************************/ 
/* CMD_COL_JUSTAGSTARTED */ 
/************************************************************************/ 

#define MSG_CMD_COL_JUSTAGSTARTED 0x10b3

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_JUSTAGSTARTED_t; 


/************************************************************************/ 
/* CMD_COL_LAMP_OFF */ 
/************************************************************************/ 

#define MSG_CMD_COL_LAMP_OFF 0x10B4

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_LAMP_OFF_t; 


/************************************************************************/ 
/* CMD_COL_LAMP_ON */ 
/************************************************************************/ 

#define MSG_CMD_COL_LAMP_ON 0x10B5

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_LAMP_ON_t; 


/************************************************************************/ 
/* CMD_COL_LIFECHECK */ 
/************************************************************************/ 

#define MSG_CMD_COL_LIFECHECK 0x10B6

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_LIFECHECK_t; 


/************************************************************************/ 
/* CMD_COL_LIFECHECK_DONE */ 
/************************************************************************/ 

#define MSG_CMD_COL_LIFECHECK_DONE 0x10B7

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_LIFECHECK_DONE_t; 


/************************************************************************/ 
/* CMD_COL_PARA */ 
/************************************************************************/ 

#define MSG_CMD_COL_PARA 0x10B8

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_PARA_t; 


/************************************************************************/ 
/* CMD_COL_PARA_ACK */ 
/************************************************************************/ 

#define MSG_CMD_COL_PARA_ACK 0x10B9

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_PARA_ACK_t; 


/************************************************************************/ 
/* CMD_COL_MOVE */ 
/************************************************************************/ 

#define MSG_CMD_COL_MOVE 0x10Ba

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_MOVE_t; 


/************************************************************************/ 
/* CMD_COL_MOVED */ 
/************************************************************************/ 

#define MSG_CMD_COL_MOVED 0x10Bb

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_MOVED_t; 


/************************************************************************/ 
/* CMD_COL_STOP */ 
/************************************************************************/ 

#define MSG_CMD_COL_STOP 0x10Bc

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_STOP_t; 


/************************************************************************/ 
/* CMD_COL_STOP_DONE */ 
/************************************************************************/ 

#define MSG_CMD_COL_STOP_DONE 0x10Bd

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_STOP_DONE_t; 


/************************************************************************/ 
/* CMD_COL_SWITCHED_OFF */ 
/************************************************************************/ 

#define MSG_CMD_COL_SWITCHED_OFF 0x10Be

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_SWITCHED_OFF_t; 


/************************************************************************/ 
/* CMD_COL_SWITCHED_ON */ 
/************************************************************************/ 

#define MSG_CMD_COL_SWITCHED_ON 0x10bf

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_SWITCHED_ON_t; 


/************************************************************************/ 
/* CMD_COL_WARNING */ 
/************************************************************************/ 

#define MSG_CMD_COL_WARNING 0x10c0

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_WARNING_t; 


/************************************************************************/ 
/* CMD_COL_ASYM_MOVE */ 
/************************************************************************/ 

#define MSG_CMD_COL_ASYM_MOVE 0x10c1

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_ASYM_MOVE_t; 


/************************************************************************/ 
/* CMD_COL_ASYM_MOVDONE */ 
/************************************************************************/ 

#define MSG_CMD_COL_ASYM_MOVDONE 0x10c2

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_ASYM_MOVDONE_t; 


/************************************************************************/ 
/* CMD_COL_ROT */ 
/************************************************************************/ 

#define MSG_CMD_COL_ROT 0x10c3

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_ROT_t; 


/************************************************************************/ 
/* CMD_COL_ROT_DONE */ 
/************************************************************************/ 

#define MSG_CMD_COL_ROT_DONE 0x10c4

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_COL_ROT_DONE_t; 

/************************************************************************/ 
/* CMD_COL_ROT_DONE */ 
/************************************************************************/ 

#define MSG_CMD_INITIAL_STOP 0x10c5

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_INITIAL_STOP_t;

/************************************************************************/ 
/* CMD_DETECTOR_SYNC */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_SYNC 0x10F0

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_SYNC_t; 


/************************************************************************/ 
/* CMD_DETECTOR_ABORT */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_ABORT 0x10F1

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_ABORT_t; 


/************************************************************************/ 
/* CMD_DETECTOR_GetData */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_GetData 0x10F2

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_GetData_t; 


/************************************************************************/ 
/* CMD_DETECTOR_SetmAs */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_SetmAs 0x10F3

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_SetmAs_t; 


/************************************************************************/ 
/* CMD_DETECTOR_NoData */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_NoData 0x10F4

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_NoData_t; 


/************************************************************************/ 
/* CMD_DETECTOR_XrayButton */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_XrayButton 0x10F5

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_XrayButton_t; 


/************************************************************************/ 
/* CMD_DETECTOR_StartHoming */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_StartHoming 0x10F6

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_StartHoming_t; 


/************************************************************************/ 
/* CMD_DETECTOR_HomingDelay */ 
/************************************************************************/ 

#define MSG_CMD_DETECTOR_HomingDelay 0x10F7

typedef struct 
{ 

}__attribute__ ((packed)) Msg_CMD_DETECTOR_HomingDelay_t; 


/************************************************************************/ 
/* MSG_XCS_SEND */ 
/************************************************************************/ 

#define MSG_XCS_SEND 0xa000

typedef struct 
{ 

}__attribute__ ((packed)) MSG_XCS_SEND_t; 


/************************************************************************/ 
/* MSG_XCS_RECV */ 
/************************************************************************/ 

#define MSG_XCS_RECV 0xa001

typedef struct 
{ 

}__attribute__ ((packed)) MSG_XCS_RECV_t; 


/************************************************************************/ 
/* MSG_XCS_SEND_ERROR */ 
/************************************************************************/ 

#define MSG_XCS_SEND_ERROR 0xa002

typedef struct 
{ 

}__attribute__ ((packed)) MSG_XCS_SEND_ERROR_t; 


/************************************************************************/ 
/* MSG_RECV_ERROR */ 
/************************************************************************/ 

#define MSG_RECV_ERROR 0xa003

typedef struct 
{ 

}__attribute__ ((packed)) MSG_RECV_ERROR_t; 

/************************************************************************/ 
/* MSG_CMD_GEN_GET */ 
/************************************************************************/ 

#define MSG_CMD_GEN_GET 0x1101

typedef struct{
	unsigned char info_id;//CAN_GET_ENUM
	unsigned char dummy[6];
} __attribute__ ((packed)) Msg_CMD_GEN_GET_t; 

/************************************************************************/ 
/* MSG_CMD_GEN_TEST */ 
/************************************************************************/
#define MSG_CMD_GEN_TEST 0x1102
typedef struct{

}Msg_CMD_GEN_TEST_t; //same as CAN_TEST_STRUCT

/************************************************************************/ 
/* MSG_CMD_GEN_MAIN_PULSE */ 
/************************************************************************/
#define MSG_CMD_GEN_MAIN_PULSE 0x1103
typedef struct{

}Msg_CMD_GEN_MAIN_PULSE_t; //same as CAN_MAIN_PULSE_STRUCT

/************************************************************************/ 
/* MSG_CMD_GEN_CONFIG */ 
/************************************************************************/
#define MSG_CMD_GEN_CONFIG 0x1104
typedef struct{

}Msg_CMD_GEN_CONFIG_t; //same as CAN_CONFIG_STRUCT

/************************************************************************/ 
/* MSG_CMD_GEN_ADJUST */ 
/************************************************************************/
#define MSG_CMD_GEN_ADJUST 0x1105
typedef struct{

}Msg_CMD_GEN_ADJUST_t; //same as CAN_ADJUST_STRUCT

/************************************************************************/ 
/* MSG_CMD_PRXRAY_ON */ 
/************************************************************************/
#define MSG_CMD_PRXRAY_ON 0x1106

/************************************************************************/
/* MSG_CMD_GEN_LIFECHECK_TIMEOUT */ 
/************************************************************************/
#define MSG_CMD_GEN_LIFECHECK_TIMEOUT 0x1107

/************************************************************************/
/* MSG_CMD_GEN_CONFIGDONE */
/************************************************************************/
#define MSG_CMD_GEN_CONFIGDONE 0x1108
typedef struct{
	unsigned char config_status;
}MSG_CMD_GEN_CONFIGDONE_t; //same as CAN_CONFIGDONE_STRUCT

/************************************************************************/
/* MSG_CMD_GEN_ACT_DATA */
/************************************************************************/
#define MSG_CMD_GEN_ACT_DATA 0x1109

typedef struct{
	unsigned char state;//MAMMO_MCB_STATE_ENUM
	unsigned char dummy[5];
}GEN_ACT_STATE_STRUCT;

typedef struct{
	unsigned char reason;//MAMMO_MCB_BLOCK_REASON_ENUM
	unsigned char dummy[5];
}GEN_ACT_BLOCK_STRUCT;

typedef struct{
	unsigned char focus_id;//MAMMO_MCB_FOCUS_TYPE_ENUM
	unsigned char enable;
	unsigned short basic_heating;
	unsigned short max_power;
}GEN_ACT_FOCUS_STRUCT;

typedef struct{
	unsigned char focus_id;//MAMMO_MCB_FOCUS_TYPE_ENUM
	unsigned short bias_v;
}GEN_ACT_BIAS_STRUCT;

typedef struct{
	unsigned short off_kv;
	unsigned short max_kv;
	unsigned short min_kv;
}GEN_ACT_KV_STRUCT;

typedef struct{
	unsigned int pulse;
	unsigned char dummy[2];
}GEN_ACT_PULSE_STRUCT;

typedef struct{
	unsigned char arc_num;
	unsigned char dummy[5];
}GEN_ACT_ARC_STRUCT;

typedef struct{
	unsigned char grid;//MAMMO_MCB_GRID_TYPE_ENUM
	unsigned char dummy[5];
}GEN_ACT_GRID_STRUCT;

typedef struct{
	unsigned int timestamp;
	unsigned short version;
}GEN_VERSION_CORE_STRUCT;

typedef struct{
	unsigned char string[5];//"VA00E"
	unsigned char dummy;
}GEN_VERSION_STRUCT;

typedef struct{
	unsigned char info_id;//CAN_GET_ENUM
		union{
			GEN_ACT_STATE_STRUCT state;
			GEN_ACT_BLOCK_STRUCT reason;
			GEN_ACT_FOCUS_STRUCT focus_info;
			GEN_ACT_KV_STRUCT    kv_info;
			GEN_ACT_BIAS_STRUCT  focus_bias;
			GEN_ACT_PULSE_STRUCT pulse;
			GEN_ACT_ARC_STRUCT   arc;
			GEN_ACT_GRID_STRUCT  grid;
			GEN_VERSION_CORE_STRUCT   core;
			GEN_VERSION_STRUCT   boot;
			GEN_VERSION_STRUCT   fw;
			GEN_VERSION_STRUCT   sw;
		}sig_un;
}MSG_CMD_GEN_ACT_DATA_t; //same as CAN_ACT_STRUCT

#endif //_MCSTTELEGRAM_H_
//end of file

