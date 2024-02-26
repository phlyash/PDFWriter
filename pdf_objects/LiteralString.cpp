#include "LiteralString.h"

LiteralString::~LiteralString() {
    delete[] string_;
}

std::ostream &LiteralString::operator<<(std::ostream &os) {
    os << token::LITERAL_STRING_OPEN << string_ << token::LITERAL_STRING_CLOSE;
    return os;
}
