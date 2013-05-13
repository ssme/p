#include "p.h"

void init_msg_handler() {
    typedef struct inlist_enh_t1_tag {
        acs_obj_header_t header; /* Object-Header */
        ACS_INT no_objects; /* number of objects */
    } inlist_enh_t1;

    typedef struct inlist_enh_t2_tag
    {
        ACS_WORD object_id; /* ID of the object */
    } inlist_enh_t2;

    typedef struct inlist_t_tag {
        inlist_enh_t1 t1;
        inlist_enh_t2 t2[NO_OBJECTS_MAX];
    } inlist_t;

    inlist_t inlist;
    memset(&inlist, 0, sizeof(inlist));
    inlist.t1.no_objects = 0;
    inlist.t2[inlist.t1.no_objects++].object_id = ST_DTEXT;
    inlist.t2[inlist.t1.no_objects++].object_id = ST_STATE;
    inlist.t2[inlist.t1.no_objects++].object_id = UI_XCU;
    inlist.t2[inlist.t1.no_objects++].object_id = SH_LIST;
    inlist.t2[inlist.t1.no_objects++].object_id = SH_PROG_NAME;
    inlist.t2[inlist.t1.no_objects++].object_id = SH_DISP_VALUE;
    inlist.t2[inlist.t1.no_objects++].object_id = SH_DISP_ICON;
    inlist.t2[inlist.t1.no_objects++].object_id = REP_BEEP;
    inlist.t2[inlist.t1.no_objects++].object_id = RQ_OBJECT;
    inlist.t1.header.length = sizeof(inlist.t1) +
        inlist.t1.no_objects * sizeof(inlist.t2[0].object_id);
    inlist.t1.header.mode = ACS_MODE_FUNCTIONAL;
    inlist.t1.header.target = ACS_NO_TARGET;
    inlist.t1.header.sender = _SENDER;
    inlist.t1.header.telid = INLIST_ENH;

    if (CAxnClientIF::sendObjectToServer((ACS_BYTE*)(&inlist)) != ACS_AXN_OK) {

    }
}
