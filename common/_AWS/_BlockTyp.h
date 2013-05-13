/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef __BLOCKTYP_H_
#define __BLOCKTYP_H_

#include <mcsglobsys.h>

#ifndef L_ATWS_H
// Used Inside Mammo Unit
typedef union  
   {
   struct
      {
      unsigned bt_door_open                    : 1;  //  0 - 0x00000001
      unsigned bt_heat_units                   : 1;  //  1 - 0x00000002
      unsigned bt_AWS_Block                    : 1;  //  2 - 0x00000004 // @ - KS - E325 - Platzhalter für OEM eingefügt
      unsigned bt_no_tomo_paddle               : 1;  //  3 - 0x00000008 // @ - KS - E278 
      unsigned bt_tomo_mag                     : 1;  //  4 - 0x00000010 // @ - KS - E291 - SIT1_70
      unsigned bt_no_ex_para_loaded            : 1;  //  5 - 0x00000020
      unsigned bt_no_paddle                    : 1;  //  6 - 0x00000040
      unsigned bt_act_move                     : 1;  //  7 - 0x00000080
      unsigned bt_SingleTankTemp               : 1;  //  8 - 0x00000100
      unsigned bt_act_move_compression         : 1;  //  9 - 0x00000200
      unsigned bt_no_integration_time          : 1;  // 10 - 0x00000400
      unsigned bt_invalid_paddle_table         : 1;  // 11 - 0x00000800
      unsigned bt_detector_not_ready           : 1;  // 12 - 0x00001000
      unsigned bt_ArmStereoTomoPos             : 1;  // 13 - 0x00002000
      unsigned bt_xray_not_released            : 1;  // 14 - 0x00004000    
      unsigned bt_colimation_active            : 1;  // 15 - 0x00008000   
      unsigned bt_TubeAngle                    : 1;  // 16 - 0x00010000   
      unsigned bt_ex_data_stored               : 1;  // 17 - 0x00020000   
      unsigned bt_focus_change_active          : 1;  // 18 - 0x00040000
      unsigned bt_grid_positing_active         : 1;  // 19 - 0x00080000
      unsigned bt_BiopsyNotMounted             : 1;  // 20 - 0x00100000   
      unsigned bt_BiopsyMounted                : 1;  // 21 - 0x00200000
      unsigned bt_StereoClutchPos              : 1;  // 22 - 0x00400000
      unsigned bt_grid_not_homed               : 1;  // 23 - 0x00800000
      unsigned bt_not_used_2                   : 1;  // 24 - 0x01000000
      unsigned bt_BiopsySafetySwitchOpen       : 1;  // 25 - 0x02000000 // @ - KS - E242 - 01-feb-2008
      unsigned bt_BiopsyActMove                : 1;  // 26 - 0x04000000 // @ - KS - E242 - 01-feb-2008
      unsigned bt_BiopsyError                  : 1;  // 27 - 0x08000000 // @ - KS - E242 - 01-feb-2008
      unsigned bt_BiopsySafetySwitchNotChecked : 1;  // 28 - 0x10000000 // @ - KS - E242 - 01-feb-2008
      unsigned bt_BiopsyServiceMode            : 1;  // 29 - 0x20000000 // @ - KS - E267 - 28-aug-2008, @ - NJ - E270 - 12-nov-2008 
      unsigned bt_NoBiopsyTable                : 1;  // 30 - 0x40000000 // @ - KS - E248 - 19-may-2008
      }
      s_detail;       // Detaliere Bitfeld Maske
   alt_u32 ul_all;    // Transport Verpackung
  }
BlockType; // Block Maske
#endif

#ifdef L_ATWS_H // used inside Simulator
typedef union
   {
   struct
      {
      alt_u32 bt_door_open                    : 1;  //  0 - 0x00000001
      alt_u32 bt_heat_units                   : 1;  //  1 - 0x00000002
      alt_u32 bt_not_used_0                   : 1;  //  2 - 0x00000004
      alt_u32 bt_no_tomo_paddle               : 1;  //  3 - 0x00000008
      alt_u32 bt_tomo_mag                     : 1;  //  4 - 0x00000010
      alt_u32 bt_no_ex_para_loaded            : 1;  //  5 - 0x00000020
      alt_u32 bt_no_paddle                    : 1;  //  6 - 0x00000040
      alt_u32 bt_act_move                     : 1;  //  7 - 0x00000080
      alt_u32 bt_SingleTankTemp               : 1;  //  8 - 0x00000100
      alt_u32 bt_act_move_compression         : 1;  //  9 - 0x00000200
      alt_u32 bt_no_integration_time          : 1;  // 10 - 0x00000400
      alt_u32 bt_invalid_paddle_table         : 1;  // 11 - 0x00000800
      alt_u32 bt_detector_not_ready           : 1;  // 12 - 0x00001000
      alt_u32 bt_ArmStereoTomoPos             : 1;  // 13 - 0x00002000
      alt_u32 bt_xray_not_released            : 1;  // 14 - 0x00004000    
      alt_u32 bt_colimation_active            : 1;  // 15 - 0x00008000   
      alt_u32 bt_TubeAngle                    : 1;  // 16 - 0x00010000   
      alt_u32 bt_ex_data_stored               : 1;  // 17 - 0x00020000   
      alt_u32 bt_focus_change_active          : 1;  // 18 - 0x00040000
      alt_u32 bt_grid_positing_active         : 1;  // 19 - 0x00080000
      alt_u32 bt_BiopsyNotMounted             : 1;  // 20 - 0x00100000   
      alt_u32 bt_BiopsyMounted                : 1;  // 21 - 0x00200000
      alt_u32 bt_StereoClutchPos              : 1;  // 22 - 0x00400000
      alt_u32 bt_grid_not_homed               : 1;  // 23 - 0x00800000
      alt_u32 bt_not_used_2                   : 1;  // 24 - 0x01000000 // @ - KS - E239 - 15-nov-2007
      alt_u32 bt_BiopsySafetySwitchOpen       : 1;  // 25 - 0x02000000 // @ - KS - E242 - 01-feb-2008
      alt_u32 bt_BiopsyActMove                : 1;  // 26 - 0x04000000 // @ - KS - E242 - 01-feb-2008
      alt_u32 bt_BiopsyError                  : 1;  // 27 - 0x08000000 // @ - KS - E242 - 01-feb-2008
	  alt_u32 bt_BiopsySafetySwitchNotChecked : 1;  // 28 - 0x10000000 // @ - KS - E242 - 01-feb-2008
      alt_u32 bt_BiopsyServiceMode            : 1;  // 29 - 0x20000000 // @ - NJ - E270 - 12-nov-2008 
      alt_u32 bt_NoBiopsyTable                : 1;  // 30 - 0x40000000 // @ - NJ - E270 - 12-nov-2008
      }
      s_detail;
   alt_u32 ul_all;
  }
BlockType;

#endif

#endif //__BLOCKTYP_H_
