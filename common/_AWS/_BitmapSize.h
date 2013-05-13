/****************************************************************************/
/* COPYRIGHT (C) SIEMENS AG 2008 ALL RIGHTS RESERVED                        */
/****************************************************************************/
#ifndef __BITMAPSIZE_H_
#define __BITMAPSIZE_H_

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

#ifdef L_ATWS_H
   #pragma pack(1)
#endif

#define L_BITMAP_SIZE   1024

////////////////////////////////////////////////////////////////////////////////
typedef struct 
   {
   alt_u8    u8_PosX;   
   alt_u8    u8_PosY;   
   alt_u8    u8_SizeX;   
   alt_u8    u8_SizeY;   
   alt_u8    a_u8_Bitmap[L_BITMAP_SIZE + 1];  
   }
   PACKED BitmapStruct;
////////////////////////////////////////////////////////////////////////////////
typedef  struct
   {
   alt_u8                    u8_Command;
   BitmapStruct              s_Bitmap;
   }
   PACKED t_BitmapCmdTyp;
////////////////////////////////////////////////////////////////////////////////
typedef enum      
   {
   E_DISPLAY_FILL_AREA            =  0,
   E_DISPLAY_FILL_AREA_PATTERN    =  1,
   E_GRAPHIC_CLEAR_AREA           =  2,
   E_GRAPHIC_DELETE_DISPLAY       =  3,
   E_GRAPHIC_DRAW_BOX             =  4,
   E_GRAPHIC_DRAW_FRAME           =  5,
   E_GRAPHIC_DRAW_FRAME_BOX       =  6,
   E_GRAPHIC_DRAW_LINE            =  7,
   E_GRAPHIC_DRAW_RECTANGLE       =  8,
   E_GRAPHIC_INVERT_DISPLAY       =  9,
   
   E_GRAPHIC_UNDEF                = 0xFF,
   }
e_GraphicType;

#define L_MAX_GRAPHICS           10

#endif //__BITMAPSIZE_H_
