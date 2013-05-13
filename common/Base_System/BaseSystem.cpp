/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseSystem.cpp
 * Revision: 1.0
 * Brief Description:
 *       Create a base class for all the module to use to create their
 *       special instanse as a main controller.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/


#include <stdio.h>
#include <string.h>
#define TRACE_DEFINE_FLAGSET
#include "trace.h"
#include "BaseSystem.h"
#include <telegr.h>		/* telegram definition */
					
					
					
static char *temp_buffer_w23;
static char temp_Telegram_buffer[512];
static acs_obj_header_t* ACSHeaderW23;

CBase_System_t::CBase_System_t(unsigned int tempAPID,unsigned int tempENDPOINT)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::CBase_System_t.....");
	uiAPID=tempAPID;
	MSG_ENDPOINT=tempENDPOINT;
	
//	/*Set the timer counter to default value, which is not timeout message
//     * */   
//    for(unsigned char i=0; i<MAX_TIMER; i++)
//    {
//        timer_counter_Base[i].uiProcessAPID = 0;
//        timer_counter_Base[i].uiIntertimerID = 0;
//        timer_counter_Base[i].uitimer_count = 0;
//        timer_counter_Base[i].uctimer_status = 0;        
//    }
//    
//    /*timer operator initialization
//     * */
//    TimerOperator.uiProcessAPID = uiAPID;
//    TimerOperator.uiIntertimerID = 0;
//    TimerOperator.uitimer_count = 0;
//    TimerOperator.uctimer_status = TIMER_STATUS_STOP;
    
    /*for timer thread
     * */
    TimerOnFlag = FLAG_NO; 
//    pthread_attr_init( &attr );
//    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED ); 
	
}

CBase_System_t::~CBase_System_t(void)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::~CBase_System_t.....");
    //to be modified
}

bool CBase_System_t:: onInit()
{
    return true;
}

bool CBase_System_t::initApp () 
{
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::onInit.....");   

   if (!init(MSG_ENDPOINT))
   {
	   return false;   // Init failed. Terminate application.
   }
   
   // ----- create XCS communication threads --------------
   m_XcsRecv		= CXcsRecv::create();
   m_XcsSend		= CXcsSend::create();


   // ----- test on success -------------------------------
   if (m_XcsRecv		== false ||
	   m_XcsSend		== false )
   {
	 //CTRACE(MAIN_APP_FLAGS, ERROR, 0, "FATAL ERROR: creating sub threads failed.");
	 return false;
   }
   
   // ----- create AxnClient instance ---------------------
   m_AxnClientIF = CAxnClientIFCreator::newAxnClientIF();
   
   // ----- set thread environement -----------------------
   m_XcsSend   -> setAxnClient( m_AxnClientIF );
   m_XcsRecv   -> setAxnClient( m_AxnClientIF );
  
   //connect axnroot
   {
         unsigned char    iConnect;
         
         iConnect = m_AxnClientIF -> connectToServer(uiAPID , (ACS_WORD) 5);
         if (iConnect != ACS_AXN_OK)
         {
           //CTRACE(MAIN_APP_FLAGS, ERROR, 0, "CXcsClient: connectToServer failed.");
         }
         else
         {
         	m_XcsRecv -> start(RECEIVE_TIME_INTERVAL);
         }
   }   
   /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
   return true;    // Init ok. Enter message loop.
}


void CBase_System_t::onMsgReceived(int MsgId, const void* pData, int DataLen, int SenderId)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::onMsgReceived");	
   
     ACS_BYTE*          XCS_RecvBuf   = (ACS_BYTE*)pData;
  acs_obj_header_t*  tel_hdr_p = (acs_obj_header_t*)&XCS_RecvBuf[0];
    
     switch (MsgId)
    {
    	case MSG_XCS_RECV:
    		      m_XcsRecv -> start(RECEIVE_TIME_INTERVAL);
//    	   if(tel_hdr_p->telid !=DUMMY_MSG )
//            {
//	            printf("get message %d %d %x %x %x\n",DataLen,tel_hdr_p->mode,tel_hdr_p->telid,tel_hdr_p->target,tel_hdr_p->sender);
// 	            printf("sender %d\n",tel_hdr_p->sender);
//            }
            if(tel_hdr_p->mode == MESSAGE_MODE)
            {
                messageModeHandle(tel_hdr_p->telid, tel_hdr_p->sender);
            }
            else
            {
                if(tel_hdr_p->sender==uiAPID)
                {
                   	break;
                }
                CBase_TelRx_t* telegram = xcsRxMap[tel_hdr_p->telid];
                        
                if (telegram)
	    		{				
		    		telegram->telHandle(tel_hdr_p);
		    	}
		    	else
		    	{
            	     REPORTERROR;
                }            
            
            }
            break;
            default:
			break;
    }
	  return;	
}


