#include "p.h"

extern p_t* p;

void ui_xcu_handler(void* parameter) {
    ui_xcu_t* ui_xcu = (ui_xcu_t*)parameter;
    char* text = NULL;
    char buffer[_BUFFER_LIMIT] = {0,};
    int kv = 0;
    float density = 0;
    int fuck_qnx = 0;
    if ((fuck_qnx = PtEnter(Pt_EVENT_PROCESS_PREVENT)) < 0)
        return;
    switch (ui_xcu->sel_func) {
    case AXCS_TOP_ALIGNMENT:
        PtSetResource(ABW_h, Pt_ARG_ONOFF_STATE, ui_xcu->func_params, 0);
        break;
    case AXCS_BLOCK_MOVEMENT:
        PtSetResource(ABW_l, Pt_ARG_ONOFF_STATE, ui_xcu->func_params, 0);
        break;
    case AXCS_SID_TRACKING:
        PtSetResource(ABW_d, Pt_ARG_ONOFF_STATE, ui_xcu->func_params, 0);
        break;
    case AXCS_FOCUS:
        PtSetResource(ABW_k, Pt_ARG_ONOFF_STATE, ui_xcu->func_params, 0);
        break;
    case AXCS_DOMINANT_WALL:
        PtSetResource(ABW_c, Pt_ARG_ONOFF_STATE,
            ((ui_xcu->func_params & 0x01) == 0x01), 0);
        PtSetResource(ABW_b, Pt_ARG_ONOFF_STATE,
            ((ui_xcu->func_params & 0x02) == 0x02), 0);
        PtSetResource(ABW_a, Pt_ARG_ONOFF_STATE,
            ((ui_xcu->func_params & 0x04) == 0x04), 0);
        break;
    case AXCS_HUD:
        switch (ui_xcu->func_params) {
        case 0:
            PtSetResource(ABW_g, Pt_ARG_TEXT_STRING, "H", 0);
            break;
        case 1:
            PtSetResource(ABW_g, Pt_ARG_TEXT_STRING, "U", 0);
            break;
        case 2:
            PtSetResource(ABW_g, Pt_ARG_TEXT_STRING, "D", 0);
            break;
        }
        break;
    case AXCS_ACQ_KV:
        PtGetResource(ABW_e, Pt_ARG_TEXT_STRING, &text, 0);
        sscanf(text, "%d\nkV", &kv);
        if (ui_xcu->func_params == 0)
            kv--;
        else if (ui_xcu->func_params == 1)
            kv++;
        else
            kv = ui_xcu->func_params;
        sprintf(buffer, "%d\nkV\0", kv);
        PtSetResource(ABW_e, Pt_ARG_TEXT_STRING, buffer, 0);
        PtDamageWidget(ABW_e);
        break;
    case AXCS_EXP_CORRECTION:
        PtGetResource(ABW_f, Pt_ARG_TEXT_STRING, &text, 0);
        sscanf(text, "%f", &density);
        if (ui_xcu->func_params == 0)
            density -= 0.1;
        else if (ui_xcu->func_params == 1)
            density += 0.1;
        else
            density = ui_xcu->func_params / 10.;
        sprintf(buffer, "%+-.1f\0", density);
        PtSetResource(ABW_f, Pt_ARG_TEXT_STRING, buffer, 0);
        PtDamageWidget(ABW_f);
        break;
    case AXCS_KV_STATUS:
        if (ui_xcu->func_params == 0) {
            p->kv_set = 0;
            PtSetResource(ABW_e, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
            PtSetResource(ABW_e, Pt_ARG_COLOR, Pg_BLACK, 0);
            PtSetResource(ABW_i, Pt_ARG_COLOR, Pg_BLACK, 0);
            PtSetResource(ABW_j, Pt_ARG_COLOR, Pg_BLACK, 0);
        }
        else {
            p->kv_set = 1;
            PtSetResource(ABW_e, Pt_ARG_FILL_COLOR, Pg_BLUE, 0);
            PtSetResource(ABW_e, Pt_ARG_COLOR, Pg_WHITE, 0);
            PtSetResource(ABW_i, Pt_ARG_COLOR, Pg_BLUE, 0);
            PtSetResource(ABW_j, Pt_ARG_COLOR, Pg_BLUE, 0);
        }
        p->density_set = false;
        PtSetResource(ABW_f, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
        PtSetResource(ABW_f, Pt_ARG_COLOR, Pg_BLACK, 0);
        break;
    case AXCS_DENSITY_STATUS:
        if (ui_xcu->func_params == 0) {
            p->density_set = false;
            PtSetResource(ABW_f, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
            PtSetResource(ABW_f, Pt_ARG_COLOR, Pg_BLACK, 0);
            PtSetResource(ABW_i, Pt_ARG_COLOR, Pg_BLACK, 0);
            PtSetResource(ABW_j, Pt_ARG_COLOR, Pg_BLACK, 0);
        }
        else {
            p->density_set = true;
            PtSetResource(ABW_f, Pt_ARG_FILL_COLOR, Pg_BLUE, 0);
            PtSetResource(ABW_f, Pt_ARG_COLOR, Pg_WHITE, 0);
            PtSetResource(ABW_i, Pt_ARG_COLOR, Pg_BLUE, 0);
            PtSetResource(ABW_j, Pt_ARG_COLOR, Pg_BLUE, 0);
        }
        p->kv_set = false;
        PtSetResource(ABW_e, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
        PtSetResource(ABW_e, Pt_ARG_COLOR, Pg_BLACK, 0);
        break;
    }
    PtLeave(fuck_qnx);
}
