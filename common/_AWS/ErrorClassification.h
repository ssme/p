/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef _ERRORCLASSIFICATION_H_
#define _ERRORCLASSIFICATION_H_
typedef enum
   {
   E_ERROR_CLASS_HW                                                       =    0,
   E_ERROR_CLASS_FW                                                       =    1,   
   E_ERROR_CLASS_LINE                                                     =    2,
   E_ERROR_CLASS_DOOR                                                     =    3,
   E_ERROR_CLASS_EMERGENCY_STOP                                           =    4,
   E_ERROR_CLASS_UI                                                       =    5,
   E_ERROR_CLASS_CONFIGURATION                                            =    6,
   E_ERROR_CLASS_PADDLE                                                   =    7,
   E_ERROR_CLASS_MOVEMENT                                                 =    8,
   E_ERROR_CLASS_TABLE                                                    =    9,
   E_ERROR_CLASS_AEC_CALC                                                 =   10,
   E_ERROR_CLASS_AWS_COMM                                                 =   11,
   E_ERROR_CLASS_TEMP                                                     =   12,
   E_ERROR_CLASS_COMPRESSION                                              =   13,
   E_ERROR_CLASS_BIOPSY                                                   =   14,
      
   E_ERROR_CLASS_GENERIC                                                  = 0xFF
   }
   t_e_ErrorClassificationType;

#define L_ERROR_CLASS_MAX                                                     15
#endif //_ERRORCLASSIFICATION_H_
