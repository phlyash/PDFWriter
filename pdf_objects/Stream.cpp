#include "Stream.h"

Stream::Stream() {
// configure dictionary later
}

void Stream::print(std::ostream &os) {
    os  << dictionary_ << token::EOL
        << token::STREAM_OPEN << token::EOL
        << value_ // to be thought about
        << token::STREAM_CLOSE << token::EOL;
}
