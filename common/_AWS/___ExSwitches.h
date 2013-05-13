/*********************************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                                         */
/*********************************************************************************************/
#ifndef ____EXSWITCHES_H_
#define ____EXSWITCHES_H_

typedef union
   {
   struct
      {
      unsigned bt_enable_xray              : 1;   //  0 - 0x0001
      unsigned bt_enable_rac               : 1;   //  1 - 0x0002
      unsigned bt_enable_fil               : 1;   //  2 - 0x0004
      unsigned bt_enable_aec               : 1;   //  3 - 0x0008
      unsigned bt_enable_last              : 1;   //  4 - 0x0010
      unsigned bt_enable_mAs_Relais        : 1;   //  5 - 0x0020
      unsigned bt_enable_timer             : 1;   //  6 - 0x0040
      unsigned bt_enable_backup_timer      : 1;   //  7 - 0x0080
      unsigned bt_InternalService          : 1;   //  8 - 0x0100 // @ - KS - 03-jul-2007 - E229
      unsigned bt_EnableMotion             : 1;   //  9 - 0x0200 // @ - KS - 26-oct-2007 - E236
      }
      s_switches;
   alt_u32 u32_Switches;
   }
   union_SysSwitches;

typedef union
   {
   struct
      {
      unsigned bt_enable_grid              : 1;   //  0 - 0x0001
      unsigned bt_enable_auto_decompress   : 1;   //  1 - 0x0002
      unsigned bt_enable_aec_automatic     : 1;   //  2 - 0x0004
      unsigned bt_NoPaddleNeeded           : 1;   //  3 - 0x0008 // @ - KS - E229 - 18-jun-2007
      unsigned bt_LargeColimation          : 1;   //  4 - 0x0010 // @ - KS - E239 - 15-nov-2007
      unsigned bt_ForceBiopsyTable         : 1;   //  5 - 0x0020 // @ - KS - E239 - 15-nov-2007
      unsigned bt_DisableNoArc             : 1;   //  6 - 0x0040 // @ - KS - E239 - 29-nov-2007
      unsigned bt_EnableToggleUT           : 1;   //  7 - 0x0080 // @ - KS - E321 - 20-jan-2010
      unsigned bt_EnableDynamicTomo        : 1;   //  8 - 0x0100 // @ - KS - E321 - 20-jan-2010
      }
      s_switches;
   alt_u32 u32_Switches;
   }
   union_ExposureSwitches;

#endif //____EXSWITCHES_H_
