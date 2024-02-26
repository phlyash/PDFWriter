#ifndef PDFWRITER_TOKEN_CPP
#define PDFWRITER_TOKEN_CPP

namespace token {
    static char COMMENT = '%', NAME = '/', REFERENCE = 'R',
            LITERAL_STRING_OPEN = '(', LITERAL_STRING_CLOSE = ')',
            HEX_STRING_OPEN = '<', HEX_STRING_CLOSE = '>',
            ARRAY_OPEN = '[', ARRAY_CLOSE = ']';
    static const char *DICTIONARY_OPEN = "<<", *DICTIONARY_CLOSE = ">>",
            *STREAM_OPEN = "stream", *STREAM_CLOSE = "endstream",
            *OBJ_OPEN = "obj", *OBJ_CLOSE = "endobj";
};

#endif //PDFWRITER_TOKEN_CPP
