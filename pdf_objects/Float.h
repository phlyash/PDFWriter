#ifndef PDFWRITER_FLOAT_H
#define PDFWRITER_FLOAT_H


#include "Object.h"

class Float : public Object {
public:
    Float(float &value) : value_(value) {}
    ~Float() override;
protected:
    void print(std::ostream& os) override;
private:
    float value_;
};


#endif //PDFWRITER_FLOAT_H
