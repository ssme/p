/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#ifndef _TABLEID_H_
#define _TABLEID_H_
///////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef enum      
   {
   E_TABLE_VOID                       =    0, // undefined table
   E_TABLE_DIGITAL                    =    1, // Siemens Normal
   E_TABLE_MAG                        =    2, // Siemens Mag 1.5
   E_TABLE_MAG_OEM_18_24              =    3, // OEM Mag small Detector
   E_TABLE_BIOPSY                     =    4, // Siemens Biopsy
   E_TABLE_OEM_18_24                  =    5, // OEM small detector 
   E_TABLE_MAG_OEM_24_30              =    6, // OEM Mag large Detector   // @ - KS - E278 - 05-mar-2009
   E_TABLE_OEM_24_30                  =    7, // OEM large detector       // @ - KS - E278 - 05-mar-2009
   E_TABLE_MAG_1_8                    =    8, // Siemens Mag 1.8          // @ - KS - E287 - 26-may-2009
   E_TABLE_OEM_BIOPSY_18x24           =    9, // OEM Biopsy Small         // @ - KS - E300 - 20-jul-2009
   E_TABLE_OEM_BIOPSY_24x30           =   10, // OEM Biopsy Large         // @ - KS - E300 - 20-jul-2009
   E_TABLE_UNDEF                      = 0xFF,
   }
e_table_id_type;
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#define L_MIN_TABLE_USED   1
#define L_MAX_TABLE_IDS   11
///////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif

