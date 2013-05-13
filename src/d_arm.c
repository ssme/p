/* Y o u r   D e s c r i p t i o n                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"

#include "p.h"

extern p_t* p;

int d_arm(PtWidget_t *widget, ApInfo_t *apinfo,
    PtCallbackInfo_t *cbinfo)
{
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	p->sid_set = !p->sid_set;

	ui_xcu_t* ui_xcu = (ui_xcu_t*)malloc(sizeof(ui_xcu_t));
	if (ui_xcu == NULL)
		return( Pt_CONTINUE );
	memset(ui_xcu, 0, sizeof(ui_xcu_t));
	ui_xcu->acs_obj_header.length = sizeof(ui_xcu_t);
	ui_xcu->acs_obj_header.mode = ACS_MODE_DIRECT;
	ui_xcu->acs_obj_header.fktkreis = 1;
	ui_xcu->acs_obj_header.target = _RECEIVER;
	ui_xcu->acs_obj_header.sender = _SENDER;
	ui_xcu->acs_obj_header.telid = UI_XCU;
	ui_xcu->sel_func = AXCS_SID_TRACKING;
	ui_xcu->func_params = p->sid_set;
	axn_send(ui_xcu); /* send telegram */
	
	return(Pt_CONTINUE);
}
