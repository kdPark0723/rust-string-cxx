#include "../include/string.hpp"

namespace rust {

String::String()
    : str{} {
}

String::String(const std::string &str)
    : str{str} {
}

String::String(unsigned int capacity)
    : str(capacity, '0') {
}

String::~String() {
}

String String::with_capacity(unsigned int capacity) {
    return String{capacity};
}

String String::from(const std::string &str) {
    return String{str.c_str()};
}

}