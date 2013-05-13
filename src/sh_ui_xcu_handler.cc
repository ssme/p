#include "p.h"

extern p_t* p;

void sh_ui_xcu_handler(void* parameter) {
    memset(&(p->sh_ui_xcu_a), 0, sizeof(p->sh_ui_xcu_a));
    memcpy(&(p->sh_ui_xcu_a), (unsigned char*)parameter +
        sizeof(acs_obj_header_t), sizeof(sh_ui_xcu_t1));
    if (p->sh_ui_xcu_a.no_func >
        (sizeof(p->sh_ui_xcu_b) / sizeof(sh_ui_xcu_t1)))
    {
        printf("sh_ui_xcu_t1::no_func too big\n");
        return;
    }
    memset(p->sh_ui_xcu_b, 0, sizeof(p->sh_ui_xcu_b));
    memcpy(p->sh_ui_xcu_b, (unsigned char*)parameter + sizeof(acs_obj_header_t)
        + sizeof(sh_ui_xcu_t1), sizeof(sh_ui_xcu_t2) * p->sh_ui_xcu_a.no_func);
    /* lock the photon library for use by a single thread */
    int fuck_qnx = 0;
    if ((fuck_qnx = PtEnter(Pt_EVENT_PROCESS_PREVENT)) < 0)
        return;
    int counter = 0;
    for (counter = 0; counter < p->sh_ui_xcu_a.no_func; counter++) {
        switch (p->sh_ui_xcu_b[counter].sel_func) {
        case AXCS_TOP_ALIGNMENT:
            top_alignment_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_BLOCK_MOVEMENT:
            block_movement_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_SID_TRACKING:
            sid_tracking_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_FOCUS:
            focus_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_DOMINANT_WALL:
            dominant_wall_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_HUD:
            hud_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_ACQ_KV:
            acq_kv_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_EXP_CORRECTION:
            exp_correction_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_KV_STATUS:
            kv_status_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        case AXCS_DENSITY_STATUS:
            density_status_handler(p->sh_ui_xcu_b[counter].func_params,
                p->sh_ui_xcu_b[counter].sel_status);
            break;
        }
    }
    /* unlock photon library for use by a single thread */
    PtLeave(fuck_qnx);
}
