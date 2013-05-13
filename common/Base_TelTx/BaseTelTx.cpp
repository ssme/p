/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseTelTx.cpp
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
 #include "BaseTelTx.h"
 #include "BaseSystem.h"
 
//extern int SendObjToServer(ACS_BYTE* buffer,int length);
CBase_TelTx_t::CBase_TelTx_t(void)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_TelTx_t::CBase_TelTx_t");
}
CBase_TelTx_t::~CBase_TelTx_t(void)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_TelTx_t::~CBase_TelTx_t");
}

/************************************************************************
 * Name: run
 * Description: Send telegram out to MailBox Manager.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/
unsigned short CBase_TelTx_t::send(CThread*  m_XcsSend)
{ 
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_TelTx_t::send");
	int status;
	temp_buffer = cTelegramBuffer;    
	telegramHead = (acs_obj_header_t*) temp_buffer;   
	telegramHead->length=tTransBuf.length+sizeof(acs_obj_header_t);
	telegramHead->mode=tTransBuf.mode;
	telegramHead->fktkreis=tTransBuf.group_id;
	telegramHead->target=tTransBuf.target;
	telegramHead->sender=uiSenderAPID;
	telegramHead->telid=tTransBuf.obj_id;  
	    
	memcpy(temp_buffer + sizeof(acs_obj_header_t), tTransBuf.S_Obj_p,tTransBuf.length);

	  // send to server
    m_XcsSend -> sendMsg( MSG_ENDPOINTID_OWNTHREAD, MSG_XCS_SEND, temp_buffer, telegramHead->length);
	return(OK);  
}

unsigned short CBase_TelTx_t::send(CThread*  m_XcsSend,void* _data, unsigned char length)
{
}


//end of file
