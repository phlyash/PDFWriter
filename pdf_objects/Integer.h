#ifndef PDFWRITER_INTEGER_H
#define PDFWRITER_INTEGER_H


#include "Object.h"

class Integer : public Object {
public:
    Integer(int &value) : value_(value) {}
    ~Integer() override;
protected:
    void print(std::ostream &os) override;
private:
    int value_;
};


#endif //PDFWRITER_INTEGER_H
