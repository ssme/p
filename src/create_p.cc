#include "p.h"

p_t* p = NULL; /* global data structure */

p_t* create_p() {
	p_t* p = (p_t*)malloc(sizeof(p_t));
	if (p == NULL) {
		return NULL;
	}
	p->aec_left_set = false;
	p->aec_left_set = false;
	p->aec_middle_set = false;
	p->aec_right_set = false;
	p->alignment_set = false;
	p->cassette = 0;
	p->block_movement_set = false;
	p->density_set = false;
	p->focus_set = false;
	p->kv_set = false;
	p->sid_set = false;
	p->axn = CAxnClientIFCreator::newAxnClientIF();
	if (p->axn == NULL) {
		destroy_p(&p);
		return NULL;
	}
	return p;
}
