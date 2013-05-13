#include "p.h"

extern p_t* p;

void st_dtext_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->st_dtext_a = *((st_dtext_t1_tag*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t)));
    p->st_dtext_b = *((st_dtext_t2_tag*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t) + sizeof(st_dtext_t1_tag)));
}
