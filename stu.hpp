#ifndef STU_HPP_
#define STU_HPP_
#include <iostream>
#include <cstring>

namespace stu {
    class string {
    public:
        string();
        string(const string &);
        string(const char *);
        void dump();
    private:
        char *data;
    };
}

#endif