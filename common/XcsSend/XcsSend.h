/*****************************************************************************/
/*                                                                           */
/* File name: XcsSend.h              Version: 1.0                            */
/*                                                                           */
/*****************************************************************************/
/*                                                                           */
/* Type: Header File                 Programming language: C++               */
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


#ifndef XCS_SEND_H_
#define XCS_SEND_H_


#include "libs/libemw/app.h"
#include "gbl/AxnClientIF.h"
#include "mcstelegram.h"

class CXcsSend : public CThread       // Derived from CThread
{

  public:
    static CXcsSend* create ();
    static CThread* factory ();
    
    void setAxnClient (CAxnClientIF* p_AxnClientIF);

  protected:  
    virtual bool onInit ();
    virtual void onMsgReceived (int MsgId,          // message ID
                                const void* pData,  // received data
                                int DataLen,        // data length of the received data
                                int SenderId        // ID of the sender
    );
    void onExit ();
    
  private:
    CAxnClientIF*     m_AxnClientIF;
};

#endif
