#include "p.h"

void sid_tracking_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    /* on or off */
    PtSetResource(ABW_d, Pt_ARG_ONOFF_STATE, func_params, 0);
}
