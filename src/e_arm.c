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

int e_arm(PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo) {
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

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
    ui_xcu->sel_func = AXCS_KV_STATUS;

    p->kv_set = !p->kv_set;
    if (!p->kv_set) {
        PtSetResource(widget, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
        PtSetResource(widget, Pt_ARG_COLOR, Pg_BLACK, 0);
        PtSetResource(ABW_i, Pt_ARG_COLOR, Pg_BLACK, 0);
        PtSetResource(ABW_j, Pt_ARG_COLOR, Pg_BLACK, 0);
    }
    else {
        PtSetResource(widget, Pt_ARG_FILL_COLOR, Pg_BLUE, 0);
        PtSetResource(widget, Pt_ARG_COLOR, Pg_WHITE, 0);
        PtSetResource(ABW_i, Pt_ARG_COLOR, Pg_BLUE, 0);
        PtSetResource(ABW_j, Pt_ARG_COLOR, Pg_BLUE, 0);
        ui_xcu->func_params = 1;
    }
    p->density_set = false;
    PtSetResource(ABW_f, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
    PtSetResource(ABW_f, Pt_ARG_COLOR, Pg_BLACK, 0);
    axn_send(ui_xcu); /* send telegram */
	return( Pt_CONTINUE );
}
