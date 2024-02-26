#ifndef PDFWRITER_OBJECT_H
#define PDFWRITER_OBJECT_H


#include <ostream>

class Object {
public:
    virtual ~Object() = default;
    friend std::ostream& operator<<(std::ostream& os, Object& object) {
        object.print(os);
        return os;
    }
protected:
    virtual void print(std::ostream& os) = 0;
};


#endif //PDFWRITER_OBJECT_H
