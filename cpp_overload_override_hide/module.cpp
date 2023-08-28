#include "module.h"

void OverloadDemo::show(int x)
{
    std::cout << "Integer: " << x << std::endl;
}

void OverloadDemo::show(double y)
{
    std::cout << "Double: " << y << std::endl;
}

void Shape::draw()
{
    std::cout << "Drawing a shape." << std::endl;
}

void Circle::draw()
{
    std::cout << "Drawing a circle." << std::endl;
}

void Base::show()
{
    std::cout << "Base::show()" << std::endl;
}

void Derived::show()
{
    std::cout << "Derived::show()" << std::endl;
}
