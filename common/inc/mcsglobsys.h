/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: mcsglobsys.h
 * Revision: 1.0
 * Brief Description:
 *       Global definition for system's task control.
 * Change List:
 * Revision: 1.0 2011-12-12 YZM
 * Create this file.
 * ******************************************************************/
#ifndef _MCSGLOBSYS_H_
#define _MCSGLOBSYS_H_

#define REPORTERROR printf("Error: Line %d in File %s Function:%s \n",__LINE__,__FUNCTION__,__FILE__)

//define the data type
typedef signed char     alt_8;
typedef unsigned char   alt_u8;
typedef signed short    alt_16;
typedef unsigned short  alt_u16;
typedef signed long     alt_32;
typedef unsigned long   alt_u32;


#define OK		0
#define NOT_OK	1

#define FLAG_YES      1
#define FLAG_NO       0

/*Define all the to be used APID for registrate on the AXNROOT for all the 
 * subcomponents.
 * */
#define MCS_AP_MIN                0x50
#define MCS_AP_GENERATOR          0x50
#define MCS_AP_AWS                0x51
#define MCS_AP_IO_EXTENTION       0x52
#define MCS_AP_COLLIMATOR         0x53
#define MCS_AP_LCD_DISP           0x54
#define MCS_AP_COMPRESSION        0x55
#define MCS_AP_TABLE              0x56
#define MCS_AP_MOTIONCONTROL      0x57
#define MCS_AP_ACQ                0x58
#define MCS_AP_WEB                0x59
#define MCS_AP_MAX                0x59
#define MCS_AP_CHECK      0x10

#define TEST_ONE 0x01
#define TEST_ALL 0x02
#define TEST_READY     0x10
#define TEST_NOT_READY 0x11


extern unsigned char maiBoxManagerType;

#define MAIBOX_MANAGER_SYSLIB  0x01
#define MAIBOX_MANAGER_AXNROOT  0x02

#define FUNCTIONGROUP1 1

#define MCU_MSG_RANGE       0x11

#define MSG_ENDPOINTID_CHECKTASK   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x11)
#define MSG_ENDPOINTID_GEN_IF      (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x12)
#define MSG_ENDPOINTID_IOCONTROL   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x13)
#define MSG_ENDPOINTID_AWS         (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x14) 
#define MSG_ENDPOINTID_ACQ         (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x15)
#define MSG_ENDPOINTID_MOTIONCONTROL   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x16)
#define MSG_ENDPOINTID_COMASTERSRV   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x17)
#define MSG_ENDPOINTID_LCD_DISPLAY   (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x18)
#define MSG_ENDPOINTID_WEB         (MSG_ENDPOINTID_RANGE(MCU_MSG_RANGE) + 0x19)
/*Following definition mainly for the subcomponents' status recore in the 
 * data flag
 * */
#define SUB_STATUS_GENERATOR        0x0001
#define SUB_STATUS_AWS              0x0002
#define SUB_STATUS_IO_EXTENTION     0x0004
#define SUB_STATUS_COLLIMATOR       0x0008
#define SUB_STATUS_LCD_DISP         0x0010
#define SUB_STATUS_COMPRESSION      0x0020
#define SUB_STATUS_TABLE            0x0040
#define SUB_STATUS_MOTION           0x0080
#define SUB_STATUS_ACQ              0x0100

#define SUB_STATUS_ALL              0x0185

#define BLOCKED_ALL_MASK            0xFFFFFFFF

/*Following definition mainly for the timer
 * */
#define MY_PULSE_CODE   _PULSE_CODE_MINAVAIL
#define MAX_TIMER                  20  //maximum of 20 timerout one time
#define TIMER_ID_COM_START         0x01
#define TIMER_ADD_FAIL             0xFE

#define TIMER_STATUS_RUNING        0x01
#define TIMER_STATUS_PAUSE         0x02
#define TIMER_STATUS_STOP          0x03
#define TIMER_TIMEOUT_NOT_STOP     0x80 

//the timer interval is 10ms
#define TIMER_1s                   1000
#define TIMER_2s                   2000
#define TIMER_10s                  10000
#define TIMER_100ms                100
#define TIMER_200ms                200

/*Button related code and its status definition
 * */
//button id for the ucbuttonid
#define BUTTON_ARM_RIGHT_ID	    		0x00000001
#define BUTTON_ARM_LEFT_ID				0x00000002
#define BUTTON_TABLE_UP_ID				0x00000004
#define BUTTON_TABLE_DOWN_ID			0x00000008
#define BUTTON_VERTICAL_UP_ID	  	    0x00000010
#define BUTTON_VERTICAL_DOWN_ID			0x00000020
#define BUTTON_EXPOSURE_ID	    		0x00000040

#define BUTTON_TABLE_ACQ                   0x10

#define BUTTON_TOATOL_NUMBER              7
#define BUTTON_NUMBER                     18
#define BUTTON_PRESSED                    1
#define BUTTON_RELEASED                   0
#define BUTTON_UNDEFINED                  0xFF
#define BUTTON_CHANGE_YES              1
#define BUTTON_CHANGE_NO               0
#define BUTTON_CHANGE_2CHECK           2
//button status for the ucparameter
#define BUTTON_ON                          0x01
#define BUTTON_OFF                         0x02

/*Following definition mainly focus on the button scanning
 * */
#define BUTTON_LINE_SELECTION_ALL  0x00070000
#define BUTTON_LINE0_SELECTION     0x00020000
#define BUTTON_LINE1_SELECTION     0x00040000
#define BUTTON_LINE2_SELECTION     0x00010000

