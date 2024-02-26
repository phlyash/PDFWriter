#ifndef PDFWRITER_NAME_H
#define PDFWRITER_NAME_H


#include <utility>

#include "Object.h"
#include "../token.cpp"

class Name : public Object {
public:
    Name(std::string *name) : name_(name) {}
    ~Name() override;
    std::ostream& operator<<(std::ostream& os) override;
private:
    std::string *name_;
};


#endif //PDFWRITER_NAME_H
