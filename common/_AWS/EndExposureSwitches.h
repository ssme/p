/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef _ENDEXPOSURESWITCHES_H_
#define _ENDEXPOSURESWITCHES_H_

   #define L_END_EXPOSURE_NORMAL                                 (alt_u16)     1   //  0
   #define L_END_EXPOSURE_AEC                                    (alt_u16)     2   //  1
   #define L_END_EXPOSURE_DOSE_CALC                              (alt_u16)     4   //  2
   #define L_END_EXPOSURE_mAs                                    (alt_u16)     8   //  3
   #define L_END_EXPOSURE_TIME                                   (alt_u16)0x0010   //  4
   #define L_END_EXPOSURE_ERROR                                  (alt_u16)0x0020   //  5 
   #define L_END_EXPOSURE_STOP_AWS                               (alt_u16)0x0040   //  6
   #define L_END_EXPOSURE_XRAY_BUTTON                            (alt_u16)0x0080   //  7   
   #define L_END_EXPOSURE_DETECTOR_READ                          (alt_u16)0x0100   //  8 // @ - KS - E218 - 01-mar-2007   
   #define L_END_MOVEMENT_ABORTED                                (alt_u16)0x0200   //  9 // @ - KS - E237 - 30-oct-2007   
   #define L_END_TOMO_START_FRAME                                (alt_u16)0x0400   // 10 // @ - KS - E237 - 30-oct-2007
   #define L_END_TOMO_END_FRAME                                  (alt_u16)0x0800   // 11 // @ - KS - E237 - 30-oct-2007
   #define L_END_TOMO_FRAME_SKIPPED                              (alt_u16)0x1000   // 12 // @ - KS - E237 - 30-oct-2007
   #define L_END_TOMO_FRAME_VALID                                (alt_u16)0x2000   // 13 // @ - KS - E237 - 30-oct-2007
   #define L_END_EXPOSURE_SHIFT_PADDLE_POS                       (alt_u16)0x4000   // 14 // @ - KS - E321 - 24-feb-2010

   #define L_FLAG_TOMO_START_FRAME                                (alt_u8)0x01   // 1 // @ - KS - E273 - 19-jan-2009
   #define L_FLAG_TOMO_END_FRAME                                  (alt_u8)0x02   // 2 // @ - KS - E273 - 19-jan-2009
   #define L_FLAG_TOMO_FRAME_SKIPPED                              (alt_u8)0x04   // 4 // @ - KS - E273 - 19-jan-2009
   #define L_FLAG_TOMO_FRAME_VALID                                (alt_u8)0x08   // 8 // @ - KS - E273 - 19-jan-2009

#endif //_ENDEXPOSURESWITCHES_H_
