/*******************************************************************************/
/* Name: axcscom.h	                                            		          */
/*******************************************************************************/
/* This file ontains all definitions and data structures  		                */
/* which are used by axcs.h and all the applications using axcs.h	             */
/*									                                                    */
/* axcs.h  is included within this file					                         */
/*									                                                    */
/* 26-Apr-2010   "gbl\" removed from include of axcs_typedef.h                 */
/* 22-Apr-2010   move type definitions into separate include file              */
/* 25-Mar-2008   #endif //XCU_XCSSTYLE  comment marks inserted                 */
/* 02-Mar-2008   ACS_UNICODE and ACS_BSTR removed, because they are not used   */
/* 05-Dec-2007   changed include of object-structures: axcs.h or xcsobj.h etc. */
/*               dependent on define XCU_XCSSTYLE, which must be used when     */
/*               compiling XCU-sources                                         */
/* 15-Nov-2006   ACS_UNICODE and ACS_BSTR temporarily redefined                */
/* 14-Nov-2006   ACS_UNICODE and ACS_BSTR removed, because they are not used   */
/*               New data types ACS_STRING_8, ACS_DCOUNT, ACS_COUNT, ACS_DWORD */
/* 06-May-1999   all definitions for ACS_SCHAR changed to "signed char"        */
/*               compiler switch and error condition                           */
/*******************************************************************************/
 
#ifndef  AXCSCOM_H
#define  AXCSCOM_H

#include "axcs_typedef.h"


/*************************************************************************/
/* Include of the axcs include file generated out of the data base	 */
/*************************************************************************/

#ifndef XCU_XCSSTYLE
/************************************************************************/ 
/* include object-structures with or without header (w/o for XCU only)	*/
/************************************************************************/
#include "axcs.h"
#else
#include "xcsobj.h"
#include "xcsobj_ad.h"
#endif  //XCU_XCSSTYLE 


#endif
