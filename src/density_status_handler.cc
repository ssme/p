#include "p.h"

extern p_t* p;

void density_status_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    switch (sel_status) {
    case ACS_NOT_SELECTABLE:
    case ACS_DISPLAY_ONLY:
        PtRealizeWidget(ABW_f);
        PtSetResource(ABW_f, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_SELECTABLE:
    case ACS_SELECTABLE_NO_DEP_UPDATE:
        PtRealizeWidget(ABW_f);
        PtSetResource(ABW_f, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_HIDDEN:
    case ACS_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_HIDDEN:
    case ACS_INT_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_NA:
    case ACS_INT_NA_NO_DEP_UPDATE:
        PtUnrealizeWidget(ABW_f);
        PtSetResource(ABW_f, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        return;
    }

    if (func_params == 0) {
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
    PtSetResource(ABW_f, Pt_ARG_FILL_COLOR, _BACKGROUND_COLOR, 0);
    PtSetResource(ABW_f, Pt_ARG_COLOR, Pg_BLACK, 0);
}
