/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
/*                                                                          */
/* Header:      _focus_target.h                                             */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Autor:       Stefan Mader CO PTE                                         */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Datum:       17-aug-2007                                                 */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Aufgabe:     Focus Target Kombinationen                                  */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Changes Zigma:                                                           */
/*                                                                          */
/* 17-aug-2007 - SM - E230 - Angelegt                                       */
/*                                                                          */
/****************************************************************************/
#ifndef L_FILE_COMMON_FOCUS_TARGET_H
   #define L_FILE_COMMON_FOCUS_TARGET_H
   ///////////////////////////////////////////////////////////////////////////////////////////
   #include "alt_types.h"
   ///////////////////////////////////////////////////////////////////////////////////////////
   #include "_Common\_AWS\_focus.h"
   #include "_Common\_AWS\_target.h"
   ///////////////////////////////////////////////////////////////////////////////////////////
   #define M_CalcFocusIndex(Focus, Target) ((unsigned int)Focus + ((unsigned int)Target * 2))
   
   #define M_CalcFocusSize(Index)((Index & E_LARGE_FOCUS) ? E_LARGE_FOCUS : E_SMALL_FOCUS)
   #define M_CalcTarget(Index)((Index & (2*E_TARGET_MOLY)) ? E_TARGET_MOLY : E_TARGET_WOLFRAM)
   ///////////////////////////////////////////////////////////////////////////////////////////
   //lint -save -e831 -e835 -e845
   typedef enum e_focus_target_enum
      {
      E_FOCUS_TARGET_SMALL_WOLFRAM      = M_CalcFocusIndex(E_SMALL_FOCUS, E_TARGET_WOLFRAM),
      E_FOCUS_TARGET_LARGE_WOLFRAM      = M_CalcFocusIndex(E_LARGE_FOCUS, E_TARGET_WOLFRAM),
      E_FOCUS_TARGET_SMALL_MOLY         = M_CalcFocusIndex(E_SMALL_FOCUS, E_TARGET_MOLY),
      E_FOCUS_TARGET_LARGE_MOLY         = M_CalcFocusIndex(E_LARGE_FOCUS, E_TARGET_MOLY),
      E_FOCUS_TARGET_UNDEF              = 0xFF
      }
      t_focus_target_typ;
   //lint -restore   
   ///////////////////////////////////////////////////////////////////////////////////////////
   #define L_MAX_FOCUS_TARGET             4
   ///////////////////////////////////////////////////////////////////////////////////////////
   //lint -esym(835,M_CalcFocusIndex)
   //lint -esym(845,M_CalcFocusIndex)
   //lint -esym(835,M_CalcFocusSize)
   //lint -esym(845,M_CalcFocusSize)
   //lint -esym(835,M_CalcTarget)
   //lint -esym(845,M_CalcTarget)
#endif
/****************************************************************************/
/*                                                                          */
/* End of _focus_target.h                                                   */
/*                                                                          */
/****************************************************************************/

