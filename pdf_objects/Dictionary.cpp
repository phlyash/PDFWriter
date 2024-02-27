#include "Dictionary.h"

Dictionary::Dictionary() = default;

Dictionary::~Dictionary() {
    delete entries_head_;
}

void Dictionary::add(Object *key, Object *value) {
    auto current_tail = new DictionaryEntry(key, value);
    if (!entries_head_) entries_head_ = current_tail;
    else entries_tail_->set_next(current_tail);
    entries_tail_ = current_tail;
}

void Dictionary::print(std::ostream &os) {
    os << token::DICTIONARY_OPEN;

    DictionaryEntry *it_entry = this->entries_head_;
    while(it_entry) {
        os << *it_entry->get_key() << token::SEP << *it_entry->get_value() << token::EOL;
        it_entry = it_entry->get_next();
    }

    os << token::DICTIONARY_CLOSE;
}

Object *DictionaryEntry::get_key() const {
    return key_;
}

Object * DictionaryEntry::get_value() const {
    return value_;
}

void DictionaryEntry::set_next(DictionaryEntry *next) {
    if (!next_) next_ = next; // WARNING ehmmm
}

DictionaryEntry::~DictionaryEntry() {
    DictionaryEntry* current = this;
    while(current) {
        DictionaryEntry* next = current->next_;
        delete current->key_;
        current = next;
    }

}

DictionaryEntry* DictionaryEntry::get_next() const {
    return next_;
}
