/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseSystem.h
 * Revision: 1.0
 * Brief Description:
 *       Create a base class for all the module to use to create their
 *       special instanse as a main controller.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/
#ifndef _BASESYSTEM_H_
#define _BASESYSTEM_H_

#include "libs/libemw/app.h"
#include "libs/libemw/timer.h"
#include "XcsRecv.h"
#include "XcsSend.h"
#include "gbl/AxnClientIFCreator.h"
#include "gbl/errordef.h"
#include "gbl/axcs_typedef.h"
//.........................
#include <BaseCommon.h>
#include <BaseTelTx.h>
#include <BaseTelRx.h>

//#include <xcuglobalinc.h>
#include <telegr.h>
#include <taskmbid.h>
#include "xcuglobalinc.h"
//#include <map>

#include <error.h>
#include <acs.h>

#include <pthread.h>

#include <gbl/xcsobj.h>
#include <mcsglobsys.h>
#include "mcstelegram.h"
#include "mcs_intTelParaTrans.h"
#include <time.h>
#include <sys/netmgr.h>
#include <sys/neutrino.h>

typedef union {
	struct _pulse   t_Pulse;
} timer_message_t;
//START Macro definiction

//START Macro definiction
#define Max_TelRx 40
//....................................
#define  AXN_OK   0

#define RECEIVE_TIME_INTERVAL  2  //2s


class CBase_System_t : public CBaseApp
{
public:    
	unsigned int uiAPID;
	unsigned int MSG_ENDPOINT;
	
public:
    CBase_System_t(unsigned temp=XCU_AP_ID,unsigned int tempENDPOINT=0);
    virtual ~CBase_System_t(void);
    
    virtual bool initApp();
    virtual void messageModeSendoutTelegram(unsigned char mode, ushort obj_id, 
                                            void* _data, unsigned char length,unsigned char targetAPID=0);
    virtual void messageModeHandle(unsigned short obj_id, unsigned char target);

	virtual void telSend(unsigned short objID, void* _data=NULL, unsigned char length=0);
    virtual void telRxRegister(unsigned short objID, CBase_TelRx_t* telegram);
    virtual void telTxRegister(unsigned short objID, CBase_TelTx_t* telegram); 
    
    /*Timer operation
     * */
    virtual unsigned char MCS_startTimer(MCS_timer_t & newTimer);    
    virtual unsigned char MCS_rmTimer(MCS_timer_t & TimerData);
    virtual unsigned char MCS_pauseTimer(MCS_timer_t & TimerData);
    virtual unsigned char MCS_restartTimer(MCS_timer_t & TimerData);
    virtual void increaseTimerCounter(void);
    virtual void* timer_Thread (void);
    static  void* run_caller (void* thread);    

protected:
		virtual bool onInit();
		virtual void onMsgReceived(int MsgId, const void* pData, int DataLen, int SenderId);		
		void onExit ();

public:
    pthread_mutex_t mutexTimerBase;   
    unsigned char TimerOnFlag;     

private:
    CAxnClientIF*     m_AxnClientIF;
    CXcsRecv*         m_XcsRecv;
    CXcsSend*         m_XcsSend;
    
    /*Data structure to save the receive and send telegrams
     * */
    std::map<unsigned short, CBase_TelRx_t*> xcsRxMap;
    std::map<unsigned short, CBase_TelTx_t*> xcsTxMap;
    
    /*used for the timer related operation
     * */
    //used for timer    
    pthread_attr_t attr; 
    MCS_timer_t timer_counter_Base[MAX_TIMER];     
};

#endif   
/**************************************************************************************************************************************************/
/*                                                                                                                                                */
/* End of File                                                                                                                                    */
/*                                                                                                                                                */
/**************************************************************************************************************************************************/



