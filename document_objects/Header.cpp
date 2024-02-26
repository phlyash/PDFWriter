#include "Header.h"

Header::Header() = default;

std::ostream &Header::operator<<(std::ostream &os) {
    os << token::COMMENT << this->VERSION_ << ' ' << token::COMMENT << this->COMMENT_BUFFER_;
    return os;
}
