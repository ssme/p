/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
/*                                                                          */
/* Header:      _AdjustType.h                                               */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Autor:       Karsten Schmitt CO PTE                                      */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Datum:       22-aug-2003                                                 */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Aufgabe:     Focus Allgemeines                                           */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Changes Zigma:                                                           */
/*                                                                          */
/* 11-jun-2006 - KS - E112 - Angelegt                                       */
/*                                                                          */
/****************************************************************************/
#ifndef L_FILE_COMMON_ADJUSTTYPE_H
   #define L_FILE_COMMON_ADJUSTTYPE_H

typedef enum e_AdjustType_enum
   {
   E_ADJUST_NONE                   = 0x00,
   E_ADJUST_LEARN_FOCUS            = 0x01,
   E_ADJUST_LECKSTRAHL             = 0x02,
   E_ADJUST_mAs_ADJUST             = 0x03,
   E_ADJUST_FixSerge               = 0x04,
   E_ADJUST_EXTENDED_DET_TIME      = 0x05,
   E_ADJUST_CALIBRATE_FILTER_WHEEL = 0x06,
   E_ADJUST_3POINT_IF_CONTROL      = 0x07,
   E_ADJUST_COL_WIDE_OPEN          = 0x08,
   E_ADJUST_MAIN_INV               = 0x09,
   E_ADJUST_FixMarc                = 0x0a, // @ - KS - 28-jan-2008 - E242
   E_ADJUST_CloseColimator         = 0x0b, // @ - KS - 22-apr-2008 - E245
   E_ADJUST_FixNobu                = 0x0c, // @ - KS - 22-apr-2008 - E247
   E_ADJUST_FixTomo                = 0x0d, // @ - MK - 25-sep-2008 - E269
   E_ADJUST_TomoLight              = 0x0e, // @ - KS - 27-jan-2009 - E274
   E_ADJUST_mAs_Check_Off          = 0x0f, // @ - SM - 09-jun-2009 - E291
   E_ADJUST_WARMUP_START           = 0x10, // @ - KS - 26-nov-2009 - E316
   E_ADJUST_WARMUP                 = 0x11, // @ - KS - 26-nov-2009 - E316
   }
   t_AdjustType;

   #define L_MAX_ADJUST_TYPE         0x12
   
#endif

/****************************************************************************/
/*                                                                          */
/* End of File.h                                                            */
/*                                                                          */
/****************************************************************************/

