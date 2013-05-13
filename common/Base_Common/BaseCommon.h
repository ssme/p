/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseCommon.h
 * Revision: 1.0
 * Brief Description:
 *       All common function and data will be handled in this class, and 
 *       this class will be used for all the function in one module.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/
#include <_state.h>
#include "telFilterbyState.h"
#include <mcsglobsys.h>
#include "mcstelegram.h"
#include <stdio.h>
#include "_BlockTyp.h"
#include "ExData.h"
#include "EndExposureSwitches.h"
#include "_PaddleId.h"
#include "_TableId.h"
#include "PaddleFlag.h"
#include "TableFlag.h"

#ifndef _BASECOMMON_H_
#define _BASECOMMON_H_

class CBase_Common_t
{

    private:
    e_state_type          iCrrentState;
    e_state_type          iLastState;
    t_enum_commando_typ * m_ptr_a_e_valid_commands[L_MAX_STATE + 1];
    e_state_type *        m_ptr_a_e_valid_states[L_MAX_STATE + 1];
    BlockType             blCurrentBlockStatus;  
	  	
    public:
    CBase_Common_t(void);
    virtual ~CBase_Common_t(void);
    
    /*State operation
     * */
    virtual char          stateSet(e_state_type stateToBe);
    virtual e_state_type  stateGet(void); 
    virtual void          stateChangeHandle(void);
    /*Detail state change handle function.
     * in these functions, when state change, the corresponding handler will be
     * called. and these function will be different according to different
     * subcomponents.
     * */
    virtual void          handle_state_start(void);  
    virtual void          handle_state_init(void);  
    virtual void          handle_state_init_done(void);  
    virtual void          handle_state_initial_stop(void);  
    virtual void          handle_state_reset(void);  
    virtual void          handle_state_standby(void);  
    virtual void          handle_state_blocked(void);  
    virtual void          handle_state_prep(void);  
    virtual void          handle_state_prep_done(void);  
    virtual void          handle_state_exposure(void);  
    virtual void          handle_state_exposure_done(void);  
    virtual void          handle_state_stop(void);  
    virtual void          handle_state_halt(void);   
    
    virtual char       checkTelegramAccptable(t_enum_commando_typ telReceive); 
    
    /*Blocked flag operation
     * */
    virtual char       setBlockedFlag(const BlockType& blockedflag2set);
    virtual char       rmBlockedFlag(const BlockType& blockedflag2rm);
    virtual BlockType  getBlockedFlag(void);         
};

#endif //_BASECOMMON_H_

//end of file

