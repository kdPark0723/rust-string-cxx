#ifndef RUST_STR_HPP
#define RUST_STR_HPP

namespace rust {

class str {
public:
    str();
    str(const char *prt);
    ~str();

private:
    const char *prt;
    unsigned int length;
};

}

#endif