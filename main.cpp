#include <iostream>
#include "stu.hpp"

int main(void)
{
    stu::string str("toto");
    stu::string str2("tata");

    str2 = str;
    str  = "hello";
    std::cout << "should be \"hello\"" << str << "\n";
    std::cout << "should be \"toto\"" << str2 << "\n";
}