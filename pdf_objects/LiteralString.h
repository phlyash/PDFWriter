#ifndef PDFWRITER_LITERALSTRING_H
#define PDFWRITER_LITERALSTRING_H


#include "Object.h"
#include "../token.cpp"

class LiteralString : public Object {
public:
    LiteralString(const char* string) : string_(string) {}
    std::ostream& operator<<(std::ostream& os) override;
    ~LiteralString() override;
private:
    const char* string_;
};


#endif //PDFWRITER_LITERALSTRING_H
