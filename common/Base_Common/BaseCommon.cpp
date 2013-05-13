/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: BaseCommon.cpp
 * Revision: 1.0
 * Brief Description:
 *       All common function and data will be handled in this class, and 
 *       this class will be used for all the function in one module.
 * Change List:
 * Revision: 1.0 2011-11-15 YZM
 * Create this file.
 * ******************************************************************/
//#include "trace.h"
#include "BaseCommon.h"
//#include <portab.h>

CBase_Common_t::CBase_Common_t(void)
{
	//TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_Common_t::CBase_Common_t");
    /*Telegram filter for all the states
     * */
    m_ptr_a_e_valid_commands[E_STATE_START] = (t_enum_commando_typ *)loc_s_cmds_start;
    m_ptr_a_e_valid_commands[E_STATE_INIT] = (t_enum_commando_typ *)loc_s_cmds_start_init;
    m_ptr_a_e_valid_commands[E_STATE_INIT_DONE] = (t_enum_commando_typ *)loc_s_cmds_init_done;
    m_ptr_a_e_valid_commands[E_STATE_INITIAL_STOP] = (t_enum_commando_typ *)loc_s_cmds_init_stop;
    m_ptr_a_e_valid_commands[E_STATE_RESET] = (t_enum_commando_typ *)loc_s_cmds_reset;
    m_ptr_a_e_valid_commands[E_STATE_BLOCKED] = (t_enum_commando_typ *)loc_s_cmds_blocked;
    m_ptr_a_e_valid_commands[E_STATE_STANDBY] = (t_enum_commando_typ *)loc_s_cmds_standby;
    m_ptr_a_e_valid_commands[E_STATE_PREP] = (t_enum_commando_typ *)loc_s_cmds_prep;
    m_ptr_a_e_valid_commands[E_STATE_PREP_DONE] = (t_enum_commando_typ *)loc_s_cmds_prep_done;
    m_ptr_a_e_valid_commands[E_STATE_EXPOSURE] = (t_enum_commando_typ *)loc_s_cmds_exposure;
    m_ptr_a_e_valid_commands[E_STATE_EXPOSURE_DONE] = (t_enum_commando_typ *)loc_s_cmds_exposure_done;
    m_ptr_a_e_valid_commands[E_STATE_STOP] = (t_enum_commando_typ *)loc_s_cmds_stop;
    m_ptr_a_e_valid_commands[E_STATE_HALT] = (t_enum_commando_typ *)loc_s_cmds_halt;
    
    /*State change filter for all the states
     * */
    m_ptr_a_e_valid_states[E_STATE_START] = (e_state_type*)loc_state_start;
    m_ptr_a_e_valid_states[E_STATE_INIT] = (e_state_type*)loc_state_init;
    m_ptr_a_e_valid_states[E_STATE_INIT_DONE] = (e_state_type*)loc_state_init_done;
    m_ptr_a_e_valid_states[E_STATE_INITIAL_STOP] = (e_state_type*)loc_state_init_stop;
    m_ptr_a_e_valid_states[E_STATE_RESET] = (e_state_type*)loc_state_reset;
    m_ptr_a_e_valid_states[E_STATE_BLOCKED] = (e_state_type*)loc_state_blocked;
    m_ptr_a_e_valid_states[E_STATE_STANDBY] = (e_state_type*)loc_state_standby;
    m_ptr_a_e_valid_states[E_STATE_PREP] = (e_state_type*)loc_state_prep;
    m_ptr_a_e_valid_states[E_STATE_PREP_DONE] = (e_state_type*)loc_state_prep_done;
    m_ptr_a_e_valid_states[E_STATE_EXPOSURE] = (e_state_type*)loc_state_exposure;
    m_ptr_a_e_valid_states[E_STATE_EXPOSURE_DONE] = (e_state_type*)loc_state_exposure_done;
    m_ptr_a_e_valid_states[E_STATE_STOP] = (e_state_type*)loc_state_stop;
    m_ptr_a_e_valid_states[E_STATE_HALT] = (e_state_type*)loc_state_halt;
    
    iCrrentState = E_STATE_START;
    iLastState = E_STATE_START;
    /*Clear the block flag
     * */
    blCurrentBlockStatus.ul_all = 0x00000000;
    
}

