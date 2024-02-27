#ifndef PDFWRITER_ARRAY_H
#define PDFWRITER_ARRAY_H


#include "Object.h"
#include "../token.cpp"

class ArrayEntry {
public:
    ArrayEntry(Object *value) : value_(value) {}
    ~ArrayEntry() = default;
    void set_next(ArrayEntry *next);
    [[nodiscard]] Object* get_value() const;
    [[nodiscard]] ArrayEntry* get_next() const;
private:
    ArrayEntry *next_ = nullptr;
    Object *value_;
};

class Array : public Object {
public:
    Array() = default;
    ~Array() override = default;
    void add(Object *object);
protected:
    void print(std::ostream &os) override;
private:
    ArrayEntry *entry_head_ = nullptr, *entry_tail_ = nullptr;
};


#endif //PDFWRITER_ARRAY_H
