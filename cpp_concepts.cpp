#include <iostream>
#include <concepts>

// Concept for a numeric type
template<typename T>
concept Numeric = std::is_arithmetic_v<T>;

// Function template using multiple concepts
template<Numeric T>
void processNumeric(T value) {
    std::cout << "Numeric value: " << value << std::endl;
}

// Concept for a printable type
template<typename T>
concept Printable = requires(T value) {
    { std::cout << value } -> std::same_as<std::ostream&>;
};

// Function template using the Printable concept
template<Printable T>
void print(T value) {
    std::cout << value << std::endl;
}

int main()
{
    int num = 42;
    processNumeric(num);     // Valid: int satisfies the Numeric concept

    double pi = 3.14;
    processNumeric(pi);      // Valid: double satisfies the Numeric concept

    // Custom type Point without being numeric will cause a compilation error.
    // Point pt{1, 2};
    // processNumeric(pt);

    num = 43;
    print(num);     // Valid: int satisfies the Printable concept

    pi = 3.141;
    print(pi);      // Valid: double satisfies the Printable concept

    std::string name = "John";
    print(name);    // Valid: std::string satisfies the Printable concept

    // Custom type Point without operator<< is not printable, so this line will cause a compilation error.
    // Point pt{1, 2};
    // print(pt);

    return 0;
}