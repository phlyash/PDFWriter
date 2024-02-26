#include "Name.h"

Name::~Name() = default;

void Name::print(std::ostream &os) {
    os << token::NAME << this->name_;
}
