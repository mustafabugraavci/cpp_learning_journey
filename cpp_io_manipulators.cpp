#include <iostream>
#include <iomanip>
#include <ios>

int main()
{
    bool bool_value = true;
    std::cout << "Value: " << std::boolalpha << bool_value << std::endl;  // Output: Value: true

    int int_value = 255;
    std::cout << "Value: " << std::showbase << std::hex << int_value << std::endl;  // Output: Value: 0xff

    int fill_value = 42;
    std::cout << "Value: " << std::setw(5) << std::setfill('0') << fill_value << std::endl;  // Output: Value: 00042

    double double_value = 3.14159;
    std::cout << "Value: " << std::fixed << std::setprecision(2) << double_value << std::endl;  // Output: Value: 3.14

    double pi_value = 3.14159;
    std::cout << "Value: " << std::fixed << std::setprecision(2) << pi_value << std::endl;  // Output: Value: 3.14

    int pos_value = 42;
    std::cout << "Value: " << std::showpos << pos_value << std::endl;  // Output: Value: +42
    std::cout << "Value: " << std::noshowpos << pos_value << std::endl;  // Output: Value: 42

    int value = 42;
    std::cout << "Value: " << std::left << std::setw(5) << value << std::endl;  // Output: Value: 42   
    std::cout << "Value: " << std::right << std::setw(5) << value << std::endl;  // Output: Value:    42

    return 0;
}
