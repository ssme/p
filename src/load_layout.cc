#include "p.h"

bool load_layout() {
	int bytes = 0;
	FILE* layout_xml = fopen(_LAYOUT_FILE, "r");
	if (layout_xml == NULL) {
		printf("fopen exception\n");
		return false;
	}
	char buffer[_BUFFER_LIMIT] = {0,};
	memset(buffer, 0, sizeof(buffer));
	XML_Parser parser;
	if ((parser = XML_ParserCreate(NULL)) == NULL) {
		printf("XML_ParserCreate exception\n");
	}
	// XML_SetUserData(parser, (void*)p);
	XML_SetElementHandler(parser, layout_start_element_handler,
		layout_end_element_handler);
	XML_SetCharacterDataHandler(parser, layout_character_data_handler);
	while ((bytes = fread(buffer, sizeof(char), sizeof(buffer) / sizeof(char),
		layout_xml)) > 0)
	{
		if (XML_Parse(parser, buffer, bytes, 0) == 0) {
			printf("XML_Parse exception: %s(line:%d, column:%d)\n",
				XML_ErrorString(XML_GetErrorCode(parser)),
	            XML_GetCurrentLineNumber(parser),
	            XML_GetCurrentColumnNumber(parser));
			XML_ParserFree(parser);
			fclose(layout_xml);
			return false;
		}
	}
	/* release resoures */
	XML_ParserFree(parser);
	fclose(layout_xml);
    return true;
}
