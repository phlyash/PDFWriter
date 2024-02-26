#include "Header.h"

Header::Header() {

}

std::ostream &operator<<(std::ostream &os, Header &header) {
    os << token::COMMENT << header.VERSION_ << ' ' << token::COMMENT <<header.COMMENT_BUFFER_;
    return os;
}
