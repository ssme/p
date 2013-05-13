//---------------------------------------------------------------------------------------------
// Copyright (c) 2007 by
// Siemens Medical Solutions
// All Rights Reserved
//---------------------------------------------------------------------------------------------
//
// Filename: axcs_flrad_enum.h
// Version:  33 20-Sep-2011
// 
// This include describes the additional interface between the TUI for Fluoro/Rad and the XCU.
// It is the more detailed description of the AXCS.
//---------------------------------------------------------------------------------------------
//
// 07-Sep-2006 Hopf 00
//     initial version
// 19-Sep-2006 Hopf 01
//     added define AXCS_SERIES_SHOT, added defines for dominants
// 25-Sep-2006 Hopf 02
//     group 501 .. 599 divided into two subgroups 501 .. 550 and 551 .. 599
// 29-Sep-2006 Hopf 03
//     moved AXCS_DOSE_SENS, AXCS_EXP_CORRECTION and AXCS_ACQ_FILTER from group 500 to 600
//     removed defines AXCS_DISP_DOSE_SENS, AXCS_DISP_EXP_CORRECTION and AXCS_DISP_ACQ_FILTER
//     added new defines for RAD
// 05-Oct-2006 Hopf 04
//     added defines for displaying dose and dominant
// 09-Oct-2006 Hopf 05
//     removed define AXCS_DISP_WORKPLACE, added more parameter defines for
//     different RAD techniques
// 10-Oct-2006 Hopf 06
//     changes according techniques
// 15-Nov-2006 Hopf 07
//     removed define AXCS_DISP_DOSE
//     added defines AXCS_DISP_TOMO_ICO and AXCS_DISP_PERI_STEP_ICO
//     removed define AXCS_DOMINANT_NONE, added defines AXCS_WALL_NONE and AXCS_TABLE_NONE
//     added define AXCS_NEXT_FRAMERATE
// 04-Dec-2006 Hopf 08
//     added defines AXCS_FLUORO_CURVE_NONE, AXCS_SERIES_PLUS and AXCS_SERIES_MINUS
// 15-Feb-2007 Hopf 09
//     AXCS_SPLIT_MON moved from state function to event function group (CHARM 180338)
//     updated definitions for NRF
// 19-Apr-2007 Hopf 10
//     changed parameter definition for tracking functions
// 20-Jun-2007 Hopf 11
//     added definitions for AXCS_DISP_LONG_MOVE and AXCS_DISP_LAT_MOVE
// 01-Aug-2007 Hopf 12
//     added additional parameter value AXCS_MOVE_NONE for movement icon
// 06-Nov-2007 Hopf 13
//     added additional parameter values AXCS_TABLE_CORRECT_6 ... AXCS_TABLE_CORRECT_8
//     added function ids AXCS_TOMO_LAYER_PLUS and AXCS_TOMO_LAYER_MINUS
// 19-Nov-2007 Hopf 14
//     added definitions for Iconos M/MD plus
// 13-Dec-2007 Hopf 15
//    added parameter value AXCS_MODE_NONE for function AXCS_OPERATING_MODE
//    removed AXCS_TECHNIQUE definitions
// 21-Apr-2008 Hopf 16
//    renamed AXCS_RESTORE_OGP to AXCS_OGP_UNDO
//    renamed AXCS_TOMO_CHANGE_UNDO to AXCS_PAGE_REMOTE_CTRL
//    added new function ids AXCS_RESET_DATA_NEW_PAT, AXCS_TOMO_ANGLE,
//    AXCS_RECALL_REF_ONE_MON, AXCS_HIGH_SPEED_FLUORO, AXCS_REVERSE_TABLE_MOVEM,
//    AXCS_FILMING_FORMAT_FULL, AXCS_FILMING_FORMAT_VERT2, AXCS_FILMING_FORMAT_VERT3,
//    AXCS_FILMING_FORMAT_VERT4, AXCS_DISP_PARK_POS
//    removed parameter AXCS_FORMAT_3VER and AXCS_FORMAT_4VER from
//    func id AXCS_FORMAT_SEGMENTATION
// 07-May-2008 Hopf 17
//    added function id AXCS_DISP_DAP_VALUE
//    additional parameter values for AXCS_DISP_GRID
// 02-Jul-2008 Hopf 18
//    changed value for AXCS_DISP_DAP_VALUE, added defines AXCS_DISP_HU_VALUE,
//    AXCS_DISP_MAS_VALUE, AXCS_DISP_MS_VALUE
// 18-Nov-2008 Hopf 19
//    added definitions for AXCS_DISP_DET_ORIENTATION, AXCS_RAD_PARK_POS and
//    AXCS_TABCARD_ENABLING, added new parameter for AXCS_FLUORO_UI
// 01-Dec-2008 Hopf 20
//    removed func id AXCS_TOMO_MODE, added new parameter for func id AXCS_OPERATING_MODE
//    (button 'tomo mode' now part of 'operating mode' radio group)
//    additional parameter for AXCS_DISP_DET_ORIENTATION
// 13-Jan-2009 Hopf 21
//    added func id AXCS_HUD
// 24-Mar-2009 Hopf 22
//    added func id AXCS_TUBE_LOAD
// 21-Apr-2009 Hopf 23
//    deleted func id AXCS_LABEL_LEFT and AXCS_LABEL_RIGHT, added func id AXCS_LABEL_LR
// 13-May-2009 Hopf 24
//    added func ids AXCS_ORTHO_STARTPOS, AXCS_ORTHO_ENDPOS, AXCS_ORTHO_STARTPOS_ACC,
//    AXCS_ORTHO_ENDPOS_ACC, AXCS_ORTHO_TOD;
//    added parameter values AXCS_TABCARD_RAD_ORTHO_DISABLE and AXCS_TABCARD_RAD_ORTHO_ENABLE
//    for func id  AXCS_TABCARD_ENABLING
// 20-May-2009 Hopf 25
//    added func id AXCS_PLANE
// 13-Apr-2010 Hopf 26
//    added func id AXCS_HIGH_SPEED_PERI and AXCS_TUBE_ROT_DETENT
// 15-Apr-2010 Hopf 27
//    changed func id and parameter values for AXCS_TUBE_ROT_DETENT
// 26-Apr-2010 Hopf 28
//    new func ids AXCS_MAGNIFICATION, AXCS_MAGNIFICATION_UNDO for magnification
//    new parameter values for AXCS_TABCARD_ENABLING
// 11-Jun-2010 Hopf 29
//    new func id AXCS_LABEL_CONFIG
// 23-Jul-2010 Hopf 30
//    enhancement of range for func id AXCS_DISP_FORMAT_SEGMENT and AXCS_DISP_GRID
// 28-Oct-2010 Hopf 31
//    new func ids AXCS_BLOCK_RADIATION, AXCS_BLOCK_MOVEMENT, AXCS_DISP_BLOCK_RADIATION
//    and AXCS_DISP_BLOCK_MOVEMENT
// 01-Jul-2011 Hopf 32
//    new func ids AXCS_STORE_ENDO and AXCS_SWITCH_INPUT
// 20-Sep-2011 Hopf 33
//    new func id AXCS_RECONNECT_INPUT
//
//---------------------------------------------------------------------------------------------
//

