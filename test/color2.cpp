class Class {
    Class(int val): value(val) {
    };
};

bool operator<(const ConnectionString& other) const {
    return _string < other._string;
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
    std::cout << "output" << std::endl;
}
