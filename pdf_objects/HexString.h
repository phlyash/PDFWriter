#ifndef PDFWRITER_HEXSTRING_H
#define PDFWRITER_HEXSTRING_H


#include "Object.h"
#include "../token.cpp"
#include <iomanip>
#include <string>

class HexString : public Object {
public:
    HexString(const char* string) : string_(string) {}
    ~HexString() override;
protected:
    void print(std::ostream &os) override;
private:
    std::string string_;
};


#endif //PDFWRITER_HEXSTRING_H
