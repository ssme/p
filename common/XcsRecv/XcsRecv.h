/*****************************************************************************/
/*                                                                           */
/* File name: XcsRecv.h              Version: 1.0                            */
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


#ifndef XCS_RECV_H_
#define XCS_RECV_H_

#include "libs/libemw/back.h"
#include "gbl/axcscom.h"
#include "gbl/AxnClientIF.h"
#include "mcstelegram.h"

class CXcsRecv : public CBackground       // Derived from CBackground
{

  public:
    static CXcsRecv*  create ();
    
    void setAxnClient (CAxnClientIF* p_AxnClientIF );
       
  protected:  
    static CThread*   factory ();
    virtual void execute();
    
  private:
    CTimer            m_Timer;
    CAxnClientIF*     m_AxnClientIF;
    unsigned char         XCS_RecvIn[MAX_LEN_ACS_OBJ];//ACS_SCHAR
    unsigned char         XCS_RecvOut[MAX_LEN_ACS_OBJ];
};

#endif
