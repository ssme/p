/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef _PADDLEID_H_
#define _PADDLEID_H_

typedef enum      
   {
   E_PADDLE_VOID                           =    0,
   E_PADDLE_18x24_HIGH_NOVA                =    1,
   E_PADDLE_18x24_LOW_NOVA                 =    2,
   E_PADDLE_24x30_HIGH_NOVA                =    3,
   E_PADDLE_24x30_LOW_NOVA                 =    4,
   E_PADDLE_18x24_FLEX                     =    5,
   E_PADDLE_24x30_FLEX                     =    6,
   E_PADDLE_RECTANGULAR_SPOT               =    7,
   E_PADDLE_RECTANGULAR_SPOT_MAG           =    8,
   E_PADDLE_COMPRESSION_Mag                =    9,
   E_PADDLE_AXILLA_COMPRESSION_18x24       =   10,
   E_PADDLE_18x24_HIGH                     =   11,
   E_PADDLE_18x24_LOW                      =   12,
   E_PADDLE_24x30_HIGH                     =   13,
   E_PADDLE_24x30_LOW                      =   14,
   E_PADDLE_18x24_FLEX_NOVA                =   15,
   E_PADDLE_24x30_FLEX_NOVA                =   16,
   E_PADDLE_RECTANGULAR_SPOT_NOVA          =   17,
   E_PADDLE_RECTANGULAR_SPOT_MAG_1_5_NOVA  =   18,
   E_PADDLE_COMPRESSION_Mag1_5_NOVA        =   19,
   E_PADDLE_BIOPSY_COMPRESSION             =   20,
   E_PADDLE_2D_BIOPSY_COMPRESSION          =   21,
   E_PADDLE_ASYM_18x24_HIGH                =   22,
   E_PADDLE_ASYM_18x24_LOW                 =   23,
   E_PADDLE_SPOT_PLUS                      =   24, // @ - KS - 08-dec-2009 - E319
   E_PADDLE_LASER_CROSS                    =   25, // @ - KS - 21-jan-2010 - E321
   E_PADDLE_ALPHA_NUM                      =   26, // @ - KS - 12-jul-2010 - E339
   E_PADDLE_NOT_USED_27                    =   27,
   E_PADDLE_NOT_USED_28                    =   28,
   E_PADDLE_NOT_USED_29                    =   29,
   E_PADDLE_TOMO                           =   30,
   E_PADDLE_NOT_USED_31                    =   31,
   E_PADDLE_AXILLA_COMPRESSION_18x24_NOVA  =   32,
   E_PADDLE_NOT_USED_33                    =   33,
   E_PADDLE_NOT_USED_34                    =   34,
   E_PADDLE_NOT_USED_35                    =   35,
   E_PADDLE_NOT_USED_36                    =   36,
   E_PADDLE_NOT_USED_37                    =   37,
   E_PADDLE_NOT_USED_38                    =   38,
   E_PADDLE_NOT_USED_39                    =   39,
   E_PADDLE_NOT_USED_40                    =   40,
   E_PADDLE_NOT_USED_41                    =   41,
   E_PADDLE_NOT_USED_42                    =   42,
   E_PADDLE_NOT_USED_43                    =   43,
   E_PADDLE_NOT_USED_44                    =   44,
   E_PADDLE_NOT_USED_45                    =   45,
   E_PADDLE_NOT_USED_46                    =   46,
   E_PADDLE_NOT_USED_47                    =   47,
   E_PADDLE_NOT_USED_48                    =   48,
   E_PADDLE_NOT_USED_49                    =   49,
   E_PADDLE_NOT_USED_50                    =   50,
   E_PADDLE_OEM_STEREO_1                   =   51,
   E_PADDLE_OEM_STEREO_2                   =   52,
   E_PADDLE_OEM_STEREO_3                   =   53,
   E_PADDLE_OEM_STEREO_4                   =   54,
   E_PADDLE_NOT_USED_55                    =   55,
   E_PADDLE_NOT_USED_56                    =   56,
   E_PADDLE_NOT_USED_57                    =   57,
   E_PADDLE_NOT_USED_58                    =   58,
   E_PADDLE_NOT_USED_59                    =   59,
   E_PADDLE_NOT_USED_60                    =   60,
   E_PADDLE_NOT_USED_61                    =   61,
   E_PADDLE_NOT_USED_62                    =   62,
   E_PADDLE_NOT_USED_63                    =   63, // dont use because since HW VC00x no longer accessable
   
   E_PADDLE_UNDEF                         = 0xFF,
   }
e_paddle_id_type;

#define L_MAX_PADDLE_IDS   63
#endif //_PADDLELIB_HPP_

