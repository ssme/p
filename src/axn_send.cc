#include "p.h"

void axn_send(void* buffer) {
	pthread_t pthread = 0;
	if (pthread_create(&pthread, NULL, axn_send_thread, buffer) != 0) {
	}   
	return;
}