#ifndef  AXCS_FLRAD_ENUM_H
#define  AXCS_FLRAD_ENUM_H

//---------------------------------------------------------------------------------------------
//
// Enumeration of all functions
//
// 101, 102, ...    event functions (e.g. store reference)
//                  101 .. 150: simple event functions
//                  151 .. 199: event functions with 'on' state as long as button is pressed
// 201, 202, ...    state functions
//                  201 .. 250: simple state functions on/off state only, e.g. regulation stop
//                  251 .. 299: state functions with three different states 
// 301, 302, ...    functions with associated group of radio buttons (e.g. zoom format)    
// 501, 502, ...    popup functions with a fixed range of values
//                  501 .. 550: buttons on popup are radio button group
//                  551 .. 599: buttons on popup are no radio button group 
// 601, 602, ...    popup functions with a variable range of values
// 901, 902, ...    function IDs for controlling the UI 
// 1001, 1002, ...  string display values, unit not part of display value (e.g. kV for fluoro)
// 1101, 1102, ...  string display values, unit part of display value (e.g. angle value)
// 1201, 1202, ...  icon display values 
//   
//---------------------------------------------------------------------------------------------
//
typedef  enum  AXCS_FUNC_T_TAG
{
      AXCS_MSG_CONFIRM          = 101,
      AXCS_RESET_FL_ALARM       = 102,
      AXCS_STORE_FL_LOOP        = 103,
      AXCS_OGP_UNDO             = 104,
      AXCS_IMAGE_PLUS           = 105,
      AXCS_IMAGE_MINUS          = 106,
      AXCS_STORE_IMAGE          = 107,
      AXCS_MARK_IMAGE           = 108,
      AXCS_RECALL_REF           = 109,
      AXCS_STORE_REF            = 110,
      AXCS_REPEAT_OGP           = 111,
      AXCS_NEXT_FRAMERATE       = 112,
      AXCS_SERIES_PLUS          = 113,
      AXCS_SERIES_MINUS         = 114,
      AXCS_SPLIT_MON            = 115,
      AXCS_PAGE_REMOTE_CTRL     = 116,
      AXCS_RESTORE_COLLIMATOR   = 117,
      AXCS_RESET_DATA_NEW_PAT   = 118,
      AXCS_ORTHO_STARTPOS       = 119,
      AXCS_ORTHO_ENDPOS         = 120,
      AXCS_MAGNIFICATION_UNDO   = 121,
      AXCS_STORE_ENDO           = 122,
      AXCS_SWITCH_INPUT         = 123,
      
      AXCS_TOMO_LAYER_PLUS      = 151,
      AXCS_TOMO_LAYER_MINUS     = 152,
      
      AXCS_FLIP_HOR             = 201, 
      AXCS_FLIP_VER             = 202,
      AXCS_STOP_XREG            = 203,
      AXCS_ROADMAP              = 204,
      AXCS_LOOP_START_STOP      = 205,
      AXCS_SUB_NAT              = 207,
      AXCS_LOCK_COL             = 208,
      AXCS_REMASK               = 209,
      AXCS_INV_ORIENT_TRANS     = 210,
      AXCS_INV_ORIENT_LONG      = 211,
      AXCS_DVD_RECORDER         = 212,
      AXCS_CARE_POSITION        = 213,
      AXCS_SERIES_SHOT          = 214,
      AXCS_MA_REDUCTION         = 215,
      AXCS_TOP_ALIGNMENT        = 216,
      AXCS_MEASURE_SID          = 217,
      AXCS_MEASURE_SOD          = 218,
      AXCS_MEASURE_TOMO_HEIGHT  = 219,
      AXCS_TOMO_TESTRUN         = 220,
      AXCS_BUCKY_MODE           = 222,
      AXCS_SUPERVISION          = 223,
      AXCS_GRID                 = 224,
      AXCS_ROOM_LIGHT           = 225,
      AXCS_RECALL_REF_ONE_MON   = 226,
      AXCS_HIGH_SPEED_FLUORO    = 227,
      AXCS_REVERSE_TABLE_MOVEM  = 228,
      AXCS_FILMING_FORMAT_FULL  = 229,
      AXCS_FILMING_FORMAT_VERT2 = 230,
      AXCS_FILMING_FORMAT_VERT3 = 231,
      AXCS_FILMING_FORMAT_VERT4 = 232,
      AXCS_HIGH_SPEED_PERI      = 235,
      AXCS_BLOCK_RADIATION      = 236,
      AXCS_BLOCK_MOVEMENT       = 237,
      AXCS_RECONNECT_INPUT      = 238,
      
      AXCS_SID_TRACKING         = 251,
      AXCS_TRACKING_TUBE_DET    = 252,
      AXCS_MAGNIFICATION        = 253,
      
      AXCS_ZOOM_FORMAT          = 301,
      AXCS_FORMAT_SEGMENTATION  = 302,
      AXCS_ORIENTATION          = 303,
      AXCS_OPERATING_MODE       = 304,
      
      AXCS_FLUORO_CURVE         = 501,
      AXCS_FOCUS                = 502,
      AXCS_TUBE_ROT_DETENT      = 503, 
      
      AXCS_DOMINANT_WALL        = 553,     // Parameterwert = 0 in UI_XCU / SH_UI_XCU:
                                           // kein Button im Popup am TUI selektiert
      AXCS_DOMINANT_TABLE       = 554,     // wenn Parameterwerte nicht explizit vorgegeben
      AXCS_LABEL_LR             = 555,     // erhält der kleinste numerische Wert im Popup
                                           // den Parameterwert = 1, der nächste den
                                           // Parameterwert = 2 usw.
      
      AXCS_ACQ_KV               = 601,     // Parameterwert in UI_XCU / SH_UI_XCU ist Listenindex
      AXCS_ACQ_MAS              = 602,     // beginnend mit 1 bis n
      AXCS_ACQ_MS               = 603,     // Parameterwert in SH_UI_XCU = 0:
      AXCS_FRAMERATE            = 604,     // kein Wert der Liste am TUI selektiert
      AXCS_PULSERATE            = 605,
      AXCS_EXAMSET              = 606,
      AXCS_OGP                  = 607,
      AXCS_ACQ_FILTER           = 608,
      AXCS_DOSE_SENS            = 609,
      AXCS_EXP_CORRECTION       = 610,
      AXCS_ALT_OGP              = 611,
      AXCS_TOMO_ANGLE_TIME      = 612,     // list of tomo angle/time combinations
      AXCS_TOMO_ANGLE           = 613,
      AXCS_HUD                  = 614,
      AXCS_TUBE_LOAD            = 615,
      AXCS_ORTHO_TOD            = 616,
      
      AXCS_FLUORO_UI            = 902,
      AXCS_TABCARD              = 903,     // used only internally by XCU
      AXCS_TABCARD_ENABLING     = 904,
      AXCS_RAD_PARK_POS         = 905,
      AXCS_PLANE                = 906,
      AXCS_LABEL_CONFIG         = 907,
      
      AXCS_DISP_FLUORO_KV       = 1001,
      AXCS_DISP_FLUORO_MA       = 1002,
      AXCS_DISP_FLUORO_FILTER   = 1003,
      AXCS_DISP_FLUORO_TIME     = 1004,
      AXCS_DISP_COMPR_LEVEL     = 1005,
      AXCS_DISP_FORMAT          = 1006,
      AXCS_DISP_PERI_STEP       = 1007,
      AXCS_DISP_PATIENT_DATA1   = 1011,    // patient data line 1
      AXCS_DISP_PATIENT_DATA2   = 1012,    // patient data line 2
      AXCS_DISP_PATIENT_POS1    = 1013,    // patient position line 1
      AXCS_DISP_PATIENT_POS2    = 1014,    // patient position line 2  
      AXCS_DISP_MAG_FACTOR      = 1015,
      AXCS_DISP_COL_MODE        = 1016,    // collimator mode: ACSS or Manual
      AXCS_DISP_DAP_VALUE       = 1017,
      AXCS_DISP_HU_VALUE        = 1018,
      AXCS_DISP_MAS_VALUE       = 1019,
      AXCS_DISP_MS_VALUE        = 1020,     
      
      AXCS_DISP_TABLE_TILT      = 1101,
      AXCS_DISP_PROJECTION      = 1102,
      AXCS_DISP_TOMO_LAYER      = 1103,
      AXCS_DISP_TOMO_TIME       = 1104,
      AXCS_DISP_TOMO_ANGLE      = 1105,
      AXCS_DISP_COLLIMATION     = 1106,      
      AXCS_DISP_SID             = 1110,
      AXCS_DISP_GRID_STATUS     = 1111,
      AXCS_DISP_SID_MEAS        = 1112,
      AXCS_DISP_SOD_MEAS        = 1113,
      AXCS_DISP_COL_WIDTH       = 1114,
      AXCS_DISP_COL_HEIGHT      = 1115,
      
      AXCS_DISP_FLUORO_CURVE    = 1201,
      AXCS_DISP_FOCUS           = 1202,
      AXCS_DISP_FORMAT_SEGMENT  = 1203,
      AXCS_DISP_GRID            = 1204,
      AXCS_DISP_TOMO_ICO        = 1205,           
      AXCS_DISP_MOVEMENT        = 1206,
      AXCS_DISP_DOMINANT_WALL   = 1207,
      AXCS_DISP_DOMINANT_TABLE  = 1208,
      AXCS_DISP_PERI_STEP_ICO   = 1209,
      AXCS_DISP_CENTERED        = 1210,
      AXCS_DISP_COL_ROT         = 1211,
      AXCS_DISP_LONG_MOVE       = 1212,
      AXCS_DISP_LAT_MOVE        = 1213,
      AXCS_DISP_PARK_POS        = 1214,
      AXCS_DISP_DET_ORIENTATION = 1215,
      AXCS_ORTHO_STARTPOS_ACC   = 1216,
      AXCS_ORTHO_ENDPOS_ACC     = 1217,
      AXCS_DISP_BLOCK_RADIATION = 1218,
      AXCS_DISP_BLOCK_MOVEMENT  = 1219,

      AXCS_KV_STATUS            = 2048,
      AXCS_DENSITY_STATUS       = 2049,

      AXCS_FUNC_NIL             = 0xFFFF
      
}AXCS_FUNC_T;



