#ifndef PDFWRITER_OBJECT_H
#define PDFWRITER_OBJECT_H


#include <ostream>

class Object {
public:
    virtual ~Object() = default;
    virtual std::ostream& operator<<(std::ostream& os) = 0;
};


#endif //PDFWRITER_OBJECT_H
