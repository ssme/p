/* Y o u r   D e s c r i p t i o n                       */
/*                            AppBuilder Photon Code Lib */
/*                                         Version 2.03  */

/* Standard headers */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/* Local headers */
#include "ablibs.h"
#include "abimport.h"
#include "proto.h"

#include "p.h"

extern p_t* p;

int base_realized(PtWidget_t *widget, ApInfo_t *apinfo,
    PtCallbackInfo_t *cbinfo)
{
	/* eliminate 'unreferenced' warnings */
	widget = widget, apinfo = apinfo, cbinfo = cbinfo;

	p = create_p();
	if (p == NULL) {
		/* we should exit */
	}

    pthread_t pthread = 0;
    if (pthread_create(&pthread, NULL, axn_receive_thread, p) != 0) {
        /* we should exit */
    }

	load_layout();

	return( Pt_CONTINUE );
}
