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
    DictionaryEntry* get_next() const;
    // WARNING
    DictionaryEntry *next_ = nullptr;
private:
    Object *key_, *value_;
};

class Dictionary : public Object {
public:
    Dictionary();
    ~Dictionary() override;
    void add(Object *key, Object *value);
protected:
    void print(std::ostream& os) override;
private:
    DictionaryEntry *entries_head_ = nullptr, *entries_tail_ = nullptr;
};


#endif //PDFWRITER_DICTIONARY_H
