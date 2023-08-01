#include <iostream>
#include <cstring>

// Function template with type deduction
template <typename T> void printType(T value) 
{
    std::cout << "Type: " << typeid(value).name() << std::endl;
}

// Function template using a reference type parameter
template <typename T> void incrementByReference(T& value) 
{
    value++;
}

// Generic function template for finding the minimum of two values
template <typename T> T min(T a, T b) 
{
    return (a < b) ? a : b;
}

// Template specialization for const char* to compare string lengths
template <> const char* min<const char*>(const char* a, const char* b) 
{
    return (strlen(a) < strlen(b)) ? a : b;
}

int main()
{
    int num = 42;

    printType(num);             // Deduced type: int
    printType<double>(3.14);    // Explicit type: double

    num = 5;
    incrementByReference(num);
    std::cout << "Incremented value: " << num << std::endl;   // Output: Incremented value: 6

    int intResult = min(5, 10);                             // Calls generic min<int>(5, 10)
    double doubleResult = min(3.14, 2.71);                  // Calls generic min<double>(3.14, 2.71)
    const char* shorterString = min("apple", "orange");     // Calls specialized min<const char*>("apple", "orange")

    std::cout << "Minimum of 5 and 10: " << intResult << std::endl;
    std::cout << "Minimum of 3.14 and 2.71: " << doubleResult << std::endl;
    std::cout << "Shorter string: " << shorterString << std::endl;

    return 0;
}
