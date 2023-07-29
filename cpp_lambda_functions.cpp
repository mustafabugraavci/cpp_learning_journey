#include <iostream>

int main() {
    // Lambda function to calculate the square of a number
    auto square = [](int x) -> int {
        return x * x;
    };

    int result = square(5);
    std::cout << "Square of 5: " << result << std::endl;

    int factor = 10;

    // Lambda function to multiply a number by the captured factor
    auto multiply = [factor](int x) -> int {
        return x * factor;
    };

    int result1 = multiply(5);
    std::cout << "Result: " << result1 << std::endl;

    int count = 0;

    // Lambda function to increment the captured count by reference
    auto increment = [&count]() {
        count++;
    };

    increment();
    increment();

    std::cout << "Count: " << count << std::endl;  // Output: Count: 2

    return 0;
}
