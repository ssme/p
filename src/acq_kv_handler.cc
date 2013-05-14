#include "p.h"

void acq_kv_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    switch (sel_status) {
    case ACS_NOT_SELECTABLE:
    case ACS_DISPLAY_ONLY:
        PtRealizeWidget(ABW_e);
        PtSetResource(ABW_e, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_SELECTABLE:
    case ACS_SELECTABLE_NO_DEP_UPDATE:
        PtRealizeWidget(ABW_e);
        PtSetResource(ABW_e, Pt_ARG_FLAGS, ~Pt_BLOCKED, Pt_BLOCKED);
        break;
    case ACS_HIDDEN:
    case ACS_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_HIDDEN:
    case ACS_INT_HIDDEN_NO_DEP_UPDATE:
    case ACS_INT_NA:
    case ACS_INT_NA_NO_DEP_UPDATE:
        PtUnrealizeWidget(ABW_e);
        PtSetResource(ABW_e, Pt_ARG_FLAGS, Pt_BLOCKED, Pt_BLOCKED);
        return;
    }
    char* text = NULL;
    PtGetResource(ABW_e, Pt_ARG_TEXT_STRING, &text, 0);
    int kv = 0;
    sscanf(text, "%d\nkV", &kv);
    if (func_params == 0)
        kv--;
    else if (func_params == 1)
        kv++;
    else
        kv = func_params;
    char buffer[_BUFFER_LIMIT] = {0,};
    sprintf(buffer, "%d\nkV\0", kv);
    PtSetResource(ABW_e, Pt_ARG_TEXT_STRING, buffer, 0);
    PtDamageWidget(ABW_e);
}
