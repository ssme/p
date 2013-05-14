#include "p.h"

void top_alignment_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    switch (sel_status) {
    case ACS_NOT_SELECTABLE:
    case ACS_DISPLAY_ONLY:
        PtRealizeWidget(ABW_h);
        PtSetResource(ABW_h, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_SELECTABLE:
    case ACS_SELECTABLE_NO_DEP_UPDATE:
        PtRealizeWidget(ABW_h);
        PtSetResource(ABW_h, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_HIDDEN:
    case ACS_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_HIDDEN:
    case ACS_INT_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_NA:
    case ACS_INT_NA_NO_DEP_UPDATE:
        PtUnrealizeWidget(ABW_h);
        PtSetResource(ABW_h, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        return;
    }
    PtSetResource(ABW_h, Pt_ARG_ONOFF_STATE, func_params, 0);
}
