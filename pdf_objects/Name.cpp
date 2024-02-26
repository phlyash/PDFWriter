#include "Name.h"

Name::~Name() {
    delete name_;
}

std::ostream &Name::operator<<(std::ostream &os) {
    os << token::NAME << name_;
    return os;
}
