#ifndef PDFWRITER_BOOLEAN_H
#define PDFWRITER_BOOLEAN_H


#include "Object.h"

class Boolean : public Object {
public:
    Boolean(bool &value) : value_(value) {}
    ~Boolean() override;
protected:
    void print(std::ostream& os) override;
private:
    bool value_;
};


#endif //PDFWRITER_BOOLEAN_H
