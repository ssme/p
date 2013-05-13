#include "p.h"

#ifndef _WAIT_INTERVAL
#define _WAIT_INTERVAL 1 /* in seconds */
#endif

void* axn_receive_thread(void* parameter) {
	p_t* p = (p_t*)parameter;
	if (p == NULL) {
		return NULL;
	}
	ACS_ENUM acs_enum = ACS_AXN_OK;
    acs_obj_header_t* header = NULL;
    char buffer[MAX_LEN_ACS_OBJ] = {0,};
    p->axn->connectToServer(_SENDER, 10);
   	for ( ; ; ) {
   	    acs_enum = p->axn->recvObject((ACS_BYTE*)buffer);
   	    if (acs_enum != ACS_AXN_OK) { /* error occurred */
   	        sleep(_WAIT_INTERVAL); /* wait */
   	        CAxnClientIFCreator::deleteAxnClientIF(p->axn);
   	        p->axn = CAxnClientIFCreator::newAxnClientIF();
   	        p->axn->connectToServer(_SENDER, 10); /* reconnect */
   	        continue; /* try again */
   	    }
   	    /* received something */
        header = (acs_obj_header_t*)buffer;

        /* todo: delete */
   		printf("0x%x, to: 0x%x, from: 0x%x\n", header->telid, header->target,
   		    header->sender);

   		switch (header->telid) {
   		case INIT_MSG:
   		    init_msg_handler();
   		    break;
   		case UI_XCU:
   		    ui_xcu_handler(buffer);
   		    break;
   		case SH_UI_XCU:
   		    sh_ui_xcu_handler(buffer);
   		    break;
   		}
        memset(buffer, 0, sizeof(buffer));
   	}
   	return NULL;
}
