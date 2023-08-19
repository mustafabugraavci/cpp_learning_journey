#include "module.h"

int main()
{
    Derived derived(42);
    derived.showValue();

    C c(42);
    c.printValue();

    return 0;
}
