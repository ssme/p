/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef __PARA_GET_ACT_H_
#define __PARA_GET_ACT_H_

//lint -save
//lint -e1709

////////////////////////////////////////////////////////////////////////////////
// Parameter für GET/ACT Commandos
////////////////////////////////////////////////////////////////////////////////
// Bei neuen Parametern diese in 10050060-EDS-02S und ggf 10050060-EDS-01S 
// nachziehen!!!
////////////////////////////////////////////////////////////////////////////////
typedef enum
   {
   E_P_ANGLE                                 =    0,
   E_P_BLOCK_STATE                           =    1,
   E_P_COMPRESSION                           =    2,
   E_P_EX_DATA                               =    3,
   E_P_EX_DATA_STORED                        =    4,
   E_P_HEAT_UNITS                            =    5,
   E_P_PADDLE                                =    6,
   E_P_OPCOM                                 =    7,   
   E_P_STATE                                 =    8,
   E_P_TABLE                                 =    9,
   E_P_VERSION                               =   10, // 0x0a
   E_P_XRAY                                  =   11, // 0x0b
   E_P_XRAY_BUTTON                           =   12, // 0x0c 
   E_P_INTERNAL_TOMO_TUBE_ANGLE              =   13, // 0x0d // @ - KS - 21-jan-2009 - E273
   E_P_DECOMPRESSED                          =   14, // 0x0e
   E_P_INTEGRATION_TIME                      =   15, // 0x0f
   E_P_TEMPERATURE_CBA                       =   16, // 0x10
   E_P_TEMPERATURE_CBS                       =   17, // 0x11
   E_P_TEMPERATURE_MFI                       =   18, // 0x12
   E_P_TEMPERATURE_HVT                       =   19, // 0x13
   E_P_QUERY_PADDLE                          =   20, // 0x14
   E_P_QUERY_TABLE                           =   21, // 0x15
   E_P_UDC                                   =   22, // 0x16
   E_P_24V                                   =   23, // 0x17
   E_P_12V                                   =   24, // 0x18
   E_P_VA_5V                                 =   25, // 0x19
   E_P_VA_N5V                                =   26, // 0x1a
   E_P_VDD_5V                                =   27, // 0x1b
   E_P_VDD_3V3                               =   28, // 0x1c
   E_P_VDD_1V2                               =   29, // 0x1d
   E_P_INTERNAL_TEMPERATURE_CBA              =   30, // 0x1e
   E_P_INTERNAL_TEMPERATURE_CBS              =   31, // 0x1f
   E_P_INTERNAL_TEMPERATURE_MFI              =   32, // 0x20
   E_P_INTERNAL_TEMPERATURE_HVT              =   33, // 0x21
   E_P_INTERNAL_STATE                        =   34, // 0x22 
   E_P_INTERNAL_UDC                          =   35, // 0x23
   E_P_INTERNAL_24V                          =   36, // 0x24
   E_P_INTERNAL_12V                          =   37, // 0x25
   E_P_INTERNAL_VA_5V                        =   38, // 0x26
   E_P_INTERNAL_VA_N5V                       =   39, // 0x27
   E_P_INTERNAL_VDD_5V                       =   40, // 0x28
   E_P_INTERNAL_VDD_3V3                      =   41, // 0x29
   E_P_INTERNAL_VDD_1V2                      =   42, // 0x2a
   E_P_ENABLE_OPCOM                          =   43, // 0x2b
   E_P_PRE_SET_ANGLE                         =   44, // 0x2c
   E_P_MAX_COMP_FORCE                        =   45, // 0x2d
   E_P_INTERNAL_DISABLE_FOCUS                =   46, // 0x2e
   E_P_INTERNAL_CYCLIC_TEMPERATURE_STU       =   47, // 0x2f
   E_P_INTERNAL_PREPULS_DATA_3               =   48, // 0x30 // @ - KS - 22-jan-2009 - E273
   E_P_INTERNAL_TOMO_WINDOW_USE              =   49, // 0x31 // @ - KS - 03-may-2007 - E222
                                                             // @ - KS - 20-feb-2009 - E276
   E_P_INTERNAL_MAX_COMP_FORCE_STORED        =   50, // 0x32
   E_P_INTERNAL_ARM_STARTED                  =   51, // 0x33
   E_P_INTERNAL_ANGLE                        =   52, // 0x34 // @ - KS - 24-apr-2007 - E221     
   E_P_INTERNAL_COMPRESSION                  =   53, // 0x35 // @ - KS - 25-apr-2007 - E221
   E_P_INTERNAL_RAS_NULL_VALUE_SET           =   54, // 0x36 // @ - SM - 26-feb-2009 - E278                                                   
   E_P_INTERNAL_CRL_JUSTAGE_STATE            =   55, // 0x37 // @ - SM - 21-jun-2010 - E336
                                                             // @ - KS/PW - 07-jun-2011 - E408 - Neue Verwendung
                                                              
   E_P_INTERNAL_RAS_ENABLED                  =   56, // 0x38 // @ - SM - 26-feb-2009 - E278 
   E_P_INTERNAL_RAS_VALUE_SERVICE            =   57, // 0x39 // @ - SM - 26-feb-2009 - E278 
   E_P_INTERNAL_TOMO_FRAME_START             =   58, // 0x3a // @ - KS - 09-mar-2009 - E279
   E_P_TIME_DATE                             =   59, // 0x3b // @ - KS - 11-may-2007 - E223
   E_P_EX_DATA_ADVANCED                      =   60, // 0x3c // @ - KS - 18-jun-2007 - E229
   E_P_INTERNAL_CNU_DIGITAL                  =   61, // 0x3d // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_CNU_COMP                     =   62, // 0x3e // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_ANALOG_1                     =   63, // 0x3f // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_ANALOG_2                     =   64, // 0x40 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_ANALOG_3                     =   65, // 0x41 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_DETECTOR_SIGNAL              =   66, // 0x42 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_PREPULS_DATA_1               =   67, // 0x43 // @ - KS - 16-jul-2007 - E229 
   E_P_INTERNAL_PREPULS_DATA_2               =   68, // 0x44 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_UI_ARM_SWITCHES              =   69, // 0x45 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_CNU_VERSION                  =   70, // 0x46 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_THICK_MIN                    =   71, // 0x47 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_THICK_MAX                    =   72, // 0x48 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_FORCE_MIN                    =   73, // 0x49 // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_FORCE_MAX                    =   74, // 0x4a // @ - KS - 16-jul-2007 - E229
   E_P_INTERNAL_CBA_FPGA_VER                 =   75, // 0x4b // @ - KS - 07-aug-2007 - E230 
   E_P_INTERNAL_CBA_FW_VER                   =   76, // 0x4c // @ - KS - 07-aug-2007 - E230 
   E_P_INTERNAL_CBA_BOOT_FW_VER              =   77, // 0x4d // @ - KS - 07-aug-2007 - E230 
   E_P_INTERNAL_CBA_BOOT_FPGA_VER            =   78, // 0x4e // @ - KS - 07-aug-2007 - E230 
   E_P_INTERNAL_CBA_CPLD_VER                 =   79, // 0x4f // @ - KS - 07-aug-2007 - E230 
   E_P_INTERNAL_GRID_T_TR                    =   80, // 0x50 // @ - MK - 07-aug-2007 - E230 
   E_P_INTERNAL_GRID_T_TU                    =   81, // 0x51 // @ - MK - 07-aug-2007 - E230 
   E_P_INTERNAL_GRID_STATUS                  =   82, // 0x52 // @ - MK - 07-aug-2007 - E230 
   E_P_INTERNAL_GRID_VAL_A                   =   83, // 0x53 // @ - MK - 07-aug-2007 - E230 
   E_P_INTERNAL_GRID_VAL_B                   =   84, // 0x54 // @ - MK - 07-aug-2007 - E230 
   E_P_INTERNAL_GRID_ADJUST                  =   85, // 0x55 // @ - MK - 07-aug-2007 - E230
   E_P_INTERNAL_GRID_MOVE                    =   86, // 0x56 // @ - MK - 07-aug-2007 - E230
   E_P_INTERNAL_GRID_HOME                    =   87, // 0x57 // @ - MK - 07-aug-2007 - E230
   E_P_INTERNAL_GRID_SKIP_AUTOCAL            =   88, // 0x58 // @ - MK - 07-aug-2007 - E230
   E_P_INTERNAL_GRID_START_AUTOCAL           =   89, // 0x59 // @ - MK - 07-aug-2007 - E230
   E_P_INTERNAL_MFI_STATE                    =   90, // 0x5a // @ - KS - 07-aug-2007 - E230
   E_P_INTERNAL_MFI_DATA                     =   91, // 0x5b // @ - KS - 07-aug-2007 - E230
   E_P_INTERNAL_GEN_STATE                    =   92, // 0x5c // @ - KS - 07-aug-2007 - E230
   E_P_INTERNAL_INV_FREQ_MIN                 =   93, // 0x5d // @ - KS - 07-aug-2007 - E230
   E_P_INTERNAL_CNU_NAME                     =   94, // 0x5e // @ - NJ - 06-sep-2007 - E232
   E_P_INTERNAL_CNU_CAL_DATA                 =   95, // 0x5f // @ - NJ - 06-sep-2007 - E232
   E_P_INTERNAL_CNU_ADC                      =   96, // 0x60 // @ - NJ - 06-sep-2007 - E232
   E_P_INTERNAL_CNU_DATE                     =   97, // 0x61 // @ - NJ - 06-sep-2007 - E232
   E_P_INTERNAL_FIL_LEARN_DATA               =   98, // 0x62 // @ - KS - 25-jan-2008 - E242
   E_P_INTERNAL_CBA_DIP_SWITCH               =   99, // 0x63 // @ - KS - 29-jan-2008 - E242
   E_P_BIOPSY_INIT_DONE                      =  100, // 0x64 // @ - KS - 01-feb-2008 - E242
   E_P_BIOPSY_TARGETING_DONE                 =  101, // 0x65 // @ - KS - 01-feb-2008 - E242
   E_P_INTERNAL_BYU_INFO_1                   =  102, // 0x66 // @ - NJ - 11-apr-2008 - E245
   E_P_INTERNAL_BYU_INFO_2                   =  103, // 0x67 // @ - NJ - 11-apr-2008 - E245
   E_P_INTERNAL_BYU_INFO_3                   =  104, // 0x68 // @ - NJ - 11-apr-2008 - E245
   E_P_INTERNAL_BYU_INFO_4                   =  105, // 0x69 // @ - NJ - 11-apr-2008 - E245
   E_P_INTERNAL_BYU_MODE                     =  106, // 0x6a // @ - NJ - 14-apr-2008 - E245
   E_P_INTERNAL_BYU_SERVICE_MODE             =  107, // 0x6b // @ - NJ - 14-apr-2008 - E245
   E_P_INTERNAL_BYU_REF_OK                   =  108, // 0x6c // @ - NJ - 14-apr-2008 - E245
   E_P_READ_TIME                             =  109, // 0x6d // @ - KS - 29-apr-2008 - E245
   E_P_INTERNAL_FRAME_USAGE                  =  110, // 0x6e // @ - KS - 29-apr-2008 - E245
                                                             // @ - KS - 07-may-2009 - E285
   E_P_INTERNAL_PADDLE_DATA                  =  111, // 0x6f // @ - KS - 21-aug-2008 - E266
   E_P_INTERNAL_OPCOMP_OFF                   =  112, // 0x70 // @ - KS - 02-sep-2008 - E268
   E_P_TOMO_ANGLE                            =  113, // 0x71 // @ - KS - 29-oct-2008 - E270
   E_P_TOMO_mAs                              =  114, // 0x72 // @ - KS - 29-oct-2008 - E270
   E_P_INTERNAL_AEC_DATA                     =  115, // 0x73 // @ - KS - 27-nov-2008 - E270
   E_P_ANGLE_DERIVATION_STAND                =  116, // 0x74 // @ - KS - 07-mar-2009 - E279
   E_P_ANGLE_DERIVATION_ARM                  =  117, // 0x75 // @ - KS - 07-mar-2009 - E279
   E_P_INTERNAL_ARM_ANGLE                    =  118, // 0x76 // @ - KS - 07-mar-2009 - E279
   E_P_INTERNAL_CRL_INTERFACE_1              =  119, // 0x77 // @ - KS - 07-mar-2009 - E279
   E_P_2D3D_ANGLE                            =  120, // 0x78 // @ - KS - 22-apr-2009 - E282
   E_P_2D3D_mAs                              =  121, // 0x79 // @ - KS - 22-apr-2009 - E282
   E_P_2D3D_READ_TIME                        =  122, // 0x7a // @ - KS - 29-apr-2009 - E283
   E_P_INTERNAL_GRID_TESTS                   =  123, // 0x7b // @ - KS - 08-may-2009 - E286
   E_P_2D3D_INT_TIME                         =  124, // 0x7c // @ - KS - 11-may-2009 - E286
   E_P_PADDLE_EXT                            =  125, // 0x7d // @ - KS - 11-aug-2009 - E300
   E_P_INTERNAL_ACT_PADDLE_OFFSET            =  126, // 0x7e // @ - KS - 17-aug-2009 - E300
   E_P_INTERNAL_ACT_COLLISION                =  127, // 0x7f // @ - SM - 28-aug-2009 - E301
   E_P_INTERNAL_COLLISION_LIFT_ADJUST        =  128, // 0x80 // @ - SM - 16-aug-2009 - E303
   E_P_INTERNAL_ARM_STATE                    =  129, // 0x81 // @ - KS - 24-sep-2009 - E304
   E_P_INTERNAL_MOVE_ROT_START               =  130, // 0x82 // @ - KS - 07-oct-2009 - E305
   E_P_INTERNAL_MOVE_ROT_END                 =  131, // 0x83 // @ - KS - 07-oct-2009 - E305
   E_P_INTERNAL_2D3D_FACTOR                  =  132, // 0x84 // @ - KS - 21-oct-2009 - VC01D
   E_P_INTERNAL_DET_TRACE                    =  133, // 0x85 // @ - KS - 23-nov-2009 - E316
   E_P_INTERNAL_UART                         =  134, // 0x86 // @ - KS - 23-nov-2009 - E316
   E_P_INTERNAL_COLLISION_ROT_ADJ_LEFT       =  135, // 0x87 // @ - SM - 03-dec-2009 - E317
   E_P_INTERNAL_COLLISION_ROT_ADJ_RIGHT      =  136, // 0x88 // @ - SM - 03-dec-2009 - E317
   E_P_INTERNAL_SINGLE_TOUCH_STOP_DP         =  137, // 0x89 // @ - KS - 07-dec-2009 - E319
   E_P_INTERNAL_DOWN_MOVE_STOP_DP            =  138, // 0x8a // @ - KS - 07-dec-2009 - E319
   E_P_INTERNAL_CRL_INTERFACE_2              =  139, // 0x8b // @ - SM - 09-dec-2009 - E320
   E_P_INTERNAL_CRL_INTERFACE_3              =  140, // 0x8c // @ - SM - 09-dec-2009 - E320
   E_P_INTERNAL_CNU_RINGBUFFER               =  141, // 0x8d // @ - KS - 16-dec-2009 - E320   
   E_P_INTERNAL_CNU_RINGBUFFER_QUERY         =  142, // 0x8e // @ - KS - 16-dec-2009 - E320 
   E_P_INTERNAL_CRL_INTERFACE_4              =  143, // 0x8f // @ - SM - 23-dec-2009 - E320
   E_P_INTERNAL_DYN_TOMO_FACTOR              =  144, // 0x90 // @ - KS - 22-jan-2010 - E321
   E_P_INTERNAL_DYN_TOMO_FACTOR_QUERY        =  145, // 0x91 // @ - KS - 22-jan-2010 - E321
   E_P_INTERNAL_DYN_2D3D_FACTOR              =  146, // 0x92 // @ - KS - 03-feb-2010 - E321
   E_P_INTERNAL_DYN_2D3D_FACTOR_QUERY        =  147, // 0x93 // @ - KS - 03-feb-2010 - E321
   E_P_INTERNAL_DYN_2D3D_TOMO_DATA           =  148, // 0x94 // @ - KS - 04-feb-2010 - E321
   E_P_INTERNAL_DYN_2D3D_TOMO_QUERY          =  149, // 0x95 // @ - KS - 05-feb-2010 - E321
   E_P_COLLISON_STATE                        =  150, // 0x96 // @ - KS - 08-feb-2010 - E321
   E_P_COL_SETTINGS                          =  151, // 0x97 // @ - KS - 16-feb-2010 - E321
   E_P_INTERNAL_WARM_START_DATA              =  152, // 0x98 // @ - KS - 16-feb-2010 - E321
   E_P_INTERNAL_ENABLE_EDGE_DET              =  153, // 0x99 // @ - KS - 10-mar-2010 - E322
   E_P_INTERNAL_EDGE_DATE                    =  154, // 0x9A // @ - KS - 06-apr-2010 - E323
   E_P_SYSTEM_CONFIG                         =  155, // 0x9B // @ - KS - 28-apr-2010 - E326
   E_P_OEM_COLLISION_ROT                     =  156, // 0x9C // @ - KS - 05-may-2010 - E327
   E_P_OEM_COLLISION_LIFT                    =  157, // 0x9D // @ - KS - 05-may-2010 - E327
   E_P_INTERNAL_MOTION_STATE                 =  158, // 0x9E // @ - KS - 12-may-2010 - E328
   E_P_INTERNAL_MOTION_START                 =  159, // 0x9F // @ - KS - 17-may-2010 - E329
   E_P_INTERNAL_MOTION_STOP                  =  160, // 0xA0 // @ - KS - 17-may-2010 - E329
   E_P_TOMO_FRAME_USAGE                      =  161, // 0xA1 // @ - KS - 10-jun-2010 - E334
   E_P_INTERNAL_COLLISION_LIFT_ADJUST_BAK    =  162, // 0xA2 // @ - SM - 21-jun-2009 - E336
   E_P_INTERNAL_CBA_TESTS                    =  163, // 0xA3 // @ - KS - 06-aug-2010 - E400
   E_P_INTERNAL_WB_CBA_TEST                  =  164, // 0xA4 // @ - KS - 07-sep-2010 - E401   
   E_P_INTERNAL_INTS_CBA                     =  165, // 0xA5 // @ - KS - 11-oct-2010 - E403
   E_P_INTERNAL_GLITCHS_CBA                  =  166, // 0xA6 // @ - KS - 11-oct-2010 - E403
   E_P_INTERNAL_STU_RINGBUFFER               =  167, // 0xA7 // @ - PW - 24-aug-2011 - E410
   E_P_INTERNAL_STU_RINGBUFFER_QUERY         =  168, // 0xA8 // @ - PW - 24-aug-2011 - E410
   }  
   t_int_p_typ;
/////////////////////////////////////////////////////////////////////////////////////////////////////////////   
#define L_MAX_INT_P                        167
/////////////////////////////////////////////////////////////////////////////////////////////////////////////   
//lint -restore
#endif //__PARA_GET_ACT_H_
