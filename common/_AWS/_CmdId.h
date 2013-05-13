/***************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                       */
/***************************************************************************/
/*                                                                         */
/* _COMMON\_AWS\_CmdId.H                                                   */
/*                                                                         */
/***************************************************************************/
/*                                                                         */
/* Changes:                                                                */
/*                                                                         */
/* 31-mar-2005 - KS - E000 - Aus IT/A100/Martix geclont                    */
/* 23-jun-2006 - NJ - E112 - CMD_ACT-Parameter für die CNU eingefügt       */
/*                                                                         */
/***************************************************************************/
#ifndef  L_FILE__COMMON_CMDID_H
   #define  L_FILE__COMMON_CMDID_H
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Nummern nicht ändern
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef  enum
   {
   E_NO_CMD                   =    0x00, // Dummy für Check Tables
   E_CMD_ACT                  =    0x01, // internal and to AWS           
   E_CMD_ACT_EX_DATA          =    0x02, // internal and to AWS           
   E_CMD_BLOCK                =    0x03, // internal only
   E_CMD_BLOCKED              =    0x04, // zur AWS
   E_CMD_BLOCK_REQUEST        =    0x05, // internal only
   E_CMD_CANCEL_DONE          =    0x06, // internal and to AWS 
   E_CMD_CANCEL_EX_PARA       =    0x07, // von AWS
   E_CMD_CANCEL_EXPOSURE      =    0x08, // internal and to AWS 
   E_CMD_COM_START            =    0x09, // AWS
   E_CMD_COM_DONE             =    0x0a, // 10 AWS
   E_CMD_DATA_DELETED         =   0x0b, // 11 // to AWS
   E_CMD_DEBUG                =   0x0c, // 12 // internal and from AWS 
   E_CMD_DEL_DATA             =   0x0d, // 13 // from AWS  
   E_CMD_END_EXPOSURE         =   0x0e, // 14 
   E_CMD_ERROR                =   0x0f, // 15 
   E_CMD_EX_DATA              =   0x10, // 16 // internal and from AWS
   E_CMD_EX_DATA_ACCEPTED     =   0x11, // 17 // internal and to AWS
   E_CMD_EXPOSURE_DONE        =   0x12, // 18 // internal and to AWS 
   E_CMD_GET                  =   0x13, // 19 // internal and from AWS
   E_CMD_HALT                 =   0x14, // 20 
   E_CMD_INFO                 =   0x15, // 21 // internal and to AWS 
   E_CMD_INIT                 =   0x16, // 22 
   E_CMD_INIT_DONE            =   0x17, // 23 
   E_CMD_INT_COM_START        =   0x18, // 24 // internal only
   E_CMD_INT_COM_STARTED      =   0x19, // 25 // internal only
   E_CMD_KEY                  =   0x1a, // 26 // internal only
   E_CMD_LIFECHECK_DONE       =   0x1b, // 27 // internal and AWS 
   E_CMD_LIFECHECK_REQUEST    =   0x1c, // 28 // internal and AWS 
   E_CMD_PARA_ACCEPTED        =   0x1d, // 29 
   E_CMD_PARA                 =   0x1e, // 30 // internal only
   E_CMD_PREP                 =   0x1f, // 31 // internal and from AWS
   E_CMD_PREP_DONE            =   0x20, // 32 // internal and to AWS 
   E_CMD_READY_FOR_XRAY       =   0x21, // 33 // internal only
   E_CMD_RESET                =   0x22, // 34 // internal and from AWS
   E_CMD_RESET_DONE           =   0x23, // 35 // internal and to AWS 
   E_CMD_SEC_CIRCUIT_STATE    =   0x24, // 36 // internal only
   E_CMD_SET                  =   0x25, // 37 
   E_CMD_SET_SEC_CIRCUIT      =   0x26, // 38 // internal only
   E_CMD_START_EXPOSURE       =   0x27, // 39
   E_CMD_STOP                 =   0x28, // 40 // internal and from AWS
   E_CMD_WARNING              =   0x29, // 41
   E_CMD_UDC_OK               =   0x2a, // 42
   E_CMD_UNBLOCK              =   0x2b, // 43 // internal only
   E_CMD_UNBLOCKED            =   0x2c, // 44 // to AWS
   E_CMD_UNBLOCK_REQUEST      =   0x2d, // 45 // internal only
   E_CMD_XRAY_OFF             =   0x2e, // 46
   E_CMD_XRAY_ON              =   0x2f, // 47
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_MAIN_PULS_DATA          = 0x30, // 48 // internal only
   E_CMD_PRE_XRAY_OFF            = 0x31, // 49 // internal only
   E_CMD_READY_MAIN              = 0x32, // 50 // internal only
   E_CMD_EX_PARA_CANCELED        = 0x33, // 51 to AWS
   E_CMD_PATIENT_NAME            = 0x34, // 52 from AWS
   E_CMD_DISPLAY                 = 0x35, // 53 from AWS
   E_CMD_DISPLAY_CLR             = 0x36, // 54 from AWS
   E_CMD_DISPLAY_BAR             = 0x37, // 55 from AWS
   E_CMD_EMCY_ACT_EXDATA         = 0x38, // 56 internal only // @ - KS - 18-jan-2007 - E214
   E_CMD_GO_GRID                 = 0x39, // 57 internal only // @ - KS - 23-feb-2007 - E218
   E_CMD_JUMP_BOOT               = 0x3a, // 58 internal only // @ - KS - 23-feb-2007 - E218
   E_CMD_SERVICE_REQUEST         = 0x3b, // 59 internal only // @ - KS - 25-apr-2007 - E221
   E_CMD_SERVICE_DATA            = 0x3c, // 60 internal only // @ - KS - 25-apr-2007 - E221
   E_CMD_DISPLAY_BITMAP          = 0x3d, // 61 from AWS      // @ - KS - 14-jun-2007 - E227
   E_CMD_DISPLAY_GRAPHIC         = 0x3e, // 62 from AWS      // @ - KS - 14-jun-2007 - E227
   E_CMD_ACT_EX_DATA_ADVANCED    = 0x3f, // 63 internal and to AWS   // @ - KS - 18-jun-2007 - E229
   E_CMD_EX_DATA_ADVANCED        = 0x40, // 64 internal and from AWS // @ - KS - 18-jun-2007 - E229
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo 
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_STEREO_READY_FOR_XRAY   = 0x41,   // 65 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   E_CMD_STEREO_XRAY_ON          = 0x42,   // 66 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   E_CMD_STEREO_XRAY_OFF         = 0x43,   // 67 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   E_CMD_STEREO_MOVE             = 0x44,   // 68 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   E_CMD_STEREO_MOVE_DONE        = 0x45,   // 69 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   E_CMD_STEREO_PREP             = 0x46,   // 70 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   E_CMD_STEREO_PREP_DONE        = 0x47,   // 71 internal only // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ -  KS - 19-jan-2008 - E242 - OEM 
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_INTENRAL_START_HOMING   = 0x48,   // 72 // @ -  KS - 30-jan-2008 - E242
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ -  KS - 1-feb-2008 - E242 - Biopsy 
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_BIOPSY_TARGET_DATA               = 0x49,   // 73 // @ -  KS - 01-feb-2008 - E242
   E_CMD_BIOPSY_TARGET_DATA_ACCEPTED      = 0x4a,   // 74 // @ -  KS - 01-feb-2008 - E242
   E_CMD_BIOPSY_TARGET_DATA_REJECTED      = 0x4b,   // 75 // @ -  KS - 01-feb-2008 - E242
   E_CMD_BIOPSY_ERROR                     = 0x4c,   // 76 // @ -  KS - 01-feb-2008 - E242
   E_CMD_BIOPSY_RECOVER                   = 0x4d,   // 77 // @ -  KS - 01-feb-2008 - E242
   E_CMD_BIOPSY_GO_HOME                   = 0x4e,   // 78 // @ -  KS - 04-feb-2008 - E242
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E270 - 17-nov-2008 - Erweiterung für Tomo
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_TOMO_READY_FOR_XRAY              = 0x4F,   // 79 internal only 
   E_CMD_TOMO_XRAY_ON                     = 0x50,   // 80 internal only
   E_CMD_TOMO_XRAY_OFF                    = 0x51,   // 81 internal only
   E_CMD_TOMO_MOVE                        = 0x52,   // 82 internal only
   E_CMD_TOMO_MOVE_DONE                   = 0x53,   // 83 internal only
   E_CMD_TOMO_DATA                        = 0x54,   // 84 internal only
   E_CMD_TOMO_DONE                        = 0x55,   // 85 internal only
   E_CMD_TOMO_XRAY_ON_ROT                 = 0x56,   // 86 internal only     
   E_CMD_TOMO_READY_ROT                   = 0x57,   // 87 internal only
   E_CMD_TOMO_XRAY_OFF_ROT                = 0x58,   // 88 internal only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E282 - 01-apr-2009 - Erweiterung für 2D3D
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_2D3D_READY_FOR_XRAY              = 0x59,   // 89 internal only 
   E_CMD_2D3D_XRAY_ON                     = 0x5A,   // 90 internal only
   E_CMD_2D3D_XRAY_OFF                    = 0x5B,   // 91 internal only
   E_CMD_2D3D_MOVE                        = 0x5C,   // 92 internal only
   E_CMD_2D3D_MOVE_DONE                   = 0x5D,   // 93 internal only
   E_CMD_2D3D_DATA                        = 0x5E,   // 94 internal only
   E_CMD_2D3D_DONE                        = 0x5F,   // 95 internal only
   E_CMD_2D3D_XRAY_ON_ROT                 = 0x60,   // 96 internal only     
   E_CMD_2D3D_READY_ROT                   = 0x61,   // 97 internal only
   E_CMD_2D3D_XRAY_OFF_ROT                = 0x62,   // 98 internal only
   E_CMD_2D3D_MAIN_DATA                   = 0x63,   // 99 internal only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E287 - 15-may-2009 - Erweiterung für 2D3D
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_2D3D_STOP_GRID                   = 0x64,  // 100 internal only
   E_CMD_2D3D_GRID_DONE                   = 0x65,  // 101 internal only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E289 - 29-may-2009 - Erweiterung für 2D3D/Tomo
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_TOMO_PREP_ON                     = 0x66,  // 102 internal only
   E_CMD_2D3D_PREP_ON                     = 0x67,  // 103 internal only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - SM - E302 - 09-sep-2009 - Erweiterung für CRL
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_CRL_GENERATOR_TOMO               = 0x68,  // 104 internal only
   E_CMD_CRL_INTERFACE_START_RT_DATA      = 0x69,  // 105 internal only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E302 - 10-sep-2009 - Erweiterung für CDF
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_CDF_DOWNLOAD                     = 0x6A,  // 106 internal only
   E_CMD_CDF_ACK                          = 0x6B,  // 107 internal only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E321 - 17-feb-2010 - Erweiterung Production
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_PROD_ACT                         = 0x6C,  // 108 internal only 
   E_CMD_PROD_GET                         = 0x6D,  // 109 internal only 
   E_CMD_PROD_SET                         = 0x6E,  // 110 internal only 
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E325 - 22-apr-2010 - Platzhalter für OEM Wunsch eingefügt
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_AWS_FORCE_BLOCK                  = 0x6F,  // 111 OEM AWS only
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E328 - 10-may-2010 - Schreibfehler korrigiert
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_AWS_RELEASE_BLOCK                = 0x70,  // 112 OEM AWS only 
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // @ - KS - E402 - 23-sep-2010 - Kommando einegfügt
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_EMCY_DECOMPRESS                  = 0x71,  // 113 internal only 
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // Ab 0xA0 Kommandos für Blende
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_COL_ACT                 = 0xA0,   // 160 internal only
   E_CMD_COL_COM_START           = 0xA1,   // 161 internal only
   E_CMD_COL_COM_STARTED         = 0xA2,   // 162 internal only
   E_CMD_COL_DEAD                = 0xA3,   // 163 internal only
   E_CMD_COL_DEBUG               = 0xA4,   // 164 internal only
   E_CMD_COL_ERROR               = 0xA5,   // 165 internal only
   E_CMD_COL_FILTER              = 0xA6,   // 166 internal only
   E_CMD_COL_FILTER_DONE         = 0xA7,   // 167 internal only
   E_CMD_COL_GET                 = 0xA8,   // 168 internal only
   E_CMD_COL_INIT                = 0xA9,   // 169 internal only
   E_CMD_COL_INIT_DONE           = 0xAa,   // 170 internal only
   E_CMD_COL_JUST_GET_POS        = 0xAb,   // 171 internal only
   E_CMD_COL_JUST_MOVE           = 0xAc,   // 172 internal only
   E_CMD_COL_JUST_MOVE_NOT_POS   = 0xAd,   // 173 internal only
   E_CMD_COL_JUST_MOVED          = 0xAe,   // 174 internal only
   E_CMD_COL_JUST_POS            = 0xAf,   // 175 internal only
   E_CMD_COL_JUSTAGE             = 0xb0,   // 176 internal only
   E_CMD_COL_JUSTAGE_END         = 0xb1,   // 177 internal only
   E_CMD_COL_JUSTAGE_ENDED       = 0xb2,   // 178 internal only
   E_CMD_COL_JUSTAGE_STARTED     = 0xb3,   // 179 internal only
   E_CMD_COL_LAMP_OFF            = 0xB4,   // 180 internal only
   E_CMD_COL_LAMP_ON             = 0xB5,   // 181 internal only
   E_CMD_COL_LIFECHECK           = 0xB6,   // 182 internal only
   E_CMD_COL_LIFECHECK_DONE      = 0xB7,   // 183 internal only
   E_CMD_COL_PARA                = 0xB8,   // 184 internal only
   E_CMD_COL_PARA_ACK            = 0xB9,   // 185 internal only
   E_CMD_COL_MOVE                = 0xBa,   // 186 internal only
   E_CMD_COL_MOVED               = 0xBb,   // 187 internal only
   E_CMD_COL_STOP                = 0xBc,   // 188 internal only
   E_CMD_COL_STOP_DONE           = 0xBd,   // 189 internal only
   E_CMD_COL_SWITCHED_OFF        = 0xBe,   // 190 internal only
   E_CMD_COL_SWITCHED_ON         = 0xbf,   // 191 internal only 
   E_CMD_COL_WARNING             = 0xc0,   // 192 internal only
   E_CMD_COL_ASYM_MOVE           = 0xc1,   // 193 internal only
   E_CMD_COL_ASYM_MOVE_DONE      = 0xc2,   // 194 internal only
   E_CMD_COL_ROT                 = 0xc3,   // 195 internal only // @ - KS - 31-mar-2009 - E281
   E_CMD_COL_ROT_DONE            = 0xc4,   // 196 internal only // @ - KS - 31-mar-2009 - E281
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   // Ab 0xF0 Kommandos for Detector
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   E_CMD_DETECTOR_SYNC          = 0xF0,   // 240 Detector Com
   E_CMD_DETECTOR_ABORT         = 0xF1,   // 241 Detector Com
   E_CMD_DETECTOR_GetData       = 0xF2,   // 242 Detector Com
   E_CMD_DETECTOR_SetmAs        = 0xF3,   // 243 Detector Com
   E_CMD_DETECTOR_NoData        = 0xF4,   // 244 Detector Com
   E_CMD_DETECTOR_XrayButton    = 0xF5,   // 245 Detector Com
   E_CMD_DETECTOR_StartHoming   = 0xF6,   // 246 Detector Com // @ - KS - 14-jan-2008 - E241
   E_CMD_DETECTOR_HomingDelay   = 0xF7,   // 247 Detector Com // @ - KS - 13-jun-2008 - E243
                                                              // @ - KS - 13-apr-2010 - E323 - Datum der Änderung gemäss 
                                                              //                               VSS Daten korrigiert
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   /*Following telegram definition biger than 0x1000 will be only used in MCS
    * */
   MCS_NO_CMD                   = 0x1000,
   MCS_CMD_ACT                  = 0x1001,
   MCS_CMD_ACT_EX_DATA          = 0x1002,
   MCS_CMD_BLOCK                = 0x1003,
   MCS_CMD_BLOCKED              = 0x1004,
   MCS_CMD_BLOCK_REQUEST        = 0x1005,
   MCS_CMD_CANCEL_DONE          = 0x1006,
   MCS_CMD_CANCEL_EX_PARA       = 0x1007,
   MCS_CMD_CANCEL_EXPOSURE      = 0x1008,
   MCS_CMD_COM_START            = 0x1009,
   MCS_CMD_COM_DONE             = 0x100a,
   MCS_CMD_DATA_DELETED         = 0x100b,
   MCS_CMD_DEBUG                = 0x100c,
   MCS_CMD_DEL_DATA             = 0x100d,
   MCS_CMD_END_EXPOSURE         = 0x100e,
   MCS_CMD_ERROR                = 0x100f,
   MCS_CMD_EX_DATA              = 0x1010,
   MCS_CMD_EX_DATA_ACCEPTED     = 0x1011,
   MCS_CMD_EXPOSURDONE          = 0x1012,
   MCS_CMD_GET                  = 0x1013,
   MCS_CMD_HALT                 = 0x1014,
   MCS_CMD_INFO                 = 0x1015,
   MCS_CMD_INIT                 = 0x1016,
   MCS_CMD_INIT_DONE            = 0x1017,
   MCS_CMD_INT_COM_START        = 0x1018,
   MCS_CMD_INT_COM_STARTED      = 0x1019,
   MCS_CMD_KEY                  = 0x101a,
   MCS_CMD_LIFECHECK_DONE       = 0x101b,
   MCS_CMD_LIFECHECK_REQUEST    = 0x101c,
   MCS_CMD_PARA_ACCEPTED        = 0x101d,
   MCS_CMD_PARA                 = 0x101e,
   MCS_CMD_PREP                 = 0x101f,
   MCS_CMD_PREP_DONE            = 0x1020,
   MCS_CMD_READY_FOR_XRAY       = 0x1021,
   MCS_CMD_RESET                = 0x1022,
   MCS_CMD_RESET_DONE           = 0x1023,
   MCS_CMD_SEC_CIRCUIT_STATE    = 0x1024,
   MCS_CMD_SET                  = 0x1025,
   MCS_CMD_SET_SEC_CIRCUIT      = 0x1026,
   MCS_CMD_START_EXPOSURE       = 0x1027,
   MCS_CMD_STOP                 = 0x1028,
   MCS_CMD_WARNING              = 0x1029,
   MCS_CMD_UDC_OK               = 0x102a,
   MCS_CMD_UNBLOCK              = 0x102b,
   MCS_CMD_UNBLOCKED            = 0x102c,
   MCS_CMD_UNBLOCK_REQUEST      = 0x102d,
   MCS_CMD_XRAY_OFF             = 0x102e,
   MCS_CMD_XRAY_ON              = 0x102f,
   MCS_CMD_MAIN_PULS_DATA       = 0x1030,
   MCS_CMD_PRXRAY_OFF           = 0x1031,
   MCS_CMD_READY_MAIN           = 0x1032,
   MCS_CMD_EX_PARA_CANCELED     = 0x1033,
   MCS_CMD_PATIENT_NAME         = 0x1034,
   MCS_CMD_DISPLAY              = 0x1035,
   MCS_CMD_DISPLAY_CLR          = 0x1036,
   MCS_CMD_DISPLAY_BAR          = 0x1037,
   MCS_CMD_EMCY_ACT_EXDATA      = 0x1038,
   MCS_CMD_GO_GRID              = 0x1039,
   MCS_CMD_JUMP_BOOT            = 0x103a,
   MCS_CMD_SERVICREQUEST        = 0x103b,
   MCS_CMD_SERVICDATA           = 0x103c,
   MCS_CMD_DISPLAY_BITMAP       = 0x103d,
   MCS_CMD_DISPLAY_GRAPHIC      = 0x103e,
   MCS_CMD_ACT_EX_DATA_ADVANCED = 0x103f,
   MCS_CMD_EX_DATA_ADVANCED     = 0x1040,
   MCS_CMD_STEREO_READY_FOR_XRAY = 0x1041,
   MCS_CMD_STEREO_XRAY_ON       = 0x1042,
   MCS_CMD_STEREO_XRAY_OFF      = 0x1043,
   MCS_CMD_STEREO_MOVE          = 0x1044,
   MCS_CMD_STEREO_MOVDONE       = 0x1045,
   MCS_CMD_STEREO_PREP          = 0x1046,
   MCS_CMD_STEREO_PREP_DONE     = 0x1047,
   MCS_CMD_INTENRAL_START_HOMING = 0x1048,
   MCS_CMD_BIOPSY_TARGET_DATA   = 0x1049,
   MCS_CMD_BIOPSY_TARGET_DATA_ACCEPTED = 0x104a,
   MCS_CMD_BIOPSY_TARGET_DATA_REJECTED = 0x104b,
   MCS_CMD_BIOPSY_ERROR         = 0x104c,
   MCS_CMD_BIOPSY_RECOVER       = 0x104d,
   MCS_CMD_BIOPSY_GO_HOME       = 0x104e,
   MCS_CMD_TOMO_READY_FOR_XRAY  = 0x104F,
   MCS_CMD_TOMO_XRAY_ON         = 0x1050,
   MCS_CMD_TOMO_XRAY_OFF        = 0x1051,
   MCS_CMD_TOMO_MOVE            = 0x1052,
   MCS_CMD_TOMO_MOVDONE         = 0x1053,
   MCS_CMD_TOMO_DATA            = 0x1054,
   MCS_CMD_TOMO_DONE            = 0x1055,
   MCS_CMD_TOMO_XRAY_ON_ROT     = 0x1056,
   MCS_CMD_TOMO_READY_ROT       = 0x1057,
   MCS_CMD_TOMO_XRAY_OFF_ROT    = 0x1058,
   MCS_CMD_2D3D_READY_FOR_XRAY  = 0x1059,
   MCS_CMD_2D3D_XRAY_ON         = 0x105A,
   MCS_CMD_2D3D_XRAY_OFF        = 0x105B,
   MCS_CMD_2D3D_MOVE            = 0x105C,
   MCS_CMD_2D3D_MOVDONE         = 0x105D,
   MCS_CMD_2D3D_DATA            = 0x105E,
   MCS_CMD_2D3D_DONE            = 0x105F,
   MCS_CMD_2D3D_XRAY_ON_ROT     = 0x1060,
   MCS_CMD_2D3D_READY_ROT       = 0x1061,
   MCS_CMD_2D3D_XRAY_OFF_ROT    = 0x1062,
   MCS_CMD_2D3D_MAIN_DATA       = 0x1063,
   MCS_CMD_2D3D_STOP_GRID       = 0x1064,
   MCS_CMD_2D3D_GRID_DONE       = 0x1065,
   MCS_CMD_TOMO_PREP_ON         = 0x1066,
   MCS_CMD_2D3D_PREP_ON         = 0x1067,
   MCS_CMD_CRL_GENERATOR_TOMO   = 0x1068,
   MCS_CMD_CRL_INTERFACSTART_RT_DATA = 0x1069,
   MCS_CMD_CDF_DOWNLOAD         = 0x106A,
   MCS_CMD_CDF_ACK              = 0x106B,
   MCS_CMD_PROD_ACT             = 0x106C,
   MCS_CMD_PROD_GET             = 0x106D,
   MCS_CMD_PROD_SET             = 0x106E,
   MCS_CMD_AWS_FORCBLOCK        = 0x106F,
   MCS_CMD_AWS_RELEASBLOCK      = 0x1070,
   MCS_CMD_EMCY_DECOMPRESS      = 0x1071,
   MSG_CMD_INTSTATE_SET         = 0x1072,
   MSG_CMD_TIMEOUT              = 0x1073,
   MSG_CMD_BUTTON               = 0x1074,
   MSG_INT_EX_DATA_ACCEPTED     = 0x1075,
   MSG_INT_STATE_REQ            = 0x1076,
   MSG_INT_STATE_SET            = 0x1077,
   MSG_INT_READY_FOR_XRAY       = 0x1078,
   MSG_CMD_END_EXPOSURE_OK      = 0x1079,
   MSG_CMD_CANCEL_EXPOSURE_OK   = 0x107A,
   MSG_INT_ACT_EX_DATA          = 0x107B,
   MCS_CMD_COL_ACT              = 0x10A0,
   MCS_CMD_COL_COM_START        = 0x10A1,
   MCS_CMD_COL_COM_STARTED      = 0x10A2,
   MCS_CMD_COL_DEAD             = 0x10A3,
   MCS_CMD_COL_DEBUG            = 0x10A4,
   MCS_CMD_COL_ERROR            = 0x10A5,
   MCS_CMD_COL_FILTER           = 0x10A6,
   MCS_CMD_COL_FILTER_DONE      = 0x10A7,
   MCS_CMD_COL_GET              = 0x10A8,
   MCS_CMD_COL_INIT             = 0x10A9,
   MCS_CMD_COL_INIT_DONE        = 0x10Aa,
   MCS_CMD_COL_JUST_GET_POS     = 0x10Ab,
   MCS_CMD_COL_JUST_MOVE        = 0x10Ac,
   MCS_CMD_COL_JUST_MOVNOT_POS  = 0x10Ad,
   MCS_CMD_COL_JUST_MOVED       = 0x10Ae,
   MCS_CMD_COL_JUST_POS         = 0x10Af,
   MCS_CMD_COL_JUSTAGE          = 0x10b0,
   MCS_CMD_COL_JUSTAGEND        = 0x10b1,
   MCS_CMD_COL_JUSTAGENDED      = 0x10b2,
   MCS_CMD_COL_JUSTAGSTARTED    = 0x10b3,
   MCS_CMD_COL_LAMP_OFF         = 0x10B4,
   MCS_CMD_COL_LAMP_ON          = 0x10B5,
   MCS_CMD_COL_LIFECHECK        = 0x10B6,
   MCS_CMD_COL_LIFECHECK_DONE   = 0x10B7,
   MCS_CMD_COL_PARA             = 0x10B8,
   MCS_CMD_COL_PARA_ACK         = 0x10B9,
   MCS_CMD_COL_MOVE             = 0x10Ba,
   MCS_CMD_COL_MOVED            = 0x10Bb,
   MCS_CMD_COL_STOP             = 0x10Bc,
   MCS_CMD_COL_STOP_DONE        = 0x10Bd,
   MCS_CMD_COL_SWITCHED_OFF     = 0x10Be,
   MCS_CMD_COL_SWITCHED_ON      = 0x10bf,
   MCS_CMD_COL_WARNING          = 0x10c0,
   MCS_CMD_COL_ASYM_MOVE        = 0x10c1,
   MCS_CMD_COL_ASYM_MOVDONE     = 0x10c2,
   MCS_CMD_COL_ROT              = 0x10c3,
   MCS_CMD_COL_ROT_DONE         = 0x10c4,
   MCS_CMD_INITIAL_STOP         = 0x10c5,
   MCS_CMD_DETECTOR_SYNC        = 0x10F0,
   MCS_CMD_DETECTOR_ABORT       = 0x10F1,
   MCS_CMD_DETECTOR_GetData     = 0x10F2,
   MCS_CMD_DETECTOR_SetmAs      = 0x10F3,
   MCS_CMD_DETECTOR_NoData      = 0x10F4,
   MCS_CMD_DETECTOR_XrayButton  = 0x10F5,
   MCS_CMD_DETECTOR_StartHoming = 0x10F6,
   MCS_CMD_DETECTOR_HomingDelay = 0x10F7   
   
   } 
   t_enum_commando_typ;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#endif

/***************************************************************************/
/* End of FILE                                                             */
/***************************************************************************/

