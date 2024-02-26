#include "HexString.h"

HexString::~HexString() = default;

void HexString::print(std::ostream &os) {
    os << token::HEX_STRING_OPEN;

    for(char string_char : this->string_) os << std::setfill ('0') << std::setw(sizeof(char) * 2) << std::hex << string_char;

    os << token::HEX_STRING_CLOSE;
}