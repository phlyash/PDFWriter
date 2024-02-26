#ifndef PDFWRITER_HEXSTRING_H
#define PDFWRITER_HEXSTRING_H


#include "Object.h"
#include <iomanip>

class HexString : public Object {
public:
    HexString(const char* string) : string_(string) {}
    std::ostream& operator<<(std::ostream& os) override;
    ~HexString() override;
private:
    const char* string_;
};


#endif //PDFWRITER_HEXSTRING_H
