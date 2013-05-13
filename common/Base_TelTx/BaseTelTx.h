/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseTelTx.h
 * Revision: 1.0
 * Brief Description:
 *       Create a base class for all the module to use to create their
 *       special instanse as a main controller, used for send out telegram
 *       definition.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/
//#include "ipc.h"

//#include <xculog.h>
//#include <portab.h>
#include <telegr.h>
#include <taskmbid.h>
#include "xcuglobalinc.h"
#include "mcsglobsys.h"
//#include <os_call.h>
#include <error.h>
#include <acs.h>
#include <gbl/xcsobj.h>
#include <ipc.h>
#include "libs/libemw/app.h"

#ifndef _BASETELTX_H_
#define _BASETELTX_H_

#define AXN_OK  0

class CBase_TelTx_t
{
    public:	
    IPC_TransBuf_t tTransBuf;
    unsigned int uiSenderAPID;
    int iResult;
    
    
    char *temp_buffer;
    char cTelegramBuffer[512];
    acs_obj_header_t* telegramHead;        
    
    public:
    CBase_TelTx_t(void);
    virtual ~CBase_TelTx_t(void);
    virtual unsigned short send(CThread*  m_XcsSend); 
    virtual unsigned short send(CThread*  m_XcsSend,void* _data, unsigned char length);    
};

#endif //_BASETELTX_H_
