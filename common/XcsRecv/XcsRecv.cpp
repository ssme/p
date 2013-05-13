/*****************************************************************************/
/*                                                                           */
/* File name: XcsRecv.cpp            Version: 1.0                            */
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
#include "XcsRecv.h"

////////////////////////////////////////////////////////
// Define constants



////////////////////////////////////////////////////////


CXcsRecv* CXcsRecv::create ()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsRecv::create");
  return (CXcsRecv*)CThread::create(CXcsRecv::factory, false);
}

CThread* CXcsRecv::factory ()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsRecv::factory");
  return new CXcsRecv;
}

////////////////////////////////////////////////////////

void CXcsRecv::setAxnClient (CAxnClientIF* p_AxnClientIF)
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsRecv::setAxnClient");
  m_AxnClientIF = p_AxnClientIF;
}

////////////////////////////////////////////////////////

void CXcsRecv::execute ()
{
  TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CXcsRecv::execute");
  acs_obj_header_t*  XCS_ObjectHdr = (acs_obj_header_t*)&XCS_RecvIn[0];
  ACS_BYTE           XCS_Result    = ACS_AXN_OK;

        
  XCS_Result = m_AxnClientIF -> recvObject((ACS_BYTE*)XCS_RecvIn);
 if( XCS_Result == ACS_AXN_OK )
  {
      memcpy( XCS_RecvOut, XCS_RecvIn, XCS_ObjectHdr->length );    
      postResultMsg( MSG_XCS_RECV, XCS_RecvOut, XCS_ObjectHdr->length );
  }
  else
  {
    postResultMsg( MSG_RECV_ERROR, &XCS_Result, sizeof(XCS_Result) );
  }
}


/*********************************************************************************************/
/*                                                                                           */
/* end of file                                                                               */
/*                                                                                           */
/*********************************************************************************************/