#define BUTTON_IDLE 0
#define BUTTON_ON 1
#define BUTTON_OFF -1
#define BUTTON_LINES 3
#define BUTTON_COLLUMN 6

const unsigned long keyValueMask[BUTTON_COLLUMN] = 
{0x00000100, 0x00000200, 0x00000400, 0x00000800, 0x00001000, 0x00002000};

const unsigned char Button_Key_ID[BUTTON_NUMBER]=
{0, BUTTON_TABLE_DOWN_ID, BUTTON_ARM_LEFT_ID, 0,   BUTTON_VERTICAL_DOWN_ID,   0,
 0, BUTTON_TABLE_UP_ID, BUTTON_ARM_RIGHT_ID,  0, BUTTON_VERTICAL_UP_ID, 0,
 BUTTON_EXPOSURE_ID, 0, 0,                   0,                    0,                       BUTTON_EXPOSURE_ID};


typedef enum      
{
   ACQ_STATE_START                    = 0x00,
   ACQ_STATE_READY4BUTTON             = 0x01,
   ACQ_STATE_WAIT_EXDATA              = 0x02,
   ACQ_STATE_WAIT_EXDATA_ACCEPT       = 0x03,
   ACQ_STATE_WAIT_EXDATA_CHANGED      = 0x04,
   ACQ_STATE_WAIT_PREP_DONE           = 0x05,
   ACQ_STATE_WAIT_XRAY_ON             = 0x06,
   ACQ_STATE_WAIT_XRAY_OFF            = 0x07,
   ACQ_STATE_WAIT_EXPOSURE_DONE       = 0x08,
   ACQ_STATE_WAIT_EXP_CANCEL_DONE     = 0x09,
   ACQ_STATE_WAIT_ACT_EX_DATA         = 0x0A,
   
   ACQ_STATE_UNDEF           = 0x0B
}
acq_state_type;

/*the type to contain the status of exposure data accepted or not
 * */
typedef union  
   {
   struct
      {
      unsigned bt_generator                    : 1;  //  0 - 0x00000001 // MCS_AP_GENERATOR
      unsigned bt_AWS                          : 1;  //  1 - 0x00000002 // MCS_AP_AWS
      unsigned bt_IO_Extension                 : 1;  //  2 - 0x00000004 // MCS_AP_IO_EXTENTION
      unsigned bt_collimator                   : 1;  //  3 - 0x00000008 // MCS_AP_COLLIMATOR 
      unsigned bt_lcd_display                  : 1;  //  4 - 0x00000010 // MCS_AP_LCD_DISP
      unsigned bt_compression                  : 1;  //  5 - 0x00000020 //SUB_STATUS_COMPRESSION
      unsigned bt_table                        : 1;  //  6 - 0x00000040 //MCS_AP_TABLE
      unsigned bt_motion                       : 1;  //  7 - 0x00000080 //MCS_AP_MOTIONCONTROL
      //if add a new item, the value "ALL_ACCEPTED" should be modified too!
      }
      s_detail;       // Detaliere Bitfeld Maske
   alt_u32 ul_all;    // Transport Verpackung
  } ExDataAcceptedMask_t;
#define ALL_ACCEPTED   0x85//0x7F //if add the subcomponent above, this value should be modified too

/*Following status index is used for Acquistion mode only
 * */
#define READY_4_EXPOSURE       0
#define END_4_EXPOSURE         1
#define CANCELL_4_EXPOSURE     2
#define MAX_PHASE_4_EXPSURE    3

/*Following status index is used for Check_Task mode only
 * */
#define CHECK_INDEX_INIT_DONE        0
#define CHECK_INDEX_RESET_DONE       1
#define CHECK_INDEX_PREP_DONE        2
#define CHECK_INDEX_MAX              3

/*Act exposure data type definition, used to differentiate different module's feedback
 * */
typedef union  
   {
   struct
      {
      unsigned bt_generator                    : 1;  //  0 - 0x00000001 // FEEDBACK_FROM_GENERATOR
      unsigned bt_table                        : 1;  //  1 - 0x00000002 // FEEDBACK_FROM_TABLE
      unsigned bt_dose                         : 1;  //  2 - 0x00000004 // FEEDBACK_FROM_DOSE
      unsigned bt_collimator                   : 1;  //  3 - 0x00000008 // FEEDBACK_FROM_COLLIMATOR 
      unsigned bt_exposure                     : 1;  //  4 - 0x00000010 // FEEDBACK_FROM_EXPOSURE            
      //if add a new item, the value "ALL_ACCEPTED" should be modified too!
      }
      s_detail;       // Detaliere Bitfeld Maske
   alt_u32 ul_all;    // Transport Verpackung
  } ActExDataMask_t;
#define ALL_ACT_EX_DATA   0x1F //if add the subcomponent above, this value should be modified too

#define INDEX_ACT_EX_DATA_MIN              1
#define INDEX_ACT_EX_DATA_GEN              1
#define INDEX_ACT_EX_DATA_TABLE            2
#define INDEX_ACT_EX_DATA_DOSE             3
#define INDEX_ACT_EX_DATA_EXPOSURE         4
#define INDEX_ACT_EX_DATA_COLLIMATOR       5
#define INDEX_ACT_EX_DATA_MAX              5
/*Define the timer status for the Check_Task
 * */
#define  CHTWAITBLOCKED_TIMER      0
#define  CHTTIMER_MAX              1

typedef enum      
{
   TIMER_RUNNING                      = 0x00,
   TIMER_STOPPED                      = 0x01,
      
   TIMER_STATE_UNDEF           = 0x0F
}
timer_state_type;

#endif //_MCSGLOBSYS_H_
