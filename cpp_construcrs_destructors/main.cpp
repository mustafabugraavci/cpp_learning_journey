#include "main.h"

int main()
{
    MyClass obj;   // Constructor called

    Derived obj1;   // Base constructor called, Derived constructor called

    obj1.~Derived();   // Derived destructor called, Base destructor called

    Outer obj2;   // Inner constructor called, Outer constructor called

    return 0;
}