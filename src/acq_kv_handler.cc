#include "p.h"

void acq_kv_handler(ACS_SET func_params, ACS_ENUM sel_status) {
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
