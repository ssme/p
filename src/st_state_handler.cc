#include "p.h"

extern p_t* p;

void st_state_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    if (memcmp(&(p->st_state), parameter, sizeof(st_state_t1)) == 0)
        return;  /* state not changed */
    p->st_state = *((st_state_t1*)parameter);
    /* ACS_FLUORO_ACQ_NOT_READY */
    // PtSetResource(ABW_state, Pt_ARG_ONOFF_STATE,
    //    p->st_state.xray_ready_state, 0);
    // PtDamageWidget(ABW_state);
}
