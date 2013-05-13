/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2010 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef _COMMON_AWS_PARA_OEM_COLLISION_H_
#define _COMMON_AWS_PARA_OEM_COLLISION_H_
////////////////////////////////////////////////////////////////
typedef enum      
   {
   /////////////////////////////////////////////////////////////
   E_OEM_COLLISION_ROT_OFF           = 0x00,
   E_OEM_COLLISION_ROT_LEFT          = 0x01,   
   E_OEM_COLLISION_ROT_RIGHT         = 0x02,
   E_OEM_COLLISION_ROT_LEFT_RIGHT    = 0x03,
   E_OEM_COLLISION_ROT_UNDEF         = 0xFF
   /////////////////////////////////////////////////////////////
   }
e_OEM_Collision_Rot_id;
////////////////////////////////////////////////////////////////
#define L_MAX_OEM_COLLISION_ROT        0x04
////////////////////////////////////////////////////////////////
typedef enum      
   {
   /////////////////////////////////////////////////////////////
   E_OEM_COLLISION_LIFT_OFF          = 0x00,
   E_OEM_COLLISION_LIFT_DOWN         = 0x01,   
   E_OEM_COLLISION_LIFT_UNDEF        = 0xFF
   /////////////////////////////////////////////////////////////
   }
e_OEM_Collision_Lift_id;
////////////////////////////////////////////////////////////////
#define L_MAX_OEM_COLLISION_LIFT       0x02
////////////////////////////////////////////////////////////////
#endif
