#include "p.h"

void exp_correction_handler(ACS_SET func_params, ACS_ENUM sel_status) {
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
    char* text = NULL;
    PtGetResource(ABW_f, Pt_ARG_TEXT_STRING, &text, 0);
    float density = 0.;
    sscanf(text, "%f", &density);
    if (func_params == 0)
        density -= 0.1;
    else if (func_params == 1)
        density += 0.1;
    else
        density = func_params / 10.;
    char buffer[_BUFFER_LIMIT] = {0,};
    sprintf(buffer, "%+-.1f\0", density);
    PtSetResource(ABW_f, Pt_ARG_TEXT_STRING, buffer, 0);
    PtDamageWidget(ABW_f);
}
