/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
/*                                                                          */
/* Header:      _BiopsyTarget.h                                             */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Autor:       Karsten Schmitt CO PTE                                      */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Datum:       04-feb-2008                                                 */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Aufgabe:     Needle Data Definition                                      */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Changes Zigma:                                                           */
/*                                                                          */
/* 04-feb-2008 - KS - E242 - Angelegt                                       */
/*                                                                          */
/****************************************************************************/
#ifndef _BiopsyTarget_H_
   #define _BiopsyTarget_H_


   /////////////////////////////////////////////////////////////////////////////
   #ifndef _lint
      #if defined L_STAND || defined L_ARM
         #ifndef DOXYGEN
            #define PACKED __attribute__((packed))
         #else
            #define PACKED
         #endif
      #else
         #define PACKED
      #endif
   #else 
      #define PACKED
   #endif
   /////////////////////////////////////////////////////////////////////////////
   #define L_NEEDLE_RESERVE_SIZE 19
   ////////////////////////////////////////////////////////////////////////////////
   // Structure used for CMD_BIOPSY_TARGET_DATA
   ////////////////////////////////////////////////////////////////////////////////
   typedef  struct
      {
      /////////////////////////////////////////////////////////////////////////////
      alt_u8   u8_Command;
      alt_u8   u8_SubCommand;
      alt_u8   u8_TargetNumber;
      alt_u16  u16_NeedleLength;
      alt_u16  u16_SafetyDistance; 
      alt_u8   u8_NeedleDiameter;
      alt_8    s8_NeedleOffsetX;
      alt_8    s8_NeedleOffsetY;
      alt_u16  u16_TargetX;
      alt_u16  u16_TargetY;
      alt_u16  u16_TargetZ;
      alt_u8   u8_DisableCheck;
      alt_u8   a_u8_Reserved[L_NEEDLE_RESERVE_SIZE];
      }  
   PACKED t_BiopsyTargetData; 
   ////////////////////////////////////////////////////////////////////////////////
#endif /*_BiopsyTarget_H*/
