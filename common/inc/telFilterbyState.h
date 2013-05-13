/*********************************************************************
 * copyright: SIEMENS AG 2011
 * Author: SSME XP SC
 * Project: MCS
 * Product: W23
 * Data: 2011-11-15
 * File name: mcsglobsys.h
 * Revision: 1.0
 * Brief Description:
 *       Every state only receive some special telegrams, in this file,
 *       will define the accepted telegrams for every special state.
 * Change List:
 * Revision: 1.0 2011-12-12 YZM
 * Create this file.
 * ******************************************************************/
#ifndef _TELFILTERBYSTATE_H_
#define _TELFILTERBYSTATE_H_

#include "_State.h"
#include "_CmdId.h"


/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_start()                              */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Default State Funktion                                                   */
/*                                                                          */
/****************************************************************************/

const t_enum_commando_typ loc_s_cmds_start[] =
{ 
    E_CMD_ACT,
    E_CMD_HALT,
    E_CMD_INIT,
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_init()                               */
/*                                                                          */
/****************************************************************************/

const t_enum_commando_typ loc_s_cmds_start_init[] =
{ 
      E_CMD_HALT,
      E_CMD_ACT,
      E_CMD_GET,
      E_CMD_SET,
      E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_init_done()                          */
/*                                                                          */
/****************************************************************************/


const t_enum_commando_typ loc_s_cmds_init_done[] =
{
    E_CMD_HALT,
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_STOP,
    E_CMD_COM_DONE,
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_initial_stop()                       */
/*                                                                          */
/****************************************************************************/

const t_enum_commando_typ loc_s_cmds_init_stop[] =
{ 
    E_CMD_RESET,
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_STOP,
    E_CMD_UDC_OK,
    E_CMD_COM_START,
    ////////////////////////////////////////////////////////////////////////
    // @ - KS - E321 - 17-feb-2010       
    ////////////////////////////////////////////////////////////////////////
    E_CMD_PROD_ACT,
    E_CMD_PROD_GET,
    E_CMD_PROD_SET,    
    MCS_CMD_COM_START,
    ////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_reset()                              */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_reset[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_STOP,
    E_CMD_UDC_OK,
    MCS_CMD_RESET_DONE,
    E_CMD_RESET,
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_blocked()                            */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_blocked[] =
{ 
    E_CMD_EX_DATA,    
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_STOP,
    E_CMD_UDC_OK, // wegen Race Condition wird ignoriert
    E_CMD_UNBLOCK,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 18-nov-2008 - E270 - Tomo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_READY_FOR_XRAY,
    E_CMD_TOMO_XRAY_ON,             
    E_CMD_TOMO_XRAY_OFF,             
    E_CMD_TOMO_XRAY_OFF_ROT,
    E_CMD_TOMO_MOVE,             
    E_CMD_TOMO_MOVE_DONE,             
    E_CMD_TOMO_DATA,             
    E_CMD_TOMO_DONE,             
    E_CMD_TOMO_XRAY_ON_ROT,             
    E_CMD_TOMO_READY_ROT,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 23-apr-2009 - E282 - 2D3D 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_READY_FOR_XRAY,
    E_CMD_2D3D_XRAY_ON,             
    E_CMD_2D3D_XRAY_OFF,             
    E_CMD_2D3D_XRAY_OFF_ROT,
    E_CMD_2D3D_MOVE,             
    E_CMD_2D3D_MOVE_DONE,             
    E_CMD_2D3D_DATA,             
    E_CMD_2D3D_DONE,             
    E_CMD_2D3D_XRAY_ON_ROT,             
    E_CMD_2D3D_READY_ROT,
    E_CMD_2D3D_MAIN_DATA,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E287 - 15-may-2009 - Erweiterung f? 2D3D
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_STOP_GRID,
    E_CMD_2D3D_GRID_DONE,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E289 - 29-may-2009 - Erweiterung f? 2D3D/Tomo
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_PREP_ON,
    E_CMD_2D3D_PREP_ON,
    ////////////////////////////////////////////////////////////////////////
    // @ - KS - E321 - 17-feb-2010       
    ////////////////////////////////////////////////////////////////////////
    E_CMD_PROD_ACT,
    E_CMD_PROD_GET,
    E_CMD_PROD_SET,
    ////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};
   
/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_standby()                            */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_standby[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_BLOCK,
    E_CMD_EX_DATA, 
    E_CMD_EX_DATA_ADVANCED,
    E_CMD_EX_DATA_ACCEPTED,  
    E_CMD_PREP,
    E_CMD_STOP,
    E_CMD_UDC_OK, // wegen Race Condition wird ignoriert
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 18-nov-2008 - E270 - Tomo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_READY_FOR_XRAY,
    E_CMD_TOMO_XRAY_ON,             
    E_CMD_TOMO_XRAY_OFF,             
    E_CMD_TOMO_XRAY_OFF_ROT,
    E_CMD_TOMO_MOVE,             
    E_CMD_TOMO_MOVE_DONE,             
    E_CMD_TOMO_DATA,             
    E_CMD_TOMO_DONE,             
    E_CMD_TOMO_XRAY_ON_ROT,             
    E_CMD_TOMO_READY_ROT,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 23-apr-2009 - E282 - 2D3D 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_READY_FOR_XRAY,
    E_CMD_2D3D_XRAY_ON,             
    E_CMD_2D3D_XRAY_OFF,             
    E_CMD_2D3D_XRAY_OFF_ROT,
    E_CMD_2D3D_MOVE,             
    E_CMD_2D3D_MOVE_DONE,             
    E_CMD_2D3D_DATA,             
    E_CMD_2D3D_DONE,             
    E_CMD_2D3D_XRAY_ON_ROT,             
    E_CMD_2D3D_READY_ROT,
    E_CMD_2D3D_MAIN_DATA,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E287 - 15-may-2009 - Erweiterung f? 2D3D
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_STOP_GRID,
    E_CMD_2D3D_GRID_DONE,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E289 - 29-may-2009 - Erweiterung f? 2D3D/Tomo
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_PREP_ON,
    E_CMD_2D3D_PREP_ON,
    ////////////////////////////////////////////////////////////////////////
    // @ - KS - E321 - 17-feb-2010       
    ////////////////////////////////////////////////////////////////////////
    E_CMD_PROD_ACT,
    E_CMD_PROD_GET,
    E_CMD_PROD_SET,
    //////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_prep()                               */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_prep[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_CANCEL_EXPOSURE,
    E_CMD_PREP,
    E_CMD_STOP,
    E_NO_CMD
};
   
/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_prep_done()                          */
/*                                                                          */
/****************************************************************************/

const t_enum_commando_typ loc_s_cmds_prep_done[] =
{ 
    E_CMD_ACT,
    E_CMD_CANCEL_EXPOSURE,
    E_CMD_START_EXPOSURE,
    E_CMD_STOP,
    E_NO_CMD
};
         
/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_exposure()                           */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_exposure[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_END_EXPOSURE,
    E_CMD_STOP,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_STEREO_READY_FOR_XRAY,   // 65 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_XRAY_ON,          // 66 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_XRAY_OFF,         // 67 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_MOVE,             // 68 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_MOVE_DONE,        // 69 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_PREP,             // 70 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_PREP_DONE,        // 71 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 18-nov-2008 - E270 - Tomo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_XRAY_ON_ROT,             
    E_CMD_TOMO_XRAY_ON,             
    E_CMD_TOMO_XRAY_OFF,             
    E_CMD_TOMO_XRAY_OFF_ROT,
    E_CMD_TOMO_MOVE,             
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 23-apr-2009 - E282 - 2D3D 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_XRAY_ON_ROT,             
    E_CMD_2D3D_XRAY_ON,             
    E_CMD_2D3D_XRAY_OFF,             
    E_CMD_2D3D_XRAY_OFF_ROT,
    E_CMD_2D3D_MOVE,             
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E287 - 15-may-2009 - Erweiterung f? 2D3D
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_STOP_GRID,
    E_CMD_2D3D_GRID_DONE,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E289 - 29-may-2009 - Erweiterung f? 2D3D/Tomo
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_PREP_ON,
    E_CMD_2D3D_PREP_ON,
    //////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_exposure_done()                      */
/*                                                                          */
/****************************************************************************/

const t_enum_commando_typ loc_s_cmds_exposure_done[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_CANCEL_EXPOSURE,
    E_CMD_STOP,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 18-nov-2008 - E270 - Tomo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_READY_FOR_XRAY,
    E_CMD_TOMO_XRAY_ON_ROT,             
    E_CMD_TOMO_XRAY_ON,
    E_CMD_TOMO_XRAY_OFF,             
    E_CMD_TOMO_XRAY_OFF_ROT,
    E_CMD_TOMO_MOVE_DONE,             
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 23-apr-2009 - E282 - 2D3D 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_READY_FOR_XRAY,
    E_CMD_2D3D_XRAY_ON,             
    E_CMD_2D3D_XRAY_ON_ROT,             
    E_CMD_2D3D_XRAY_OFF,             
    E_CMD_2D3D_XRAY_OFF_ROT,
    E_CMD_2D3D_MOVE_DONE,             
    E_CMD_2D3D_MAIN_DATA,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E287 - 15-may-2009 - Erweiterung f? 2D3D
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_STOP_GRID,
    E_CMD_2D3D_GRID_DONE,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E289 - 29-may-2009 - Erweiterung f? 2D3D/Tomo
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_PREP_ON,
    E_CMD_2D3D_PREP_ON,
    //////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_stop()                               */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_stop[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_EX_DATA,   
    E_CMD_RESET,
    E_CMD_STOP,
    E_CMD_UDC_OK,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_STEREO_READY_FOR_XRAY,   // 65 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_XRAY_ON,          // 66 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_XRAY_OFF,         // 67 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_MOVE,             // 68 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_MOVE_DONE,        // 69 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_PREP,             // 70 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    E_CMD_STEREO_PREP_DONE,        // 71 // @ -  KS - 30-oct-2007 - E237 - Vorbereitung Stereo
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 18-nov-2008 - E270 - Tomo 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_READY_FOR_XRAY,
    E_CMD_TOMO_XRAY_ON,             
    E_CMD_TOMO_XRAY_OFF,             
    E_CMD_TOMO_XRAY_OFF_ROT,
    E_CMD_TOMO_MOVE,             
    E_CMD_TOMO_MOVE_DONE,             
    E_CMD_TOMO_DATA,             
    E_CMD_TOMO_DONE,             
    E_CMD_TOMO_XRAY_ON_ROT,             
    E_CMD_TOMO_READY_ROT,
    //////////////////////////////////////////////////////////////////////////
    // @ -  KS - 23-apr-2009 - E282 - 2D3D 
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_READY_FOR_XRAY,
    E_CMD_2D3D_XRAY_ON,             
    E_CMD_2D3D_XRAY_OFF,             
    E_CMD_2D3D_XRAY_OFF_ROT,
    E_CMD_2D3D_MOVE,             
    E_CMD_2D3D_MOVE_DONE,             
    E_CMD_2D3D_DATA,             
    E_CMD_2D3D_DONE,             
    E_CMD_2D3D_XRAY_ON_ROT,             
    E_CMD_2D3D_READY_ROT,
    E_CMD_2D3D_MAIN_DATA,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E287 - 15-may-2009 - Erweiterung f? 2D3D
    //////////////////////////////////////////////////////////////////////////
    E_CMD_2D3D_STOP_GRID,
    E_CMD_2D3D_GRID_DONE,
    //////////////////////////////////////////////////////////////////////////
    // @ - KS - E289 - 29-may-2009 - Erweiterung f? 2D3D/Tomo
    //////////////////////////////////////////////////////////////////////////
    E_CMD_TOMO_PREP_ON,
    E_CMD_2D3D_PREP_ON,
    ////////////////////////////////////////////////////////////////////////
    // @ - KS - E321 - 17-feb-2010       
    ////////////////////////////////////////////////////////////////////////
    E_CMD_PROD_ACT,
    E_CMD_PROD_GET,
    E_CMD_PROD_SET,
    //////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};

/****************************************************************************/
/*                                                                          */
/* class_basis_system::class_init_cmds_halt()                               */
/*                                                                          */
/****************************************************************************/
/*                                                                          */
/* Default State Funktion                                                   */
/*                                                                          */
/****************************************************************************/
const t_enum_commando_typ loc_s_cmds_halt[] =
{ 
    E_CMD_ACT,
    E_CMD_GET,
    E_CMD_SET,
    E_CMD_HALT,
    ////////////////////////////////////////////////////////////////////////
    // @ - KS - E321 - 17-feb-2010       
    ////////////////////////////////////////////////////////////////////////
    E_CMD_PROD_ACT,
    E_CMD_PROD_GET,
    E_CMD_PROD_SET,
    ////////////////////////////////////////////////////////////////////////
    E_NO_CMD
};

/*Following define the allowed state transfer
 * */
const e_state_type loc_state_start[] =
{
    E_STATE_INIT,
    E_STATE_HALT,
    E_STATE_UNDEF
};

const e_state_type loc_state_init[] =
{
    E_STATE_INIT_DONE,
    E_STATE_HALT,
    E_STATE_UNDEF
};

const e_state_type loc_state_init_done[] =
{
    E_STATE_INITIAL_STOP,
    E_STATE_HALT,
    E_STATE_UNDEF
};

const e_state_type loc_state_init_stop[] =
{
    E_STATE_RESET,
    E_STATE_INITIAL_STOP,
    E_STATE_UNDEF
};

const e_state_type loc_state_reset[] =
{
    E_STATE_BLOCKED,
    E_STATE_STOP,
    E_STATE_UNDEF
};

const e_state_type loc_state_blocked[] =
{
    E_STATE_STANDBY,
    E_STATE_STOP,
    E_STATE_UNDEF
};

const e_state_type loc_state_standby[] =
{
    E_STATE_PREP,
    E_STATE_STOP,
    E_STATE_BLOCKED,
    E_STATE_UNDEF
};

const e_state_type loc_state_prep[] =
{
    E_STATE_PREP_DONE,
    E_STATE_STOP,
    E_STATE_BLOCKED,
    E_STATE_UNDEF    
};

const e_state_type loc_state_prep_done[] =
{
    E_STATE_EXPOSURE,
    E_STATE_STOP,
    E_STATE_BLOCKED,
    E_STATE_UNDEF
};

const e_state_type loc_state_exposure[] =
{
    E_STATE_EXPOSURE_DONE,
    E_STATE_STOP,
    E_STATE_UNDEF
};

const e_state_type loc_state_exposure_done[] =
{
    E_STATE_BLOCKED,
    E_STATE_STOP,
    E_STATE_UNDEF
};

const e_state_type loc_state_stop[] =
{
    E_STATE_RESET,
    E_STATE_STOP,
    E_STATE_UNDEF
};

const e_state_type loc_state_halt[] =
{
    E_STATE_HALT,
    E_STATE_UNDEF
};

#endif //_TELFILTERBYSTATE_H_
//end of file
