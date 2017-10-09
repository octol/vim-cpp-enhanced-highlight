// Set of tests. Should all be correctly highlighted with
// let g:cpp_experimental_simple_template_highlight = 1
//
// Note: the template functions break with
// let g:cpp_experimental_template_highlight = 1

#if !(defined _WIN32 || defined WINDOWS)
#include <win.h>
#endif

class Class {
    Class(int val): value(val) {
    };
};

bool operator<(const ConnectionString& other) const {
    return this->_string < other._string;
}

class Class {
public:
    template <typename T>
    Class(T val, typename std::enable_if<std::is_floating_point<T>::value, T>::type* = 0)
            : variable1(0.0f), variable2(std::make_shared<T>(val)) {}

private:
    Function(double variable);
}

void Class::Function(double variable) {
    std::vector<uint64_t> testing;
}

void func<std::map<std::string, std::string<double>>>() {
    int a = .4;
    std::cout << "output" << std::endl;
}

uint32_t b = static_cast<uint8_t>(a);
char j = reinterpret_cast<char>(k);
