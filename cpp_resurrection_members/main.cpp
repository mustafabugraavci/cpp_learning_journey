#include <iostream>
#include "object.h"

int main()
{
/*
    Derived d;
    // d.method(); // Error: method() is private in Derived

    // TODO: Use "using" to resurrect method() from Base and call it on Derived instance
*/

    Derived d;
    d.method(); // Calling resurrected method() from Base

    Derived1 d1;
    d1.commonMethod1(); // Choosing between resurrected commonMethod() functions
    d1.commonMethod2();

    return 0;
}