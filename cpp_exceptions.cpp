#include <iostream>

class MyException : public std::exception {
public:
    MyException(const std::string& message) : message_(message) {}

    const char* what() const noexcept override {
        return message_.c_str();
    }

private:
    std::string message_;
};

float divide(float numerator, float denominator);

int main() {

    try {
        divide(10, 2);
        divide(20, 0);  // This will throw an exception
    } catch (const std::runtime_error& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    try {
        throw MyException("Custom exception occurred!");
    } catch (const MyException& e) {
        std::cerr << "Custom exception caught: " << e.what() << std::endl;
    }

    return 0;
}

float divide(float numerator, float denominator)
{
    if (denominator == 0) {
        throw std::runtime_error("Division by zero!");
    }
    
    return numerator/denominator;
}
