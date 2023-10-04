#include <iterator>
#include "stu.hpp"
#include <cstring>

stu::string::string()
{
    data = nullptr;
}

stu::string::string(const string &other)
{
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);
}

stu::string::string(const char *other)
{
    data = new char[std::strlen(other) + 1];
    std::strcpy(data, other);
}

const char* stu::string::_data() const
{
    return data;
}

std::ostream &operator<<(std::ostream &out, const stu::string &str)
{
    out << str._data();
    return out;
}