/************************************************************************
 * Name: telRxRegister
 * Description: Regist all the wanted telegrams to its instance.
 * Hazard Classification: None.
 * Parameters: 
 *     objID: used to seperate different telegram, telegram ID;
 *     telegram: its own object
 * Return: NONE
 * *********************************************************************/
void CBase_System_t::telRxRegister(unsigned short objID, CBase_TelRx_t* telegram)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::telRxRegister");	
    xcsRxMap[objID] = telegram;
}

/************************************************************************
 * Name: telRxRegister
 * Description: Regist all the send out telegrams to its instance.
 * Hazard Classification: None.
 * Parameters: 
 *     objID: used to seperate different telegram, telegram ID;
 *     telegram: its own object
 * Return: NONE
 * *********************************************************************/
void CBase_System_t::telTxRegister(unsigned short objID, CBase_TelTx_t* telegram)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::telTxRegister");	
    xcsTxMap[objID] = telegram;
}

/************************************************************************
 * Name: run
 * Description: during bootup need to send out some telegram out to register.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/
void CBase_System_t::messageModeSendoutTelegram(unsigned char mode, ushort obj_id, 
                                void* _data, unsigned char length,unsigned char targetAPID)
{


    temp_buffer_w23 = temp_Telegram_buffer;
    
    if(FUNCTIONAL_MODE == mode)
    {
        targetAPID = 0;
    }
    
    ACSHeaderW23 = (acs_obj_header_t*) temp_buffer_w23;   
    ACSHeaderW23->length=length+sizeof(acs_obj_header_t);
    ACSHeaderW23->mode=mode;
    ACSHeaderW23->fktkreis=1;
    ACSHeaderW23->target=targetAPID;
    ACSHeaderW23->sender=uiAPID;
    ACSHeaderW23->telid=obj_id;  
	    
    memcpy(temp_buffer_w23 + sizeof(acs_obj_header_t), _data,length);
	
    // send to server
	m_XcsSend -> sendMsg( MSG_ENDPOINTID_OWNTHREAD, MSG_XCS_SEND, temp_buffer_w23, ACSHeaderW23->length);

}

/************************************************************************
 * Name: run
 * Description: Handle all message mode telegrams.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/
void CBase_System_t::messageModeHandle ( unsigned short obj_id, unsigned char target)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::messageModeHandle");
    unsigned char ucdataLength=0;
    unsigned short inlist[Max_TelRx] = {0};
    unsigned char Tel_Index = 0;
    unsigned char TelRx_Number;
    std::map<unsigned short, CBase_TelRx_t*>::iterator TelRx_Iter;
	
	switch (obj_id)
	{
	case INIT_MSG:
        /* Register all wanted telegram to AXNROOT.
         * After register these telegram, when AXNROOT receive the function
         * mode telegram, and this telegram is in this module's inlist, then
         * it will receive the telegram.
         * */
        TelRx_Number = (unsigned char)xcsRxMap.size();
        if(TelRx_Number <= 0 || TelRx_Number >= Max_TelRx)
        {
            REPORTERROR;
            return;
        }
        inlist[0] = TelRx_Number;        

        //If the received telegrams exceed the maxmum number of 40, 
        //then should change the Marcros of Max_TelRx        

        //The received Telegram registration
        
        for(TelRx_Iter = xcsRxMap.begin(); TelRx_Iter != xcsRxMap.end(); TelRx_Iter++)
	    {
            inlist[Tel_Index+1] = TelRx_Iter->first;
            Tel_Index++;
        }
        ucdataLength = (inlist[0] + 1) * sizeof(unsigned short);	
        messageModeSendoutTelegram(FUNCTIONAL_MODE,INLIST_ENH, (void*)&inlist, ucdataLength);
        
        /*Create a timer to try to sart the communication with Check_Task,
         * so the Check task do not need the timer to connect to itself
         * */
