#include "p.h"

void* axn_send_thread(void* p) {
   	if (CAxnClientIF::sendObjectToServer((ACS_BYTE*)p) == ACS_AXN_OK) {
   	    // send object to axcs
   	    // sending the object was successful
   		usleep(1);
   	}
   	else {
   		usleep(1);
   		// error while sending, local error handling.
   		// Regarding axcs nothing has to be done.
   		// The receive returns with an error and the client is reconnected again
   	}
   	free(p);
   	return NULL;
}
