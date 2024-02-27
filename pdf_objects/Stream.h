#ifndef PDFWRITER_STREAM_H
#define PDFWRITER_STREAM_H


#include "Object.h"
#include "Dictionary.h"

class Stream : public Object {
public:
    Stream();
    ~Stream() override = default;
protected:
    void print(std::ostream &os) override;
private:
    Dictionary dictionary_;
    std::string value_; // not really sure that stream store string, to be thought about
};


#endif //PDFWRITER_STREAM_H
