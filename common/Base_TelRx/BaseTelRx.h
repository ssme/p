/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseTelRx.h
 * Revision: 1.0
 * Brief Description:
 *       Create a base class for all the module to use to create their
 *       special instanse as a main controller, used for send out telegram
 *       definition.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/


#include "telegr.h"
#include <taskmbid.h>
#include "xcuglobalinc.h"
//#include <os_call.h>
#include <error.h>
#include <acs.h>
#include <gbl/xcsobj.h>
 
#ifndef _BASETELRX_H_
#define _BASETELRX_H_

class CBase_TelRx_t
{
    public: 		
    int iResult;    
    
    public:
    CBase_TelRx_t(void);
    virtual ~CBase_TelRx_t(void);
    virtual unsigned short telHandle(void *pData) = 0; 
};

#endif //_BASETELRX_H_
