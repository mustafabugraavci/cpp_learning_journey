#include "object.h"

void Base::method() 
{
    std::cout << "Base::method()" << std::endl;
}

void Derived::method() 
{
    std::cout << "Derived::method()" << std::endl;
}

void Base1::commonMethod1() 
{
    std::cout << "Base1::commonMethod1()" << std::endl;
}

void Base2::commonMethod2() 
{
    std::cout << "Base2::commonMethod2()" << std::endl;
}