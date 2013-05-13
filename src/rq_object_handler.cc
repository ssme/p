#include "p.h"

extern p_t* p;

void rq_object_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->rq_object = *((rq_object_t1*)((unsigned char*)parameter +
        sizeof(acs_obj_header_t)));
}
