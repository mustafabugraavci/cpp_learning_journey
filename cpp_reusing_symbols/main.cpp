#include "module.h"

int main()
{
    Derived1 d1;
    Derived2 d2;

    d1.show(); // Accessing show() from Base via Derived1
    d2.show(); // Accessing show() from Base via Derived2


    return 0;
}
