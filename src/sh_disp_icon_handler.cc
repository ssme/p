#include "p.h"

extern p_t* p;

void sh_disp_icon_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->sh_disp_icon_a = *((sh_disp_icon_t1*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t)));
    p->sh_disp_icon_b = *((sh_disp_icon_t2*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t) + sizeof(sh_disp_icon_t1)));
}
