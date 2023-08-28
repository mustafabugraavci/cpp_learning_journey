#include "module.h"

int main()
{
    OverloadDemo demo;
    demo.show(42);
    demo.show(3.14);

    Circle circle;
    Shape* shapePtr = &circle;

    shapePtr->draw(); // Dynamic binding for polymorphism

    Derived derived;
    derived.show(); // Calls the derived class's show()

    return 0;
}