#ifndef STU_HPP_
#define STU_HPP_
#include <ostream>

namespace stu {
    class string {
    public:
        string();
        string(const string &);
        string(const char *);
        const char *_data() const;
        string     &operator=(const char *rhs);
        string     &operator=(const string &rhs);
        size_t      size() const;
        char       &operator[](size_t index) const;

    private:
        char *data;
    };
} // namespace stu
std::ostream &operator<<(std::ostream &, const stu::string &);

#endif