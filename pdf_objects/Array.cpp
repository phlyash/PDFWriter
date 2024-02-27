#include "Array.h"

void Array::add(Object *object) {
    auto current_tail = new ArrayEntry(object);
    if (!entry_head_) entry_head_ = current_tail;
    else entry_tail_->set_next(current_tail);
    entry_tail_ = current_tail;
}

void Array::print(std::ostream &os) {
    os << token::ARRAY_OPEN;

    auto it_entry = this->entry_head_;
    while(it_entry) {
        os << it_entry->get_value() << token::SEP;
        it_entry = it_entry->get_next();
    }

    os << token::ARRAY_CLOSE;
}

Object *ArrayEntry::get_value() const {
    return value_;
}

void ArrayEntry::set_next(ArrayEntry *next) {
    if (!next_) next_ = next; // WARNING ehmm
}

ArrayEntry *ArrayEntry::get_next() const {
    return next_;
}
