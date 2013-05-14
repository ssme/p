#include "p.h"

void dominant_wall_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    switch (sel_status) {
    case ACS_NOT_SELECTABLE:
    case ACS_DISPLAY_ONLY:
        PtRealizeWidget(ABW_c);
        PtRealizeWidget(ABW_b);
        PtRealizeWidget(ABW_a);
        PtSetResource(ABW_c, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        PtSetResource(ABW_b, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        PtSetResource(ABW_a, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_SELECTABLE:
    case ACS_SELECTABLE_NO_DEP_UPDATE:
        PtRealizeWidget(ABW_c);
        PtRealizeWidget(ABW_b);
        PtRealizeWidget(ABW_a);
        PtSetResource(ABW_c, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        PtSetResource(ABW_b, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        PtSetResource(ABW_a, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_HIDDEN:
    case ACS_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_HIDDEN:
    case ACS_INT_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_NA:
    case ACS_INT_NA_NO_DEP_UPDATE:
        PtUnrealizeWidget(ABW_c);
        PtUnrealizeWidget(ABW_b);
        PtUnrealizeWidget(ABW_a);
        PtSetResource(ABW_c, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        PtSetResource(ABW_b, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        PtSetResource(ABW_a, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        return;
    }
    PtSetResource(ABW_c, Pt_ARG_ONOFF_STATE, ((func_params & 0x01) == 0x01), 0);
    PtSetResource(ABW_b, Pt_ARG_ONOFF_STATE, ((func_params & 0x02) == 0x02), 0);
    PtSetResource(ABW_a, Pt_ARG_ONOFF_STATE, ((func_params & 0x04) == 0x04), 0);
}
