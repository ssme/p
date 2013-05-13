/*******************************************************************************/
/* Name: axcs-typedef.h	                                            		       */
/*******************************************************************************/
/* This file contains all definitions and data structures                      */
/* which are used by axcs.h and all the applications using axcs.h	             */
/*                                                                             */
/* axcs.h  is NOT included within this file					                      */
/*                                                                             */
/* 22-Apr-2010   Wi: create out of former axcscom.h                            */
/* 25-May-2010   Wi: new type ACS_FLOAT                                        */
/*******************************************************************************/
 
#ifndef  AXCSTYPEDEF_H
#define  AXCSTYPEDEF_H

#if !( defined( AXN_NT ) || defined( AXN_NEUTRINO ) || defined( AXN_WINCE ) )
#error Defines not set! Please set a define AXN_NT for WinNt or AXN_NEUTRINO for QNX/Neutrino target
#endif


#ifdef AXN_NT
/************************************************************************/ 
/* type definitions for NT 	 					*/
/************************************************************************/
#define ACS_BYTE  	 unsigned char
#define ACS_SCHAR  	 signed char
#define ACS_WORD	    unsigned short
#define ACS_INT	    short
#define ACS_ENUM  	 unsigned char
#define ACS_LINT		 long
#define ACS_SET		 unsigned short
#define ACS_DUMMY		 unsigned char
#define ACS_STRING    unsigned short
#define ACS_STRING_8  unsigned char
#define ACS_DCOUNT    unsigned short
#define ACS_COUNT     unsigned char
#define ACS_DWORD     unsigned long
#define ACS_FLOAT32   float
#endif


#ifdef AXN_WINCE
/************************************************************************/ 
/* type definitions for window CE 					*/
/************************************************************************/
#define ACS_BYTE  	 unsigned char
#define ACS_SCHAR  	 signed char
#define ACS_WORD		 unsigned short
#define ACS_INT	    short
#define ACS_ENUM  	 unsigned char
#define ACS_LINT		 long
#define ACS_SET		 unsigned short
#define ACS_DUMMY		 unsigned char
#define ACS_STRING    unsigned short
#define ACS_STRING_8  unsigned char
#define ACS_DCOUNT    unsigned short
#define ACS_COUNT     unsigned char
#define ACS_DWORD     unsigned long
#define ACS_FLOAT32   float
#endif

#ifdef AXN_NEUTRINO 
/************************************************************************/ 
/* type definitions for Neutrino  					*/
/************************************************************************/
#define ACS_BYTE  	 unsigned char
#define ACS_SCHAR  	 signed char
#define ACS_WORD		 unsigned short
#define ACS_INT		 short
#define ACS_ENUM  	 unsigned char
#define ACS_LINT		 long
#define ACS_SET		 unsigned short
#define ACS_DUMMY		 unsigned char
#define ACS_STRING    unsigned short
#define ACS_STRING_8  unsigned char
#define ACS_DCOUNT    unsigned short
#define ACS_COUNT     unsigned char
#define ACS_DWORD     unsigned long
#define ACS_FLOAT32   float
#endif

#endif
