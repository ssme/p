/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseTelRx.cpp
 * Revision: 1.0
 * Brief Description:
 *       Create a base class for all the module to use to create their
 *       special instanse as a main controller, used for send out telegram
 *       definition.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/
 #include "trace.h"
#include <BaseTelRx.h>
 #include "BaseSystem.h"
 
CBase_TelRx_t::CBase_TelRx_t(void)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_TelRx_t::CBase_TelRx_t");
}
CBase_TelRx_t::~CBase_TelRx_t(void)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_TelRx_t::~CBase_TelRx_t");	
}
//end of file
