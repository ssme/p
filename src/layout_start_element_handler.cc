#include "p.h"
#include "abdefine.h"

void layout_start_element_handler(void* userData, const XML_Char* name,
	const XML_Char** atts)
{
	/* p_t* p = (p_t*)userData; */

	int left = 0;
	int top = 0;
	int width = 0;
	int height = 0;
	int i = 0;
	int id = 0;
	if (strcmp(name, "item") == 0) { /* button */
	    for (; atts[i] != NULL; i += 2) {
	    	if (strcmp(atts[i], "id") == 0) { /* id defined in abvars.h */
	    		id = atoi(atts[i + 1]);
	    	}
	        else if (strcmp(atts[i], "left") == 0) { /* left */
	        	left = atoi(atts[i + 1]);
	        }
	        else if (strcmp(atts[i], "top") == 0) { /* top */
				top = atoi(atts[i + 1]);
			}
	        else if (strcmp(atts[i], "width") == 0) { /* width */
	            width = atoi(atts[i + 1]);
	        }
	        else if (strcmp(atts[i], "height") == 0) { /* height */
	            height = atoi(atts[i + 1]);
			}
	    }
		PhPoint_t point = {left, top};
		PtSetResource(AbGetABW(id), Pt_ARG_POS, &point, 0);
		PtSetResource(AbGetABW(id), Pt_ARG_WIDTH, width, 0);
		PtSetResource(AbGetABW(id), Pt_ARG_HEIGHT, height, 0);
	}
}
