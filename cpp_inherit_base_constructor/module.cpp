#include "module.h"

void Base::printValue() 
{
    std::cout << "Value: " << value << std::endl;
}

void Derived::showValue()
{
    printValue();
}

void A::printValue()
{
    std::cout << "Value in A: " << value << std::endl;
}

void B::printValue() 
{
    A::printValue();
}

void C::printValue()
{
    B::printValue();
}
