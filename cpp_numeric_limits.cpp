#include <iostream>
#include <limits>

int main()
{
    std::numeric_limits<int> intLimits;
    std::cout << "Minimum value of int: " << intLimits.min() << std::endl;
    std::cout << "Maximum value of int: " << intLimits.max() << std::endl;

    std::numeric_limits<double> doubleLimits;
    std::cout << "Precision of double: " << doubleLimits.digits10 << std::endl;

    std::cout << "Is double infinity: " << std::boolalpha << doubleLimits.has_infinity << std::endl;
    std::cout << "Is double NaN: " << std::boolalpha << doubleLimits.has_quiet_NaN << std::endl;

    std::numeric_limits<unsigned int> uintLimits;
    std::cout << "Is unsigned int signed: " << std::boolalpha << uintLimits.is_signed << std::endl;
    std::cout << "Is unsigned int integer: " << std::boolalpha << uintLimits.is_integer << std::endl;

    int value = 100;
    bool isWithinRange = (value >= intLimits.min()) && (value <= intLimits.max());
    std::cout << "Is value within int range: " << std::boolalpha << isWithinRange << std::endl;
}
