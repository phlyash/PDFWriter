#ifndef PDFWRITER_LITERALSTRING_H
#define PDFWRITER_LITERALSTRING_H


#include "Object.h"
#include "../token.cpp"

class LiteralString : public Object {
public:
    LiteralString(const char* string) : string_(string) {}
    ~LiteralString() override;
protected:
    void print(std::ostream& os) override;
private:
    std::string string_;
};


#endif //PDFWRITER_LITERALSTRING_H