//        if(MCS_AP_CHECK != uiAPID)
//        {
//            TimerOperator. uiIntertimerID = TIMER_ID_COM_START;     
//            TimerOperator.uitimer_count = TIMER_1s; //100*10=1s,
//            TimerOperator.uctimer_status = TIMER_STATUS_RUNING;
//            MCS_startTimer(TimerOperator);
//        }
		/*Start the timer
		 * */
		if(FLAG_NO == TimerOnFlag)
		{
//		    pthread_attr_init( &attr );
//            pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_DETACHED );
//            pthread_create( NULL, &attr, &run_caller, this );
		    TimerOnFlag = FLAG_YES;
		}
		
		break;

	case DUMMY_MSG:
		break;

	case ERROR_MSG:
		break;

	case TURN_ON:
		break;

	case TURN_OFF:
		break;

	default:
		break;
	}
}
/************************************************************************
 * Name: run
 * Description: work as a interface for telegram sending from all place.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/
void CBase_System_t::telSend(unsigned short objID, void* _data, unsigned char length)
{
	TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_System_t::telSend");
    CBase_TelTx_t* telegram = xcsTxMap[objID];
    if (telegram)
    {
        // Handle this telegram via call its handle object
        telegram->send(m_XcsSend,_data, length);
    }
    else
    {
         /* Errror happens */
        REPORTERROR;
    }
}

/************************************************************************
 * Name: MCS_startTimer
 * Description: add a new timer to the list.
 * Hazard Classification: None.
 * Parameters: 
 *           newTimer: The new timer structure to be added to the timer list.
 * Return: the new timer ID in the timer List, will be used for further operation.
 * *********************************************************************/

unsigned char CBase_System_t::MCS_startTimer(MCS_timer_t & newTimer)
{

    unsigned char timerIDresult = OK;
    unsigned char newtimerID = newTimer.uiIntertimerID;
    
    /*Only handle the right number timer
     * */
    if(newtimerID>=MAX_TIMER)
    {    	
    	timerIDresult = NOT_OK;
    	return timerIDresult;
    }
        
    pthread_mutex_lock(&mutexTimerBase);
    if(0 == timer_counter_Base[newtimerID].uiProcessAPID)
    {
        timer_counter_Base[newtimerID].uiProcessAPID = newTimer.uiProcessAPID;
        timer_counter_Base[newtimerID].uiIntertimerID = newTimer.uiIntertimerID;
        timer_counter_Base[newtimerID].uitimer_count = newTimer.uitimer_count;
        timer_counter_Base[newtimerID].uctimer_status = newTimer.uctimer_status;
    }    
    pthread_mutex_unlock(&mutexTimerBase);    
    
    return timerIDresult;
}

/************************************************************************
 * Name: MCS_rmTimerBase
 * Description: the removed timer id if success, or else will be TIMER_ADD_FAIL.
 * Hazard Classification: None.
 * Parameters: 
 *           timerID2remove: the timer postion in the list;
 *           TimerData: timer parameter for double check.
 * Return: the modified timer id if succeed, or else NOT_OK.
 * *********************************************************************/

unsigned char CBase_System_t::MCS_rmTimer(MCS_timer_t & TimerData)
{

    unsigned char timerIDresult = OK;
    unsigned char timerIDtemp = TimerData.uiIntertimerID;
    
    /*Only handle the right number timer
     * */
    if(timerIDtemp>=MAX_TIMER)
    {    	
    	timerIDresult = NOT_OK;
    	return timerIDresult;
    }
    
    pthread_mutex_lock(&mutexTimerBase);
    if((TimerData.uiProcessAPID==timer_counter_Base[timerIDtemp].uiProcessAPID) 
            &&
       (TimerData.uiIntertimerID==timer_counter_Base[timerIDtemp].uiIntertimerID)
            &&
       (0!=timer_counter_Base[timerIDtemp].uiProcessAPID))
    {
        timer_counter_Base[timerIDtemp].uiProcessAPID = 0;
        timer_counter_Base[timerIDtemp].uiIntertimerID = 0;
        timer_counter_Base[timerIDtemp].uitimer_count = 0;
        timer_counter_Base[timerIDtemp].uctimer_status = 0x00;
        timer_counter_Base[timerIDtemp].uctimer_status &= ~TIMER_TIMEOUT_NOT_STOP;
    }
    else
    {        
        timerIDresult = NOT_OK;
    }
    pthread_mutex_unlock(&mutexTimerBase);
    
    /*Only handle the right number timer
     * */     
    if(TIMER_ADD_FAIL == timerIDresult)
    {
    	REPORTERROR;
    }
    return timerIDresult;
    
}