#define AXCS_PARAM_NIL  0xFFFF            


//---------------------------------------------------------------------------------------------
// AXCS_MSG_CONFIRM confirm message box
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MSG_CONFIRM_T_TAG
{
   AXCS_MSG_CONFIRM_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_MSG_CONFIRM_T;


//---------------------------------------------------------------------------------------------
// AXCS_RESET_FL_ALARM reset fluoro alarm
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RESET_FL_ALARM_T_TAG
{
   AXCS_RESET_FL_ALARM_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_RESET_FL_ALARM_T;


//---------------------------------------------------------------------------------------------
// AXCS_STORE_FL_LOOP store fluoro loop
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_STORE_FL_LOOP_T_TAG
{
   AXCS_STORE_FL_LOOP_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_STORE_FL_LOOP_T;


//---------------------------------------------------------------------------------------------
// AXCS_OGP_UNDO undo ogp changes
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_OGP_UNDO_T_TAG
{
   AXCS_OGP_UNDO_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_OGP_UNDO_T;


//---------------------------------------------------------------------------------------------
// AXCS_IMAGE_PLUS image plus
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_IMAGE_PLUS_T_TAG
{
   AXCS_IMAGE_PLUS_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_IMAGE_PLUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_IMAGE_MINUS image minus
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_IMAGE_MINUS_T_TAG
{
   AXCS_IMAGE_MINUS_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_IMAGE_MINUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_SERIES_PLUS series plus
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SERIES_PLUS_T_TAG
{
   AXCS_SERIES_PLUS_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_SERIES_PLUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_SERIES_MINUS series minus
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SERIES_MINUS_T_TAG
{
   AXCS_SERIES_MINUS_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_SERIES_MINUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_SPLIT_MON monitor split
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SPLIT_MON_T_TAG
{
   AXCS_SPLIT_MON_NIL    = AXCS_PARAM_NIL    // no parameter
}AXCS_SPLIT_MON_T;


//---------------------------------------------------------------------------------------------
// AXCS_STORE_IMAGE store image
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_STORE_IMAGE_T_TAG
{
   AXCS_STORE_IMAGE_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_STORE_IMAGE_T;


//---------------------------------------------------------------------------------------------
// AXCS_MARK_IMAGE mark image
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MARK_IMAGE_T_TAG
{
   AXCS_MARK_IMAGE_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_MARK_IMAGE_T;


//---------------------------------------------------------------------------------------------
// AXCS_RECALL_REF recall reference
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RECALL_REF_T_TAG
{
   AXCS_RECALL_REF_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_RECALL_REF_T; 


//---------------------------------------------------------------------------------------------
// AXCS_STORE_REF store reference
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_STORE_REF_T_TAG
{
   AXCS_STORE_REF_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_STORE_REF_T;


//---------------------------------------------------------------------------------------------
// AXCS_REPEAT_OGP repeat organ program
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_REPEAT_OGP_T_TAG
{
   AXCS_REPEAT_OGP_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_REPEAT_OGP_T;


//---------------------------------------------------------------------------------------------
// AXCS_NEXT_FRAMERATE next frame rate
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_NEXT_FRAMERATE_T_TAG
{
   AXCS_NEXT_FRAMERATE_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_NEXT_FRAMERATE_T;


//---------------------------------------------------------------------------------------------
// AXCS_RESTORE_COLLIMATOR restore collimator
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RESTORE_COLLIMATOR_T_TAG
{
   AXCS_RESTORE_COLLIMATOR_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_RESTORE_COLLIMATOR_T;


//---------------------------------------------------------------------------------------------
// AXCS_RESET_DATA_NEW_PAT reset data for new patient
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RESET_DATA_NEW_PAT_T_TAG
{
   AXCS_RESET_DATA_NEW_PAT_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_RESET_DATA_NEW_PAT_T;


//---------------------------------------------------------------------------------------------
// AXCS_ORTHO_STARTPOS ortho start position
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_ORTHO_STARTPOS_T_TAG
{
   AXCS_ORTHO_STARTPOS_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_ORTHO_STARTPOS_T;


//---------------------------------------------------------------------------------------------
// AXCS_ORTHO_ENDPOS ortho end position
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_ORTHO_ENDPOS_T_TAG
{
   AXCS_ORTHO_ENDPOS_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_ORTHO_ENDPOS_T;


//---------------------------------------------------------------------------------------------
// AXCS_MAGNIFICATION_UNDO reset magnification
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MAGNIFICATION_UNDO_T_TAG
{
   AXCS_MAGNIFICATION_UNDO_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_MAGNIFICATION_UNDO_T;


//---------------------------------------------------------------------------------------------
// AXCS_STORE_ENDO
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_STORE_ENDO_T_TAG
{
   AXCS_STORE_ENDO_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_STORE_ENDO_T;


//---------------------------------------------------------------------------------------------
// AXCS_SWITCH_INPUT
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SWITCH_INPUT_T_TAG
{
   AXCS_SWITCH_INPUT_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_SWITCH_INPUT_T;


//---------------------------------------------------------------------------------------------
// AXCS_PAGE_REMOTE_CTRL page wireless remote control
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_PAGE_REMOTE_CTRL_T_TAG
{
   AXCS_PAGE_REMOTE_CTRL_NIL   = AXCS_PARAM_NIL    // no parameter
}AXCS_PAGE_REMOTE_CTRL_T;


//---------------------------------------------------------------------------------------------
// AXCS_TOMO_LAYER_PLUS increase tomo layer
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TOMO_LAYER_PLUS_T_TAG
{
   AXCS_TOMO_LAYER_PLUS_OFF   = 0x0000,    // sent by TUI as soon as  button released again
   AXCS_TOMO_LAYER_PLUS_ON    = 0x0001,    // sent by TUI as soon as button pressed
}AXCS_TOMO_LAYER_PLUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_TOMO_LAYER_MINUS decrease tomo layer
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TOMO_LAYER_MINUS_T_TAG
{
   AXCS_TOMO_LAYER_MINUS_OFF   = 0x0000,    // sent by TUI as soon as  button released again
   AXCS_TOMO_LAYER_MINUS_ON    = 0x0001,    // sent by TUI as soon as button pressed
}AXCS_TOMO_LAYER_MINUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_FLIP_HOR horizontal flip
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FLIP_HOR_T_TAG
{
   AXCS_FLIP_HOR_OFF   = 0x0000,   // horizontal flip OFF
   AXCS_FLIP_HOR_ON    = 0x0001    // horizontal flip ON
}AXCS_FLIP_HOR_T;


//---------------------------------------------------------------------------------------------
// AXCS_FLIP_VER vertical flip
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FLIP_VER_T_TAG
{
   AXCS_FLIP_VER_OFF   = 0x0000,   // vertical flip OFF
   AXCS_FLIP_VER_ON    = 0x0001    // vertical flip ON
}AXCS_FLIP_VER_T;


//---------------------------------------------------------------------------------------------
// AXCS_STOP_XREG regulation stop
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_STOP_XREG_T_TAG
{
   AXCS_STOP_XREG_OFF   = 0x0000,   // regulation stop OFF
   AXCS_STOP_XREG_ON    = 0x0001    // regulation stop ON
}AXCS_STOP_XREG_T;


//---------------------------------------------------------------------------------------------
// AXCS_ROADMAP roadmap
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_ROADMAP_T_TAG
{
   AXCS_ROADMAP_OFF   = 0x0000,   // roadmap OFF
   AXCS_ROADMAP_ON    = 0x0001    // roadmap ON
}AXCS_ROADMAP_T;


//---------------------------------------------------------------------------------------------
// AXCS_LOOP_START_STOP start/stop loop
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_LOOP_START_STOP_T_TAG
{
   AXCS_LOOP_OFF   = 0x0000,   // loop OFF
   AXCS_LOOP_ON    = 0x0001    // loop ON
}AXCS_LOOP_START_STOP_T;


//---------------------------------------------------------------------------------------------
// AXCS_SUB_NAT sub/nat
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SUB_NAT_T_TAG
{
   AXCS_SUB_NAT_OFF   = 0x0000,   // sub/nat OFF
   AXCS_SUB_NAT_ON    = 0x0001    // sub/nat ON
}AXCS_SUB_NAT_T;


//---------------------------------------------------------------------------------------------
// AXCS_LOCK_COL lock collimation
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_LOCK_COL_T_TAG
{
   AXCS_LOCK_COL_OFF   = 0x0000,   // lock collimation OFF
   AXCS_LOCK_COL_ON    = 0x0001    // lock collimation ON
}AXCS_LOCK_COL_T;


//---------------------------------------------------------------------------------------------
// AXCS_REMASK remask
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_REMASK_T_TAG
{
   AXCS_REMASK_OFF   = 0x0000,   // remask OFF
   AXCS_REMASK_ON    = 0x0001    // remask ON
}AXCS_REMASK_T;


//---------------------------------------------------------------------------------------------
// AXCS_INV_ORIENT_TRANS inverse orientation transversal
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_INV_ORIENT_TRANS_T_TAG
{
   AXCS_INV_ORIENT_TRANS_OFF   = 0x0000,   // inverse orientation transversal OFF
   AXCS_INV_ORIENT_TRANS_ON    = 0x0001    // inverse orientation transversal ON
}AXCS_INV_ORIENT_TRANS_T;


//---------------------------------------------------------------------------------------------
// AXCS_INV_ORIENT_LONG inverse orientation longitudinal
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_INV_ORIENT_LONG_T_TAG
{
   AXCS_INV_ORIENT_LONG_OFF   = 0x0000,   // inverse orientation longitudinal OFF
   AXCS_INV_ORIENT_LONG_ON    = 0x0001    // inverse orientation longitudinal ON
}AXCS_INV_ORIENT_LONG_T;


//---------------------------------------------------------------------------------------------
// AXCS_DVD_RECORDER DVD recorder
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_DVD_RECORDER_T_TAG
{
   AXCS_DVD_RECORDER_OFF   = 0x0000,   // DVD recorder OFF
   AXCS_DVD_RECORDER_ON    = 0x0001    // DVD recorder ON
}AXCS_DVD_RECORDER_T;


//---------------------------------------------------------------------------------------------
// AXCS_CARE_POSITION CARE position
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_CARE_POSITION_T_TAG
{
   AXCS_CARE_POSITION_OFF   = 0x0000,   // CARE position OFF
   AXCS_CARE_POSITION_ON    = 0x0001    // CARE position ON
}AXCS_CARE_POSITION_T;


//---------------------------------------------------------------------------------------------
// AXCS_SERIES_SHOT series
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SERIES_SHOT_T_TAG
{
   AXCS_SERIES_SHOT_OFF   = 0x0000,   // series OFF
   AXCS_SERIES_SHOT_ON    = 0x0001    // series ON
}AXCS_SERIES_SHOT_T;


//---------------------------------------------------------------------------------------------
// AXCS_MA_REDUCTION mA reduction
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MA_REDUCTION_T_TAG
{
   AXCS_MA_REDUCTION_OFF   = 0x0000,
   AXCS_MA_REDUCTION_ON    = 0x0001
}AXCS_MA_REDUCTION_T;


//---------------------------------------------------------------------------------------------
// AXCS_TOP_ALIGNMENT top alignment
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TOP_ALIGNMENT_T_TAG
{
   AXCS_TOP_ALIGNMENT_OFF   = 0x0000,
   AXCS_TOP_ALIGNMENT_ON    = 0x0001
}AXCS_TOP_ALIGNMENT_T;


//---------------------------------------------------------------------------------------------
// AXCS_MEASURE_SID measure SID
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MEASURE_SID_T_TAG
{
   AXCS_MEASURE_SID_OFF   = 0x0000,
   AXCS_MEASURE_SID_ON    = 0x0001
}AXCS_MEASURE_SID_T;


//---------------------------------------------------------------------------------------------
// AXCS_MEASURE_SOD measure SOD
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MEASURE_SOD_T_TAG
{
   AXCS_MEASURE_SOD_OFF   = 0x0000,
   AXCS_MEASURE_SOD_ON    = 0x0001
}AXCS_MEASURE_SOD_T;


//---------------------------------------------------------------------------------------------
// AXCS_MEASURE_TOMO_HEIGHT measure tomo height
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MEASURE_TOMO_HEIGHT_T_TAG
{
   AXCS_MEASURE_TOMO_HEIGHT_OFF   = 0x0000,
   AXCS_MEASURE_TOMO_HEIGHT_ON    = 0x0001
}AXCS_MEASURE_TOMO_HEIGHT_T;


//---------------------------------------------------------------------------------------------
// AXCS_TOMO_TESTRUN tomo test run
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TOMO_TESTRUN_T_TAG
{
   AXCS_TOMO_TESTRUN_OFF   = 0x0000,
   AXCS_TOMO_TESTRUN_ON    = 0x0001
}AXCS_TOMO_TESTRUN_T;


//---------------------------------------------------------------------------------------------
// AXCS_BUCKY_MODE bucky mode
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_BUCKY_MODE_T_TAG
{
   AXCS_BUCKY_MODE_OFF   = 0x0000,
   AXCS_BUCKY_MODE_ON    = 0x0001
}AXCS_BUCKY_MODE_T;


//---------------------------------------------------------------------------------------------
// AXCS_SUPERVISION supervision
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SUPERVISION_T_TAG
{
   AXCS_SUPERVISION_OFF   = 0x0000,
   AXCS_SUPERVISION_ON    = 0x0001
}AXCS_SUPERVISION_T;


//---------------------------------------------------------------------------------------------
// AXCS_GRID grid
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_GRID_T_TAG
{
   AXCS_GRID_OFF          = 0x0000,
   AXCS_GRID_ON           = 0x0001
}AXCS_GRID_T;


//---------------------------------------------------------------------------------------------
// AXCS_ROOM_LIGHT room light
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_ROOM_LIGHT_T_TAG
{
   AXCS_ROOM_LIGHT_OFF     = 0x0000,
   AXCS_ROOM_LIGHT_ON      = 0x0001
}AXCS_ROOM_LIGHT_T;


//---------------------------------------------------------------------------------------------
// AXCS_HIGH_SPEED_PERI high speed peri scanning
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_HIGH_SPEED_PERI_T_TAG
{
   AXCS_HIGH_SPEED_PERI_OFF     = 0x0000,
   AXCS_HIGH_SPEED_PERI_ON      = 0x0001
}AXCS_HIGH_SPEED_PERI_T;


//---------------------------------------------------------------------------------------------
// AXCS_BLOCK_RADIATION block radiation
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_BLOCK_RADIATION_T_TAG
{
   AXCS_BLOCK_RADIATION_OFF     = 0x0000,
   AXCS_BLOCK_RADIATION_ON      = 0x0001
}AXCS_BLOCK_RADIATION_T;


//---------------------------------------------------------------------------------------------
// AXCS_BLOCK_MOVEMENT block movement
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_BLOCK_MOVEMENT_T_TAG
{
   AXCS_BLOCK_MOVEMENT_OFF     = 0x0000,
   AXCS_BLOCK_MOVEMENT_ON      = 0x0001
}AXCS_BLOCK_MOVEMENT_T;


//---------------------------------------------------------------------------------------------
// AXCS_RECONNECT_INPUT reconnect input sources
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RECONNECT_INPUT_T_TAG
{
   AXCS_RECONNECT_INPUT_OFF     = 0x0000,
   AXCS_RECONNECT_INPUT_ON      = 0x0001
}AXCS_RECONNECT_INPUT_T;


//---------------------------------------------------------------------------------------------
// AXCS_RECALL_REF_ONE_MON recall reference in case of one monitor only
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RECALL_REF_ONE_MON_T_TAG
{
   AXCS_RECALL_REF_ONE_MON_OFF     = 0x0000,
   AXCS_RECALL_REF_ONE_MON_ON      = 0x0001
}AXCS_RECALL_REF_ONE_MON_T;


//---------------------------------------------------------------------------------------------
// AXCS_HIGH_SPEED_FLUORO high speed fluoro pulse rate
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_HIGH_SPEED_FLUORO_T_TAG
{
   AXCS_HIGH_SPEED_FLUORO_OFF     = 0x0000,
   AXCS_HIGH_SPEED_FLUORO_ON      = 0x0001
}AXCS_HIGH_SPEED_FLUORO_T;


//---------------------------------------------------------------------------------------------
// AXCS_REVERSE_TABLE_MOVEM reverse table movement
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_REVERSE_TABLE_MOVEM_T_TAG
{
   AXCS_REVERSE_TABLE_MOVEM_OFF     = 0x0000,
   AXCS_REVERSE_TABLE_MOVEM_ON      = 0x0001
}AXCS_REVERSE_TABLE_MOVEM_T;


//---------------------------------------------------------------------------------------------
// AXCS_FILMING_FORMAT_FULL
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FILMING_FORMAT_FULL_T_TAG
{
   AXCS_FILMING_FORMAT_FULL_OFF     = 0x0000,
   AXCS_FILMING_FORMAT_FULL_ON      = 0x0001
}AXCS_FILMING_FORMAT_FULL_T;


//---------------------------------------------------------------------------------------------
// AXCS_FILMING_FORMAT_VERT2
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FILMING_FORMAT_VERT2_T_TAG
{
   AXCS_FILMING_FORMAT_VERT2_OFF     = 0x0000,
   AXCS_FILMING_FORMAT_VERT2_ON      = 0x0001
}AXCS_FILMING_FORMAT_VERT2_T;


//---------------------------------------------------------------------------------------------
// AXCS_FILMING_FORMAT_VERT3
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FILMING_FORMAT_VERT3_T_TAG
{
   AXCS_FILMING_FORMAT_VERT3_OFF     = 0x0000,
   AXCS_FILMING_FORMAT_VERT3_ON      = 0x0001
}AXCS_FILMING_FORMAT_VERT3_T;


//---------------------------------------------------------------------------------------------
// AXCS_FILMING_FORMAT_VERT4
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FILMING_FORMAT_VERT4_T_TAG
{
   AXCS_FILMING_FORMAT_VERT4_OFF     = 0x0000,
   AXCS_FILMING_FORMAT_VERT4_ON      = 0x0001
}AXCS_FILMING_FORMAT_VERT4_T;


//---------------------------------------------------------------------------------------------
// AXCS_SID_TRACKING SID tracking
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_SID_TRACKING_T_TAG
{
   AXCS_SID_TRACKING_OFF            = 0x0000,
   AXCS_SID_TRACKING_ON             = 0x0001,
   AXCS_SID_TRACKING_ON_INACTIVE    = 0x0002
}AXCS_SID_TRACKINGT_T;


//---------------------------------------------------------------------------------------------
// AXCS_TRACKING_TUBE_DET tracking tube/detector
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TRACKING_TUBE_DET_T_TAG
{
   AXCS_TRACKING_TUBE_DET_OFF            = 0x0000,
   AXCS_TRACKING_TUBE_DET_ON             = 0x0001,
   AXCS_TRACKING_TUBE_DET_ON_INACTIVE    = 0x0002
}AXCS_TRACKING_TUBE_DET_T;


//---------------------------------------------------------------------------------------------
// AXCS_MAGNIFICATION magnification
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_MAGNIFICATION_T_TAG
{
   AXCS_MAGNIFICATION_OFF     = 0x0000,
   AXCS_MAGNIFICATION_ON      = 0x0001,
   AXCS_MAGNIFICATION_DISC    = 0x0002
}AXCS_MAGNIFICATION_T;


//---------------------------------------------------------------------------------------------
// AXCS_ZOOM_FORMAT zoom format
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_ZOOM_FORMAT_T_TAG
{
   AXCS_ZOOM_FORMAT_0    = 0x0001, // overview
   AXCS_ZOOM_FORMAT_1    = 0x0002, // zoom 1
   AXCS_ZOOM_FORMAT_2    = 0x0003, // zoom 2
   AXCS_ZOOM_FORMAT_3    = 0x0004  // zoom 3
}AXCS_ZOOM_FORMAT_T;


//---------------------------------------------------------------------------------------------
// AXCS_FORMAT_SEGMENTATION format segmentation
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FORMAT_SEGMENTATION_T_TAG
{
   AXCS_FORMAT_FULL    = 0x0001,  // full format
   AXCS_FORMAT_2VER    = 0x0002,  // format 2 vertical
   AXCS_FORMAT_2HOR    = 0x0004,  // format 2 horizontal
   AXCS_FORMAT_1OF4    = 0x0007   // format 1 of 4
}AXCS_FORMAT_SEGMENTATION_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_FORMAT_SEGMENT displayed format segmentation
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_DISP_FORMAT_SEGMENT_T_TAG
{
   AXCS_DISP_FORMAT_NA      = 0x0000,
   AXCS_DISP_FORMAT_FULL    = 0x0001,
   AXCS_DISP_FORMAT_2VER    = 0x0002,
   AXCS_DISP_FORMAT_2AVER   = 0x0003,
   AXCS_DISP_FORMAT_2HOR    = 0x0004,
   AXCS_DISP_FORMAT_2AHOR   = 0x0005,
   AXCS_DISP_FORMAT_3VER    = 0x0006,
   AXCS_DISP_FORMAT_1OF4    = 0x0007,
   AXCS_DISP_FORMAT_4VER    = 0x0008
}AXCS_DISP_FORMAT_SEGMENT_T;


//---------------------------------------------------------------------------------------------
// AXCS_ORIENTATION orientation
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_ORIENTATION_T_TAG
{
   AXCS_UNIT_ORIENTATION    = 0x0001, // unit orientation
   AXCS_MON_ORIENTATION     = 0x0002  // monitor orientation
}AXCS_ORIENTATION_T;


//---------------------------------------------------------------------------------------------
// AXCS_OPERATING_MODE operating mode
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_OPERATING_MODE_T_TAG
{
   AXCS_MODE_NONE           = 0x0000,
   AXCS_MODE_SPOTFILM       = 0x0001,
   AXCS_MODE_BWS            = 0x0002,
   AXCS_MODE_BED            = 0x0003,
   AXCS_MODE_TOMO           = 0x0004
}AXCS_OPERATING_MODE_T;


//---------------------------------------------------------------------------------------------
// AXCS_FLUORO_CURVE fluoro curve
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FLUORO_CURVE_T_TAG
{
   AXCS_FLUORO_CURVE_NONE = 0x0000,
   AXCS_FLUORO_CURVE_1    = 0x0001,
   AXCS_FLUORO_CURVE_2    = 0x0002,
   AXCS_FLUORO_CURVE_3    = 0x0003
}AXCS_FLUORO_CURVE_T;


//---------------------------------------------------------------------------------------------
// AXCS_FOCUS focus
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_FOCUS_T_TAG
{
   AXCS_FOCUS_SMALL    = 0x0001,
   AXCS_FOCUS_LARGE    = 0x0002
}AXCS_FOCUS_T;


//---------------------------------------------------------------------------------------------
// AXCS_TUBE_ROT_DETENT tube rotation 0° detent
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TUBE_ROT_DETENT_T_TAG
{
   AXCS_TUBE_ROT_DETENT_ON      = 0x0001,
   AXCS_TUBE_ROT_DETENT_OFF     = 0x0002
}AXCS_TUBE_ROT_DETENT_T;


//---------------------------------------------------------------------------------------------
// AXCS_LABEL_LR label left/right
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_LABEL_LR_T_TAG
{
   AXCS_LABEL_NONE         = 0x0000,
   
   AXCS_LEFT_UPPERLEFT     = 0x0001,
   AXCS_LEFT_UPPERRIGHT    = 0x0002,
   AXCS_LEFT_MIDLEFT       = 0x0003,
   AXCS_LEFT_MIDRIGHT      = 0x0004,
   AXCS_LEFT_LOWERLEFT     = 0x0005,   
   AXCS_LEFT_LOWERRIGHT    = 0x0006,
   
   AXCS_RIGHT_UPPERLEFT    = 0x0011,
   AXCS_RIGHT_UPPERRIGHT   = 0x0012,
   AXCS_RIGHT_MIDLEFT      = 0x0013,
   AXCS_RIGHT_MIDRIGHT     = 0x0014,
   AXCS_RIGHT_LOWERLEFT    = 0x0015,   
   AXCS_RIGHT_LOWERRIGHT   = 0x0016
}AXCS_LABEL_LR_T;


//---------------------------------------------------------------------------------------------
// AXCS_DOMINANT dominant
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DOMINANT_T_TAG
{
   
   AXCS_WALL_LEFT          = 1,
   AXCS_WALL_MIDDLE        = 2,
   AXCS_WALL_RIGHT         = 3,
   AXCS_WALL_LE_MI         = 4,
   AXCS_WALL_RI_MI         = 5,
   AXCS_WALL_LE_RI         = 6,
   AXCS_WALL_LE_MI_RI      = 7,
   AXCS_WALL_NONE          = 10,
   
   AXCS_TABLE_LEFT         = 20,
   AXCS_TABLE_MIDDLE       = 21,
   AXCS_TABLE_RIGHT        = 22,
   AXCS_TABLE_LE_MI        = 23,
   AXCS_TABLE_RI_MI        = 24,
   AXCS_TABLE_LE_RI        = 25,
   AXCS_TABLE_LE_MI_RI     = 26,
   AXCS_TABLE_ROUND        = 27,
   AXCS_TABLE_NONE         = 30,
                                   // die folgenden Werte sind nur für Anzeige-Icons
                                   // nicht für Messfeld-Anwahlen (Buttons)
   AXCS_WALL_CORRECT_1     = 41,   // l(/)      m(red)       r(white) 
   AXCS_WALL_CORRECT_2     = 42,   // l(white)  m(red)       r(/)
   AXCS_WALL_CORRECT_3     = 43,   // l(/)      m(red)       r
   AXCS_WALL_CORRECT_4     = 44,   // l         m(red)       r(/)
   AXCS_WALL_CORRECT_5     = 45,   // l(/)      m(red)       r(/)
   AXCS_TABLE_CORRECT_1    = 51,   // l(/)      round(red)   r(white)
   AXCS_TABLE_CORRECT_2    = 52,   // l(white)  round(red)   r(/)
   AXCS_TABLE_CORRECT_3    = 53,   // l(/)      round(red)   r
   AXCS_TABLE_CORRECT_4    = 54,   // l         round(red)   r(/)
   AXCS_TABLE_CORRECT_5    = 55,   // l(/)      round(red)   r(/)
   AXCS_TABLE_CORRECT_6    = 56,   // l(/)      m(red)       r(white)
   AXCS_TABLE_CORRECT_7    = 57,   // l(white)  m(red)       r(/)
   AXCS_TABLE_CORRECT_8    = 58    // l(/)      m(red)       r(/)
   
}AXCS_DOMINANT_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_GRID grid
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_GRID_T_TAG
{
   AXCS_GRID_NA                  = 0x0000,
   AXCS_GRID_IN                  = 0x0001,
   AXCS_GRID_IN_CHANGE           = 0x0002,
   AXCS_GRID_OUT                 = 0x0003,
   AXCS_GRID_OUT_CHANGE          = 0x0004,
   AXCS_GRID_IN_90ROT            = 0x0005,
   AXCS_GRID_IN_CHANGE_90ROT     = 0x0006,
   AXCS_GRID_OUT_90ROT           = 0x0007,
   AXCS_GRID_OUT_CHANGE_90ROT    = 0x0008
}AXCS_DISP_GRID_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_TOMO_ICO tomo icon
// defined to give XCU the chance to hide/display the icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_TOMO_ICO_T_TAG
{
   AXCS_TOMO_ICO    = 0x0001
}AXCS_DISP_TOMO_ICO_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_BLOCK_RADIATION block radiation icon
// defined to give XCU the chance to hide/display the icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_BLOCK_RADIATION_T_TAG
{
   AXCS_BLOCK_RADIATION_ICO    = 0x0001
}AXCS_DISP_BLOCK_RADIATION_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_BLOCK_MOVEMENT block movement icon
// defined to give XCU the chance to hide/display the icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_BLOCK_MOVEMENT_T_TAG
{
   AXCS_BLOCK_MOVEMENT_ICO    = 0x0001
}AXCS_DISP_BLOCK_MOVEMENT_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_PERI_STEP_ICO peri step icon
// defined to give XCU the chance to hide/display the icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_PERI_STEP_ICO_T_TAG
{
   AXCS_PERI_STEP_ICO    = 0x0001
}AXCS_DISP_PERI_STEP_ICO_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_CENTERED centering icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_CENTERED_T_TAG
{
   AXCS_NOT_CENTERED    = 0x0000,
   AXCS_CENTERED        = 0x0001
}AXCS_DISP_CENTERED_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_COL_ROT collimator rotation icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_COL_ROT_T_TAG
{
   AXCS_COL_NOT_ROTATED    = 0x0000,
   AXCS_COL_ROTATED        = 0x0001
}AXCS_DISP_COL_ROT_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_LONG_MOVE longitudinal movement icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_LONG_MOVE_T_TAG
{
   AXCS_LONG_NOT_LOCKED    = 0x0000,
   AXCS_LONG_LOCKED        = 0x0001
}AXCS_DISP_LONG_MOVE_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_LAT_MOVE lateral movement icon
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_LAT_MOVE_T_TAG
{
   AXCS_LAT_NOT_LOCKED    = 0x0000,
   AXCS_LAT_LOCKED        = 0x0001
}AXCS_DISP_LAT_MOVE_T;


//---------------------------------------------------------------------------------------------
// AXCS_WORKPLACE workplace
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_WORKPLACE_T_TAG
{
   AXCS_WP_NOT_DEFINED   = 0x0000,
   AXCS_WP_CASS          = 0x0001,
   AXCS_WP_TABLE         = 0x0002,
   AXCS_WP_WALL          = 0x0003,
   AXCS_WP_FREE          = 0x0004
}AXCS_WORKPLACE_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_MOVEMENT movement
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_MOVEMENT_T_TAG
{
   AXCS_MOVE_NONE        = 0x0000,
   AXCS_MOVE_LEFT        = 0x0001,
   AXCS_MOVE_RIGHT       = 0x0002
}AXCS_DISP_MOVEMENT_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_PARK_POS parking position
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_PARK_POS_T_TAG
{
   AXCS_DISP_PARK_POS_NO         = 0x0000,
   AXCS_DISP_PARK_POS_YES        = 0x0001
}AXCS_DISP_PARK_POS_T;


//---------------------------------------------------------------------------------------------
// AXCS_DISP_DET_ORIENTATION detector orientation
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_DISP_DET_ORIENTATION_T_TAG
{
   AXCS_DISP_DET_ORIENT_NONE            = 0x0000,
   AXCS_DISP_DET_ORIENT_PORTRAIT        = 0x0001,
   AXCS_DISP_DET_ORIENT_LANDSCAPE       = 0x0002,
   AXCS_DISP_DET_ORIENT_TRAY_EMPTY      = 0x0003
}AXCS_DISP_DET_ORIENTATION_T;


//---------------------------------------------------------------------------------------------
// AXCS_ORTHO_STARTPOS_ACC ortho start position accepted
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_ORTHO_STARTPOS_ACC_T_TAG
{
   AXCS_ORTHO_STARTPOS_ACC_NO         = 0x0000,
   AXCS_ORTHO_STARTPOS_ACC_YES        = 0x0001
}AXCS_ORTHO_STARTPOS_ACC_T;


//---------------------------------------------------------------------------------------------
// AXCS_ORTHO_ENDPOS_ACC ortho end position accepted
//---------------------------------------------------------------------------------------------
typedef  enum AXCS_ORTHO_ENDPOS_ACC_T_TAG
{
   AXCS_ORTHO_ENDPOS_ACC_NO         = 0x0000,
   AXCS_ORTHO_ENDPOS_ACC_YES        = 0x0001
}AXCS_ORTHO_ENDPOS_ACC_T;


//---------------------------------------------------------------------------------------------
// AXCS_FLUORO_UI fluoro area
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_FLUORO_UI_T_TAG
{
   AXCS_FLUORO_UI_OFF          = 0x0000,   // fluoro UI not available
   AXCS_FLUORO_UI_ON           = 0x0001,   // fluoro UI available
   AXCS_FLUORO_UI_SECOND_PLANE = 0x0002    // fluoro UI when working on second plane
}AXCS_FLUORO_UI_T;


//---------------------------------------------------------------------------------------------
// AXCS_RAD_PARK_POS Rad park position
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_RAD_PARK_POS_T_TAG
{
   AXCS_RAD_PARK_POS_OFF          = 0x0000,   // not in park position
   AXCS_RAD_PARK_POS_ON           = 0x0001    // in park position
}AXCS_RAD_PARK_POS_T;


//---------------------------------------------------------------------------------------------
// AXCS_PLANE set TUI of plane active/inactive
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_PLANE_T_TAG
{
   AXCS_PLANE_INACTIVE         = 0x0000,   // plane inactive
   AXCS_PLANE_ACTIVE           = 0x0001    // plane active
}AXCS_PLANE_T;


//---------------------------------------------------------------------------------------------
// AXCS_LABEL_CONFIG set label configuration
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_LABEL_CONFIG_T_TAG
{
   AXCS_LABEL_CFG_LR           = 0x0001,   // L/R
   AXCS_LABEL_CFG_GD           = 0x0002,   // G/D
   AXCS_LABEL_CFG_SD           = 0x0003    // SIN/DEX
}AXCS_LABEL_CONFIG_T;


//---------------------------------------------------------------------------------------------
// AXCS_TABCARD_ENABLING enable/disable tabcards
//---------------------------------------------------------------------------------------------
typedef  enum  AXCS_TABCARD_ENABLING_T_TAG
{
   AXCS_TABCARD_DISABLE_ALL            = 0,   // disable all tabcards
   AXCS_TABCARD_ENABLE_ALL             = 1,   // enable all tabcards
   AXCS_TABCARD_RAD_TOMO_DISABLE       = 210, // disable tabcard Tomo on Rad UI
   AXCS_TABCARD_RAD_TOMO_ENABLE        = 211, // enable tabcard Tomo on Rad UI
   AXCS_TABCARD_RAD_TOMO_HIDDEN        = 212, // hide tabcard Tomo on Rad UI
   AXCS_TABCARD_RAD_ORTHO_DISABLE      = 240, // disable tabcard Ortho on Rad UI
   AXCS_TABCARD_RAD_ORTHO_ENABLE       = 241, // enable tabcard Ortho on Rad UI
   AXCS_TABCARD_RAD_ORTHO_HIDDEN       = 242, // hide tabcard Ortho on Rad UI
   AXCS_TABCARD_FLUORO_SETUP_DISABLE   = 420, // disable tabcard Setup on Fluoro UI
   AXCS_TABCARD_FLUORO_SETUP_ENABLE    = 421  // enable tabcard Setup on Fluoro UI
}AXCS_TABCARD_ENABLING_T;


#endif/*AXCS_FLRAD_ENUM_H*/
