#include "p.h"

void hud_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    switch (sel_status) {
    case ACS_NOT_SELECTABLE:
    case ACS_DISPLAY_ONLY:
        PtRealizeWidget(ABW_g);
        PtSetResource(ABW_g, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_SELECTABLE:
    case ACS_SELECTABLE_NO_DEP_UPDATE:
        PtRealizeWidget(ABW_g);
        PtSetResource(ABW_g, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_HIDDEN:
    case ACS_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_HIDDEN:
    case ACS_INT_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_NA:
    case ACS_INT_NA_NO_DEP_UPDATE:
        PtUnrealizeWidget(ABW_g);
        PtSetResource(ABW_g, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        return;
    }
    switch (func_params) {
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
}