/************************************************************************
 * Name: stopTimerBase
 * Description: stop a timer warning.
 * Hazard Classification: None.
 * Parameters: 
 *           timerID2stop: the timer postion in the list;
 *           TimerData: timer parameter for double check.
 * Return: the modified timer id if succeed, or else TIMER_ADD_FAIL.
 * *********************************************************************/

unsigned char CBase_System_t::MCS_pauseTimer(MCS_timer_t & TimerData)
{
    unsigned char timerIDresult = OK;
    unsigned char timerIDtemp = TimerData.uiIntertimerID;
    
    /*Only handle the right number timer
     * */
    if(timerIDtemp>=MAX_TIMER)
    {    	
    	timerIDresult = NOT_OK;
    	return timerIDresult;
    }
    
    pthread_mutex_lock(&mutexTimerBase);
    if((TimerData.uiProcessAPID == timer_counter_Base[timerIDtemp].uiProcessAPID) 
            &&
       (TimerData.uiIntertimerID == timer_counter_Base[timerIDtemp].uiIntertimerID)
            &&
       (0!=timer_counter_Base[timerIDtemp].uiProcessAPID))
    {
        timer_counter_Base[timerIDtemp].uctimer_status &= 0xF0;
        timer_counter_Base[timerIDtemp].uctimer_status |= TIMER_STATUS_PAUSE;
    }
    else
    {        
        timerIDresult = NOT_OK;
    }
    pthread_mutex_unlock(&mutexTimerBase);
    
    /*Only handle the right number timer
     * */     
    if(TIMER_ADD_FAIL == timerIDresult)
    {
    	REPORTERROR;
    }
    return timerIDresult;
}

/************************************************************************
 * Name: stopTimerBase
 * Description: restart a timer with th new interval(timer counter).
 * Hazard Classification: None.
 * Parameters: 
 *           timerID2start: the timer postion in the list;
 *           TimerData: timer parameter for double check, and also contain 
 *                      the new timer interval value.
 * Return: the modified timer id if succeed, or else TIMER_ADD_FAIL.
 * *********************************************************************/
unsigned char CBase_System_t::MCS_restartTimer(MCS_timer_t & TimerData)
{   
    
    unsigned char timerIDresult = OK;
    unsigned char timerIDtemp = TimerData.uiIntertimerID;
    
    /*Only handle the right number timer
     * */
    if(timerIDtemp>=MAX_TIMER)
    {    	
    	timerIDresult = NOT_OK;
    	return timerIDresult;
    }
    
    pthread_mutex_lock(&mutexTimerBase);
    if((TimerData.uiProcessAPID==timer_counter_Base[timerIDtemp].uiProcessAPID)
            &&
       (TimerData.uiIntertimerID == timer_counter_Base[timerIDtemp].uiIntertimerID)
            &&
       (0!=timer_counter_Base[timerIDtemp].uiProcessAPID)
            &&
       (TIMER_STATUS_PAUSE & timer_counter_Base[timerIDtemp].uctimer_status))
    {        
        timer_counter_Base[timerIDtemp].uctimer_status &= 0xF0;
        timer_counter_Base[timerIDtemp].uctimer_status |= TIMER_STATUS_RUNING;
    }
    else
    {        
        timerIDresult = NOT_OK;
    }
    pthread_mutex_unlock(&mutexTimerBase);
    
    /*Only handle the right number timer
     * */     
    if(TIMER_ADD_FAIL == timerIDresult)
    {
    	REPORTERROR;
    }
    return timerIDresult;
    
    
}

