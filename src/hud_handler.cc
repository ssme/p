#include "p.h"

void hud_handler(ACS_SET func_params, ACS_ENUM sel_status) {
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
