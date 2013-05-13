/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: mcsglobsys.h
 * Revision: 1.0
 * Brief Description:
 *       Definition of all the data structure of the transfered parameters in
 *       one module internal
 * Change List:
 * Revision: 1.0 2011-12-12 YZM
 * Create this file.
 * ******************************************************************/
#ifndef _INTTELPARAMETERTRANSFER_H_
#define _INTTELPARAMETERTRANSFER_H_

/* This structure manly used for transfer the APID information to 
 * Sending task when one subcomponent want to log on to the system
 * */
typedef struct cmd_int_init_par_t_struct
{
    unsigned char ucSendAPID;
}cmd_int_init_par_t;

typedef struct cmd_int_state_set_par_t_struct
{
    unsigned int state2Be;
}cmd_int_state_set_par_t;


typedef struct MCS_timer_t_struct
{
    unsigned int uiProcessAPID;
    unsigned int uiIntertimerID;
    unsigned int uitimer_count; //unite is 10ms
    unsigned char uctimer_status;
}MCS_timer_t;

typedef struct State_Change_t_struct
{
    e_state_type stateModified;
}State_Change_t;

/*Following structure definition is used for the Actual data after exposure,
 * after the exposure, all subcomponents will send this feedback to Acquistion_Task
 * and acquisition task will integrate these data into one telegram of 
 * "CMD_ACT_EX_DATA_ADVANCED" and send to AWS.
 * */
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
  unsigned int pre_fil_mA;
  unsigned int main_fil_mA;
  unsigned char Arc_Status;
}__attribute__ ((packed)) Msg_act_ex_data_GEN_t; 
/*Table used data feedback after exposure
 * */
typedef struct 
{ 
  alt_32   ActAngle;
  alt_32   Stereo_ActAngle;
  alt_u16   Compression_Force;
  alt_u16   Compression_Thickness;
  alt_u16   Table_ID;
  alt_u16   Paddle_ID;
  alt_u16   Used_Table_Flag;
  alt_u16   Used_Paddle_Flag;
  alt_u16   SID;
  alt_u16   SOD;
  alt_u16   usedMagFactor;
}__attribute__ ((packed)) Msg_act_ex_data_Table_t; 
/*Actual dose value feedback after exposure
 * */
typedef struct 
{ 
  alt_u32   EDAK_prep;
  alt_u32   EDAK_main;
  alt_u32   AGD_prep;
  alt_u32   AGD_main;
}__attribute__ ((packed)) Msg_act_ex_data_Dose_t;
/*Actual exposure state feedback after exposure
 * */
typedef struct 
{ 
  alt_u8    AcqIndex;
  alt_u16   AcqResult;
}__attribute__ ((packed)) Msg_act_ex_data_Exposure_t;
/*Actual collimator value feedback after exposure
 * */
typedef struct 
{ 
  alt_u16   InnerSizeX;
  alt_u16   InnerSizeY;
  alt_16   OffsetX;
}__attribute__ ((packed)) Msg_act_ex_data_Collimator_t;

/*Define the X-rays status structure
 * */
typedef struct 
{ 
  alt_u8    Xray_Button;
  alt_u8    Xray_On;
  alt_u16   Xray_Stop_Reason;
}__attribute__ ((packed)) Xray_Status_t;
typedef enum
{
    E_XRAY_BUTTON      = 0,
    E_XRAY_ON          = 1,
    E_XRAY_STOP_REASON = 2
}Index_Xray_Status;

/*Following structure is used for the telegram CMD_ACT
 * */

/*Following structure is used for store the table information
 * */
typedef struct  
{
   alt_u8    tableID;
   alt_u8    mag_factor;
   alt_u8    tableFlag;
}__attribute__ ((packed)) table_act_data_t;

/*Following structure is used for store the paddle information
 * */
typedef struct  
{
   alt_u8    paddleID;
   alt_u8   paddleFlag;
   alt_u16   inner_X;
   alt_u16   inner_Y;
}__attribute__ ((packed)) paddle_act_data_t;

typedef struct _opcom_t {
    alt_u8  reached;    /* ture if reached, otherwise false */
    alt_u8  blank;      /* no use */
    alt_u16 force;      /* compression force, 1 bit per 0.1N */
    alt_u16 thickness;  /* compression thickness, 1 bit per 1mm */
}__attribute__ ((packed)) opcom_t;

typedef struct {
	alt_u16 force;
	alt_u16 thickness;
}__attribute__ ((packed)) compression_t;

typedef union
{
   alt_u8                Xray_Button;
   alt_u8                Xray_On;
   alt_u8                Heat_Unit;
   alt_u8                system_state;
   alt_32                Swivel_Angle;
   table_act_data_t      table_data;
   paddle_act_data_t     paddle_data;
   opcom_t               opcom;
   compression_t         compression;

}__attribute__ ((packed)) cmd_act_data_t;


/*Inorder to decrease the function number, we merge some same function into one function
 * and, then we need this structure to be the index for data operation.
 * This structure mainly used in the Motion_control module.
 * */
typedef enum
{
    ACT_Index_MIN        = 0,
    ACT_Index_Table      = 1,
    ACT_Index_Paddle     = 2,
    ACT_Index_MAX
}Index_parameter_set;

/*Following structure is used for internaly purpose, when one module wants to
 * send a message to external, such as CAN, IO, RS232.., it will use this structure
 * to transfer the message to the corresponding interface, and the interface will
 * take the responsibility to translate this messag to the right format.
 * */
#define OUT_MESSAGE_MAX_DATA  8
typedef struct Out_Message_struct_t
{   
   alt_u16   messageID;
   alt_u8    dataSize;
   void*     dataBuffer;
}__attribute__ ((packed)) Out_Message_t;

typedef enum
{
    MSG_Arm_Angle                 = 0,
    MSG_Compres_Thickness         = 1,
    MSG_Compres_force             = 2,
    MSG_Compression               = 3,
    MSG_ID_MAX
}internal_Message_ID_t;

#endif //_INTTELPARAMETERTRANSFER_H_