/************************************************************************
 * Name: increaseTimerCounter
 * Description: increase every timer counter and send the corresponding
 *              telegrams.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/

void CBase_System_t::increaseTimerCounter(void)
{
    Msg_CMD_TIMEOUT_t       Msg_CMD_TIMEOUT;
    ushort                  APID4timeout;
    unsigned char           ucMode4Message;
    unsigned char    sendoutTelegram;
   
    for(unsigned char i=0; i<MAX_TIMER; i++)
    {
        sendoutTelegram = FLAG_NO;
        if((timer_counter_Base[i].uitimer_count > 0)
                &&
          (TIMER_STATUS_RUNING & timer_counter_Base[i].uctimer_status))
        {
            pthread_mutex_lock(&mutexTimerBase);	
            timer_counter_Base[i].uitimer_count = timer_counter_Base[i].uitimer_count-1;
            /*IF timercounter is out, then send a warning messag to its thread
             * */
            if(timer_counter_Base[i].uitimer_count == 0)
            {
                /*Fufill the data structure for telegram sending
                 * */
                Msg_CMD_TIMEOUT.timerID = timer_counter_Base[i].uiIntertimerID;
                APID4timeout = timer_counter_Base[i].uiProcessAPID;
                ucMode4Message = DIREKT_MODE; 
                sendoutTelegram = FLAG_YES;
                if(!(TIMER_TIMEOUT_NOT_STOP&&timer_counter_Base[i].uctimer_status))
                {
                    timer_counter_Base[i].uctimer_status &= ~TIMER_TIMEOUT_NOT_STOP; 
                }              
                               
            }
            pthread_mutex_unlock(&mutexTimerBase);
            /*Send out the timeout warning message to the corresponding 
                 * thread.
                 * */
            if(FLAG_YES == sendoutTelegram)
            {
                messageModeSendoutTelegram(ucMode4Message,MSG_CMD_TIMEOUT,
                                           (void*)&Msg_CMD_TIMEOUT,sizeof(Msg_CMD_TIMEOUT_t),
                                           APID4timeout);
            }
        }                                              
    }
}

/************************************************************************
 * Name: run_caller
 * Description: Main circle of task, it will wait for the telegram comming
 *              and then call its handle function.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/
void* CBase_System_t::run_caller (void* thread)
{
    return ((CBase_System_t*)thread)->timer_Thread();
}

/************************************************************************
 * Name: timer_Thread
 * Description: work as a thread for timer.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: NONE
 * *********************************************************************/
void* CBase_System_t::timer_Thread (void)
{
	
   struct sigevent         event;
   struct itimerspec       itime;
   timer_t                 timer_id;
   int                     chid;
   int                     rcvid;
   timer_message_t            msg;
   

   chid = ChannelCreate(0);

   event.sigev_notify = SIGEV_PULSE;
   event.sigev_coid = ConnectAttach(ND_LOCAL_NODE, 0, 
                                    chid, 
                                    _NTO_SIDE_CHANNEL, 0);
   event.sigev_priority = getprio(0);
   event.sigev_code = MY_PULSE_CODE;
   timer_create(CLOCK_REALTIME, &event, &timer_id);

   //10s delay after the registration to AXNROOT
   itime.it_value.tv_sec = 10;
   /* 500 million nsecs = .5 secs */
   itime.it_value.tv_nsec = 1000000; 
   //10ms interval
   itime.it_interval.tv_sec = 0;
   /* 500 million nsecs = .5 secs */
   //1ms interval
   itime.it_interval.tv_nsec = 10000000; 
   timer_settime(timer_id, 0, &itime, NULL);

   /*
    * As of the timer_settime(), we will receive our pulse 
    * in 10 seconds (the itime.it_value) and every 1 
    * milli seconds thereafter (the itime.it_interval)
    */

   for (;;) 
   {
       rcvid = MsgReceive(chid, &msg, sizeof(msg), NULL);
       if (rcvid == 0) 
       { /* we got a pulse */
            if (msg.t_Pulse.code == MY_PULSE_CODE) 
            { 
                increaseTimerCounter();               
            } /* else other pulses ... */
       } /* else other messages ... */
   }
		
}



	  		
void  CBase_System_t::onExit ()
{
    CAxnClientIFCreator::deleteAxnClientIF (m_AxnClientIF);

    deleteThread (m_XcsSend);
    deleteThread (m_XcsRecv);
} 
/*********************************************************************************************/
/*                                                                                           */
/* end of file                                                                               */
/*                                                                                           */
/*********************************************************************************************/

