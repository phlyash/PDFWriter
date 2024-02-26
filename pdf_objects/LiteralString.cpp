#include "LiteralString.h"

LiteralString::~LiteralString() = default;

void LiteralString::print(std::ostream &os) {
    os << token::LITERAL_STRING_OPEN << this->string_ << token::LITERAL_STRING_CLOSE;
}
