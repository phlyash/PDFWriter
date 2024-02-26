#ifndef PDFWRITER_DOCUMENT_H
#define PDFWRITER_DOCUMENT_H

#include "document_objects/Header.h"
#include "document_objects/Body.h"
#include "document_objects/Xref.h"
#include "document_objects/Trailer.h"

class Document {
public:
private:
    Header header;
    Body body;
    Xref xref;
    Trailer trailer;
};


#endif //PDFWRITER_DOCUMENT_H
