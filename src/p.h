#ifndef P_H
#define P_H

#include <stddef.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <errno.h>
#include <malloc.h>
#include <xmlparse.h> /* expact header */
#include <pthread.h>
#include <stdlib.h>
#include <sys/neutrino.h>
#include <map>
#include <string>
using namespace std;
#include "ablibs.h"
#include "abimport.h"

#include "gbl/axcs_typedef.h"
#include "gbl/axcscom.h"
#include "gbl/axnclientif.h"
#include "gbl/axnclientifcreator.h"
#include "acs.h"
#include "axcs_flrad_enum.h"

#ifndef MCS_AP_MOTIONCONTROL
#define MCS_AP_MOTIONCONTROL 0x57
#endif

// #define _RECEIVER ACS_TUI_2
#define _RECEIVER MCS_AP_MOTIONCONTROL
#define _SENDER ACS_TUI_3 /* axnroot */
#define _LAYOUT_FILE "/etc/p/layout.xml"

#ifndef _BACKGROUND_COLOR
#define _BACKGROUND_COLOR 0xbcbddf
#endif

#ifndef EPSILON
#define EPSILON 0.00001
#endif

#ifndef _BUFFER_LIMIT
#define _BUFFER_LIMIT 256
#endif

typedef struct _p_t {
	pthread_t axn_receive_pthread;
	CAxnClientIF* axn;
	bool aec_left_set;
	bool aec_middle_set;
	bool aec_right_set;
	bool alignment_set;
	unsigned short cassette;
	bool block_movement_set;
	bool density_set;
	bool focus_set;
	bool kv_set;
	bool sid_set;
	st_state_t1 st_state;
	rep_beep_t1 rep_beep;
	rq_object_t1 rq_object;
	sh_disp_icon_t1 sh_disp_icon_a;
	sh_disp_icon_t2 sh_disp_icon_b;
	sh_disp_value_t1 sh_disp_value_a;
	sh_disp_value_t2 sh_disp_value_b;
	sh_list_t1 sh_list_a;
	sh_list_t2 sh_list_b;
	sh_prog_name_t1 sh_prog_name_a;
	sh_prog_name_t2 sh_prog_name_b;
	st_dtext_t1_tag st_dtext_a;
	st_dtext_t2_tag st_dtext_b;
    sh_ui_xcu_t1 sh_ui_xcu_a;
    sh_ui_xcu_t2 sh_ui_xcu_b[NO_FUNC_MAX];
} p_t;

typedef struct _packet_t {
	void* buffer;
	size_t length;
} packet_t;

typedef struct _ui_xcu_t {
	acs_obj_header_t acs_obj_header;
	unsigned short sel_func;
	unsigned short func_params;
	unsigned char dummy1;
	unsigned char dummy2;
	unsigned char dummy3;
	unsigned char dummy4;
	unsigned char dummy5;
	unsigned char dummy6;
	unsigned char dummy7;
	unsigned char dummy8;
} ui_xcu_t;

p_t* create_p();
void destroy_p(p_t** p);
void axn_send(void *buffer);
void* axn_send_thread(void *p);
void* axn_receive_thread(void *p);
bool load_layout();
void layout_character_data_handler(void *userData, const XML_Char *s, int len);
void layout_end_element_handler(void *userData, const XML_Char *name);
void layout_start_element_handler(void* userData, const XML_Char* name,
	const XML_Char** atts);

/* axcs messages'(defined in xcsobj.h) handler */
void init_msg_handler(); /* INIT_MSG */
void st_dtext_handler(void* parameter); /* ST_DTEXT */
void st_state_handler(void* parameter); /* ST_STATE */
void ui_xcu_handler(void* parameter); /* UI_XCU */
void sh_ui_xcu_handler(void* parameter); /* UI_XCU */
void sh_list_handler(void* parameter); /* SH_LIST */
void sh_prog_name_handler(void* parameter); /* SH_PROG_NAME */
void sh_disp_value_handler(void* parameter); /* SH_DISP_VALUE */
void sh_disp_icon_handler(void* parameter); /* SH_DISP_ICON */
void rep_beep_handler(void* parameter); /* REP_BEEP */
void rq_object_handler(void* parameter); /* RQ_OBJECT */

/* SH_UI_XCU sub telegrams identified by sh_ui_xcu_t2::sel_func */
/* AXCS_TOP_ALIGNMENT */
void top_alignment_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_BLOCK_MOVEMENT */
void block_movement_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_SID_TRACKING */
void sid_tracking_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_FOCUS */
void focus_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_DOMINANT_WALL */
void dominant_wall_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_HUD */
void hud_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_ACQ_KV */
void acq_kv_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_EXP_CORRECTION */
void exp_correction_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_KV_STATUS */
void kv_status_handler(ACS_SET func_params, ACS_ENUM sel_status);
/* AXCS_DENSITY_STATUS */
void density_status_handler(ACS_SET func_params, ACS_ENUM sel_status);

#endif
