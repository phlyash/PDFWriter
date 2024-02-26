#ifndef PDFWRITER_DICTIONARY_H
#define PDFWRITER_DICTIONARY_H


#include "Object.h"
#include "../token.cpp"

class DictionaryEntry {
public:
    DictionaryEntry(Object *key, Object *value) : key_(key), value_(value) {}
    ~DictionaryEntry();
    Object* get_key();
    Object* get_value();
    void set_next(DictionaryEntry *next);
    // WARNING
    DictionaryEntry *next_ = nullptr;
private:
    Object *key_, *value_;
};

class Dictionary : public Object {
public:
    Dictionary();
    ~Dictionary() override;
    std::ostream& operator<<(std::ostream& os) override;
    void add(Object *key, Object *value);
private:
    DictionaryEntry *entries_;
};


#endif //PDFWRITER_DICTIONARY_H
