#include "p.h"

void destroy_p(p_t** p) {
	if ((p == NULL) || (*p == NULL))
		return;
	if ((*p)->axn != NULL) {
		CAxnClientIFCreator::deleteAxnClientIF((*p)->axn);
	}
	free(*p);
	*p = NULL;
}