CBase_Common_t::~CBase_Common_t(void)
{
	//TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_Common_t::~CBase_Common_t");	
    //dummy
}

/************************************************************************
 * Name: stateSet of CBase_System_t
 * Description: set this module's state to the wanted state.
 * Hazard Classification: None.
 * Parameters: 
 *     stateToBe: State to be used;
 * Return: result of the setting operation
 * *********************************************************************/
char CBase_Common_t::stateSet(e_state_type stateToBe)
{
	//TRACE_ENTRY_EXIT(MAIN_APP_FLAGS, "CBase_Common_t::stateSet");
    char result = OK;
    e_state_type *proc_ptr_e_help_str_state;
    /*If current status is the same as the wanted status, then do nothing
     * just return with ok.
     * */
    if(iCrrentState == stateToBe)
    {
        result = OK;
        return result; 
    }
    
    if((stateToBe >= L_MAX_STATE)||(stateToBe<E_STATE_START))
    {
        result = NOT_OK;
        REPORTERROR;
    }
    else
    {
       /*Check if the wanted state change is allowed in current state
        * */ 
       proc_ptr_e_help_str_state = (e_state_type *)m_ptr_a_e_valid_states[stateGet()];
       while((*proc_ptr_e_help_str_state != E_STATE_UNDEF) 
                 && 
             (*proc_ptr_e_help_str_state != (e_state_type)stateToBe)
            )
       {
           proc_ptr_e_help_str_state++;
       }
       if(E_STATE_UNDEF == *proc_ptr_e_help_str_state)
       {
           result = NOT_OK;
           REPORTERROR;
       }
       else
       {
           iCrrentState = stateToBe;
           if(iLastState != iCrrentState)
           {
               /*if system state is changed, then we should do something according
                * to the subsystem requirement.
                * */
               stateChangeHandle();
               iLastState = iCrrentState;
           }
           result = OK;
       }    
               
    }
    return result;    
}

/************************************************************************
 * Name: stateChangeHandle
 * Description: when state changed, subcomponents should do its corresponding
 *              work.
 * Hazard Classification: None.
 * Parameters: none
 * Return: none
 * *********************************************************************/
void CBase_Common_t::stateChangeHandle(void)
{
    switch(stateGet())
    {
        case E_STATE_START:
            {      
            handle_state_start();  
            break; 
            }
        case E_STATE_INIT:
            {              
            handle_state_init();  
            break; 
            }
        case E_STATE_INIT_DONE:
            {              
            handle_state_init_done();  
            break; 
            }
        case E_STATE_INITIAL_STOP:
            {              
            handle_state_initial_stop();  
            break; 
            }
        case E_STATE_RESET:
            {             
            handle_state_reset();  
            break; 
            }
        case E_STATE_STANDBY:
            {              
            handle_state_standby();  
            break; 
            }
        case E_STATE_BLOCKED:
            {              
            handle_state_blocked();  
            break; 
            }
        case E_STATE_PREP:
            {              
            handle_state_prep();  
            break; 
            }
        case E_STATE_PREP_DONE:
            {              
            handle_state_prep_done();  
            break; 
            }
        case E_STATE_EXPOSURE:
            {              
            handle_state_exposure();  
            break; 
            }
        case E_STATE_EXPOSURE_DONE:
            {              
            handle_state_exposure_done();  
            break; 
            }
        case E_STATE_STOP:
            {              
            handle_state_stop();  
            break; 
            }
        case E_STATE_HALT:
            {              
            handle_state_halt();  
            break; 
            }
        default:
           {
           /*Get a invalid state.
            * give a error report will be replaced by real error mechanisim
            * then system enter into the halt state.
            * */
           REPORTERROR; 
           stateSet(E_STATE_HALT);
           handle_state_halt();
           break;   
           }   
    }
}
/************************************************************************
 * Name: stateGet of CBase_System_t
 * Description: Get current module's state.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
e_state_type CBase_Common_t::stateGet(void)
{ 
    return iCrrentState;    
}
   

/************************************************************************
 * Name: handle_state_init
 * Description: handle of the state start.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_start(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_init
 * Description: handle of the state init.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_init(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_init_done
 * Description: handle of the state init_done.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_init_done(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_initial_stop
 * Description: handle of the state init_stop.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_initial_stop(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_reset
 * Description: handle of the state reset.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_reset(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_standby
 * Description: handle of the state standby.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_standby(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_blocked
 * Description: handle of the state blocked.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_blocked(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_prep
 * Description: handle of the state prep.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_prep(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_prep_done
 * Description: handle of the state prep_done.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_prep_done(void)
{
    //to be fulfiled by every functional module
}  

/************************************************************************
 * Name: handle_state_exposure
 * Description: handle of the state exposure.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_exposure(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_exposure_done
 * Description: handle of the state exposure_done.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_exposure_done(void)
{
    //to be fulfiled by every functional module
} 

/************************************************************************
 * Name: handle_state_stop
 * Description: handle of the state stop.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_stop(void)
{
    //to be fulfiled by every functional module
}

/************************************************************************
 * Name: handle_state_halt
 * Description: handle of the state halt.
 * Hazard Classification: None.
 * Parameters: NONE
 * Return: state of the this module
 * *********************************************************************/
