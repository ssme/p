/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef _PADDLEFLAG_H_
#define _PADDLEFLAG_H_

   #define L_PADDLE_FLAG_OPCOM_ENABLED                                      0x01
   #define L_PADDLE_FLAG_TOMO_PADDLE                                        0x02  // @ - KS - 21-aug-2008 - E266
   /////////////////////////////////////////////////////////////////////////////
   // @ - KS - 11-aug-2009 - E300 - Asymetrische Paddle
   /////////////////////////////////////////////////////////////////////////////
   #define L_PADDLE_FLAG_EXTENDED                                           0x04
   /////////////////////////////////////////////////////////////////////////////
   #define L_PADDLE_FLAG_DISABLE_AUTODECOMPRESS                             0x08
   #define L_PADDLE_FLAG_FORCE_MAG_TABLE                                    0x10
   #define L_PADDLE_FLAG_ENABLE_LARGE_COLIMATION                            0x20
   #define L_PADDLE_FLAG_MARKS                                              0x40
   #define L_PADDLE_FLAG_FORCE_BIOPSY_TABLE                                 0x80

   /////////////////////////////////////////////////////////////////////////////
   // @ - KS - 11-aug-2009 - E300 - Asymetrische Paddle
   /////////////////////////////////////////////////////////////////////////////
   #define L_PADDLE_FLAG_EXT_ASYM                                           0x01

   /////////////////////////////////////////////////////////////////////////////
   // @ - KS - 12-aug-2009 - E300 - Defines für EX_DATA
   /////////////////////////////////////////////////////////////////////////////
   #define L_EX_DATA_PADDLE_FLAG_OPCOM_ENABLED                            0x0001
   #define L_EX_DATA_PADDLE_FLAG_TOMO_PADDLE                              0x0002
   #define L_EX_DATA_PADDLE_FLAG_EXTENDED                                 0x0004
   #define L_EX_DATA_PADDLE_FLAG_DISABLE_AUTODECOMPRESS                   0x0008
   #define L_EX_DATA_PADDLE_FLAG_FORCE_MAG_TABLE                          0x0010
   #define L_EX_DATA_PADDLE_FLAG_ENABLE_LARGE_COLIMATION                  0x0020
   #define L_EX_DATA_PADDLE_FLAG_MARKS                                    0x0040
   #define L_EX_DATA_PADDLE_FLAG_FORCE_BIOPSY_TABLE                       0x0080
   #define L_EX_DATA_PADDLE_FLAG_EXT_ASYM                                 0x0100

#endif //_PADDLEFLAG_H_
