#include "p.h"

extern p_t* p;

void kv_status_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    if (func_params == 0) {
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
}
