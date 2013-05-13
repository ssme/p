#include "p.h"

extern p_t* p;

void rep_beep_handler(void* parameter) {
    /* acs_obj_header_t* acs_obj_header = (acs_obj_header_t*)parameter; */
    p->rep_beep = *((rep_beep_t1*)(((unsigned char*)parameter) +
        sizeof(acs_obj_header_t)));
    /* tui has no beeper yet, do nothing here */
}
