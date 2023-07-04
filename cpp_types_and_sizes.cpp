#include <iostream>

int main()
{
    int int_var;
    float float_var;
    double double_var;
    char char_var;
    bool bool_var;

    // Print the sizes of the variables
    std::cout << "Size of int: " << sizeof(int_var) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float_var) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double_var) << " bytes\n";
    std::cout << "Size of char: " << sizeof(char_var) << " bytes\n";
    std::cout << "Size of bool: " << sizeof(bool_var) << " bytes\n";

    return 0;  
}