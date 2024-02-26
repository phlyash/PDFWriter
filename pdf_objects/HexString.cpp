#include "HexString.h"

std::ostream &HexString::operator<<(std::ostream &os) {
    for(const char* string_char = this->string_; *string_char != '\0';) os << std::setfill ('0') << std::setw(sizeof(char) * 2) << std::hex << (int)*string_char++;
    return os;
}

HexString::~HexString() {
    delete[] string_;
}
