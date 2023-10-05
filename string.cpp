#include "string.hpp"
#include <cstring>
#include <iterator>

namespace stu {
string::string()
{
    data = nullptr;
}

string::string(const string &other)
{
    data = new char[std::strlen(other.data) + 1];
    std::strcpy(data, other.data);
}

string::string(const char *other)
{
    data = new char[std::strlen(other) + 1];
    std::strcpy(data, other);
}

const char *string::_data() const
{
    return data;
}

string &string::operator=(const char *rhs)
{
    delete[] data;
    data = new char[std::strlen(rhs) + 1];
    std::strcpy(data, rhs);
    return *this;
}

string &string::operator=(const string &rhs)
{
    delete[] data;
    data = new char[std::strlen(rhs.data) + 1];
    std::strcpy(data, rhs.data);
    return *this;
}

char &string::operator[](size_t index) const
{
    return data[index];
}

size_t string::size() const
{
    return std::strlen(data);
}

} // namespace stu

std::ostream &operator<<(std::ostream &out, const stu::string &str)
{
    out << str._data();
    return out;
}