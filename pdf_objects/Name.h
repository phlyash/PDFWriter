#ifndef PDFWRITER_NAME_H
#define PDFWRITER_NAME_H


#include <utility>

#include "Object.h"
#include "../token.cpp"

class Name : public Object {
public:
    Name(const char* name) : name_(name) {}
    ~Name() override;
protected:
    void print(std::ostream &os) override;
private:
    std::string name_;
};


#endif //PDFWRITER_NAME_H
