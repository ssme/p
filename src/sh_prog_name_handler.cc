#include "p.h"

extern p_t* p;

void sh_prog_name_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->sh_prog_name_a = *((sh_prog_name_t1_tag*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t)));
    p->sh_prog_name_b = *((sh_prog_name_t2_tag*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t) + sizeof(sh_prog_name_t1_tag)));
}
