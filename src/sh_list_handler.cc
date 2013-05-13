#include "p.h"

extern p_t* p;

void sh_list_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->sh_list_a = *((sh_list_t1*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t)));
    p->sh_list_b = *((sh_list_t2*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t) + sizeof(sh_list_t1)));
}
