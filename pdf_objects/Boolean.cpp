#include "Boolean.h"

Boolean::~Boolean() = default;

void Boolean::print(std::ostream &os) {
    os << std::boolalpha << value_;
}
