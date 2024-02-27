#ifndef PDFWRITER_DICTIONARY_H
#define PDFWRITER_DICTIONARY_H


#include "Object.h"
#include "../token.cpp"

class DictionaryEntry {
public:
    DictionaryEntry(Object *key, Object *value) : key_(key), value_(value) {}
    ~DictionaryEntry();
    void set_next(DictionaryEntry *next);
    // yet there is no point to change those fields
    [[nodiscard]] Object* get_key() const;
    [[nodiscard]] Object * get_value() const;
    [[nodiscard]] DictionaryEntry* get_next() const;
private:
    // WARNING
    DictionaryEntry *next_ = nullptr;
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
