#ifndef STU_HPP_
#define STU_HPP_
#include <ostream>

namespace stu {
class string {
public:
    string();
    string(const string &);
    string(const char *);
    const char* _data() const;

private:
    char *data;
};
} // namespace stu
std::ostream &operator<<(std::ostream &, const stu::string &);

#endif