void CBase_Common_t::handle_state_halt(void)
{
    //to be fulfiled by every functional module
}  
  
/************************************************************************
 * Name: checkTelegramAccptable
 * Description: to check if current telegram is accptable according to current
 *              state.
 * Hazard Classification: None.
 * Parameters: telReceive: the received telegram number.
 * Return: state of the this module
 * *********************************************************************/
char CBase_Common_t::checkTelegramAccptable(t_enum_commando_typ telReceive)
{
    char result;
    t_enum_commando_typ *proc_ptr_e_help_str_command;
    
    
    /*Make sure the telegram is in the range of outside and inside list.
     * and the internal telegram id = outside_ID + MSG_NO_CMD;
     * */
    unsigned int uiTelIDTemp = (unsigned int)telReceive;
    unsigned int uiTelIDstart = (unsigned int)MSG_NO_CMD;
    t_enum_commando_typ telIDAdjusted = (t_enum_commando_typ)MSG_NO_CMD;
    if(uiTelIDTemp > uiTelIDstart)
    {
        uiTelIDTemp = uiTelIDTemp - uiTelIDstart;
        telIDAdjusted = (t_enum_commando_typ)uiTelIDTemp;
    }
    
    /*Check if the telegram is allowed to handle for current state.
    * */ 
    proc_ptr_e_help_str_command = (t_enum_commando_typ *)m_ptr_a_e_valid_commands[stateGet()];
    while((*proc_ptr_e_help_str_command != E_NO_CMD) 
              && 
          (*proc_ptr_e_help_str_command != (t_enum_commando_typ)telReceive)
              &&
          (*proc_ptr_e_help_str_command != (t_enum_commando_typ)telIDAdjusted)
         )
    {
        proc_ptr_e_help_str_command++;
    }
    if(E_NO_CMD == *proc_ptr_e_help_str_command)
    {
        result = FLAG_NO;
    }
    else
    {
        result = FLAG_YES;
    }    

    return result;    
}

/************************************************************************
 * Name: setBlockedFlag
 * Description: Set the blocked component's indication.
 * Hazard Classification: None.
 * Parameters: blockedflag2set: flag to be set on the flag.
 * Return: state of the this module
 * *********************************************************************/
char CBase_Common_t::setBlockedFlag(const BlockType& blockedflag2set)
{
    char result = OK;
    
    blCurrentBlockStatus.ul_all = (blCurrentBlockStatus.ul_all) | (blockedflag2set.ul_all);
    
    return result;
}

/************************************************************************
 * Name: rmBlockedFlag
 * Description: remove the corresponding blocked component's indication.
 * Hazard Classification: None.
 * Parameters: blockedflag2set: flag to be remove on the flag.
 * Return: state of the this module
 * *********************************************************************/
char CBase_Common_t::rmBlockedFlag(const BlockType& blockedflag2rm)
{
    char result = OK;
    
    blCurrentBlockStatus.ul_all = (blCurrentBlockStatus.ul_all) & (~blockedflag2rm.ul_all);
    
    return result;
}

/************************************************************************
 * Name: getBlockedFlag
 * Description: Get current block flag status.
 * Hazard Classification: None.
 * Parameters: blockedflag2set: flag to be remove on the flag.
 * Return: state of the this module
 * *********************************************************************/
BlockType CBase_Common_t::getBlockedFlag(void)
{          
    return blCurrentBlockStatus;
}

//end of file
