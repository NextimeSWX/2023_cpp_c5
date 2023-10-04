#include "stu.hpp"
#include <iostream>
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

void stu::string::dump()
{
    std::cout << data << std::endl;
}
