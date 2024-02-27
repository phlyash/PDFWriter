#include "Integer.h"

void Integer::print(std::ostream &os) {
    os << value_;
}

Integer::~Integer() = default;
