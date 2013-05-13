#include "p.h"

void dominant_wall_handler(ACS_SET func_params, ACS_ENUM sel_status) {
    PtSetResource(ABW_c, Pt_ARG_ONOFF_STATE, ((func_params & 0x01) == 0x01), 0);
    PtSetResource(ABW_b, Pt_ARG_ONOFF_STATE, ((func_params & 0x02) == 0x02), 0);
    PtSetResource(ABW_a, Pt_ARG_ONOFF_STATE, ((func_params & 0x04) == 0x04), 0);
}
