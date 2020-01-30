#ifndef RUST_STRING_HPP
#define RUST_STRING_HPP

#include <string>
#include "str.hpp"

namespace rust {

class String {
public:
    String();
    String(const std::string &str);
    String(unsigned int capacity);
    ~String();

    static String with_capacity(unsigned int capacity);
    static String from(const std::string &str);

    const char* as_bypes() const;
    const str as_str() const;
    str as_mut_str();

    unsigned int capacity() const;

    void reserver(unsigned int additional) const;
    void reserver_exact(unsigned int additional) const;

    void shrink_to_fit();

    void push_str(const String& str);
    void push(char ch);
    char pop();

private:
    std::string str;
};

}

#endif