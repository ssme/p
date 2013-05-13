#include "p.h"

void exp_correction_handler(ACS_SET func_params, ACS_ENUM sel_status) {
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
