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
int
i_arm( PtWidget_t *widget, ApInfo_t *apinfo, PtCallbackInfo_t *cbinfo )

	{

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

    char* text = NULL;
    int kv = 0;
    float density = 0;
    if (p->kv_set) {
        PtGetResource(ABW_e, Pt_ARG_TEXT_STRING, &text, 0);
        sscanf(text, "%d\nkV", &kv);
        kv++;
        sprintf(text, "%d\nkV\0", kv);
        PtSetResource(ABW_e, Pt_ARG_TEXT_STRING, text, 0);
        PtDamageWidget(ABW_e);
        ui_xcu->sel_func = AXCS_ACQ_KV;
        ui_xcu->func_params = kv;
    }
    else if (p->density_set) {
        PtGetResource(ABW_f, Pt_ARG_TEXT_STRING, &text, 0);
        sscanf(text, "%f", &density);
        density += 0.1;
        sprintf(text, "%+-.1f\0", density);
        PtSetResource(ABW_f, Pt_ARG_TEXT_STRING, text, 0);
        PtDamageWidget(ABW_f);
        ui_xcu->sel_func = AXCS_EXP_CORRECTION;
        ui_xcu->func_params = density * 10;
    }

    axn_send(ui_xcu); /* send telegram */

    return( Pt_CONTINUE );

	}
