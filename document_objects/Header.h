#ifndef PDFWRITER_HEADER_H
#define PDFWRITER_HEADER_H

#include <iostream>
#include "../token.cpp"

class Header {
public:
    Header();
    std::ostream& operator<<(std::ostream &os);
private:
    const char* VERSION_ = "PDF-1.6";
    const char* COMMENT_BUFFER_ = "...Binary characters...";
};


#endif //PDFWRITER_HEADER_H
