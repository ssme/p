#include "p.h"

void top_alignment_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    /* on or off */
    PtSetResource(ABW_h, Pt_ARG_ONOFF_STATE, func_params, 0);
}
