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


    /*-----lambda functions' capture list examples---------*/

    int factor1 = 10;

    // Lambda function capturing 'factor' by value
    auto multiply1 = [factor1](int x) -> int {
        return x * factor1;
    };

    int result2 = multiply1(5);
    std::cout << "Result: " << result2 << std::endl;

    int count1 = 0;

    // Lambda function capturing 'count' by reference
    auto increment1 = [&count1]() {
        count1++;
    };

    increment1();
    increment1();

    std::cout << "Count: " << count1 << std::endl;  // Output: Count: 2

    int count2 = 0;

    // Mutable lambda function capturing 'count' by reference
    auto increment2 = [&count2]() mutable {
        count2++;
    };

    increment2();
    increment2();

    std::cout << "Count: " << count2 << std::endl;  // Output: Count: 2

    int a1 = 10;
    int b1 = 20;

    // Capture all variables in the scope by value
    auto sum1 = [=]() -> int {
        return a1 + b1;
    };

    std::cout << "Sum: " << sum1() << std::endl;  // Output: Sum: 30

    // Capture all variables in the scope by reference
    auto product = [&]() -> int {
        return a1 * b1;
    };

    std::cout << "Product: " << product() << std::endl;  // Output: Product: 200

    return 0;
}
