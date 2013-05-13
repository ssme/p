#include "p.h"

extern p_t* p;

void sh_disp_value_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->sh_disp_value_a = *((sh_disp_value_t1*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t)));
    p->sh_disp_value_b = *((sh_disp_value_t2*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t) + sizeof(sh_disp_value_t1)));
    /* parse data */
    switch (p->sh_disp_value_b.disp_func) {
    case AXCS_DISP_FLUORO_KV:
        PtSetResource(ABW_a, Pt_ARG_TEXT_STRING,
            p->sh_disp_value_b.disp_value, 0);
        PtDamageWidget(ABW_a);
        break;
    case AXCS_DISP_FLUORO_MA:
        break;
    case AXCS_DISP_MAS_VALUE:
        break;
    case AXCS_DISP_MS_VALUE:
        break;
    }
}
