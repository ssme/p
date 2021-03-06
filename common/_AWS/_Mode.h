/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
/*                                                                          */
/* Header:      _Mode.h                                                     */
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
/* Aufgabe:     Aufnahme Modes                                              */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Changes Zigma:                                                           */
/*                                                                          */
/* 11-jun-2006 - KS - E112 - Angelegt                                       */
/*                                                                          */
/****************************************************************************/
#ifndef L_FILE_COMMON_MODE_H
   #define L_FILE_COMMON_MODE_H
/*******************************************************************************/
/*                                                                             */
/* Datentypen                                                                  */
/*                                                                             */
/*******************************************************************************/
typedef enum 
   {
   E_MODE_mAs                        = 0x00,
   E_MODE_0_POINT                    = 0x01,
   E_MODE_CAL                        = 0x02,
   E_MODE_3_POINT                    = 0x03, // Test Stuff
   E_MODE_STEREO_mAs                 = 0x04, // @ - KS - E229 - 18-jun-2007
   E_MODE_OEM_mAs                    = 0x05, // @ - KS - E229 - 18-jun-2007
   E_MODE_OEM_0_POINT                = 0x06, // @ - KS - E229 - 18-jun-2007
   E_MODE_TOMO_mAs                   = 0x07, // @ - SM - E269 - 18-sep-2008
   E_MODE_TOMO_0_POINT               = 0x08, // @ - SM - E269 - 18-sep-2008
   E_MODE_2D3D_mAs                   = 0x09, // @ - KS - E282 - 01-apr-2009
   E_MODE_2D3D_0_POINT               = 0x0A, // @ - KS - E282 - 01-apr-2009
   E_MODE_OEM_STEREO_mAs             = 0x0B, // @ - KS - E300 - 20-jul-2009
   E_MODE_UNDEF                      = 0xFF
   }
   e_aufnahme_mode_enum;

   
   #define L_MAX_MODE  0x0C
   //lint -esym(788,E_MODE_UNDEF)
#endif

/****************************************************************************/
/*                                                                          */
/* End of File.h                                                            */
/*                                                                          */
/****************************************************************************/

