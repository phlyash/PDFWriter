#include "Dictionary.h"

Dictionary::Dictionary() {

}

Dictionary::~Dictionary() {
    delete entries_;
}

std::ostream &Dictionary::operator<<(std::ostream &os) {
    return os;
}

void Dictionary::add(Object *key, Object *value) {

}

Object *DictionaryEntry::get_key() {
    return key_;
}

Object *DictionaryEntry::get_value() {
    return value_;
}

void DictionaryEntry::set_next(DictionaryEntry *next) {
    if (!next_) next_ = next;
}

DictionaryEntry::~DictionaryEntry() {
    DictionaryEntry* current = this;
    while(current) {
        DictionaryEntry* next = current->next_;
        delete current->key_;
        current = next;
    }

}
