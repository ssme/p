/*****************************************************************************/
/*                                                                           */
/* File name: XcsSend.cpp            Version: 1.0                            */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Type: Class Definition File       Programming language: C++               */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*                                                                           */
/* Changes:                                                                  */
/*                                                                           */
/* Date     | Name |   Charm   | Reason                                      */
/* ---------+------+-----------+-------------------------------------------- */
/*          |      |           |                                             */
/*          |      |           |                                             */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Description:                                                              */
/* ============                                                              */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/*              Copyright (c) Siemens AG 2011. All rights reserved           */
/*                                                                           */
/*****************************************************************************/

#include "trace.h"
#include "XcsSend.h"

////////////////////////////////////////////////////////

CXcsSend* CXcsSend::create ()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsSend::create");
  return (CXcsSend*)CThread::create(CXcsSend::factory, false);
}

CThread* CXcsSend::factory ()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsSend::factory");
  return new CXcsSend;
}

bool CXcsSend::onInit ()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsSend::onInit");
  return true;
}

void CXcsSend::onMsgReceived (int MsgId, const void* pData, int DataLen, int SenderId)
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsSend::onMsgReceived");
  switch (MsgId)
  {
    case MSG_XCS_SEND:
      if ( m_AxnClientIF )
	  	{
		      if ( m_AxnClientIF->sendObject( (ACS_BYTE*)pData ) != ACS_AXN_OK )
		      {
		        CTRACE(MAIN_APP_FLAGS,ERROR, 0, "CXcsSend: sendObject failed.");
		      }
		}
      break;    
  }
  return;
    
}

void CXcsSend::setAxnClient (CAxnClientIF* p_AxnClientIF)
{
  m_AxnClientIF = p_AxnClientIF;
}  


void CXcsSend::onExit()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsSend::onExit");
}

/*********************************************************************************************/
/*                                                                                           */
/* end of file                                                                               */
/*                                                                                           */
/*********************************************************************************************/
