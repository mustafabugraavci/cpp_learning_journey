#include "module.h"

int main() {
    Shape shape;
    Circle circle;

    std::cout << "Size of Shape: " << sizeof(shape) << " bytes" << std::endl;
    std::cout << "Size of Circle: " << sizeof(circle) << " bytes" << std::endl;

    Circle2 circle2;
    Shape2 shape2 = circle2; // Slicing occurs here

    shape2.draw(); // Calls the base class draw()

    Circle circle3;
    Shape* shapePtr = &circle3;

    shapePtr->draw(); // Dynamic behavior preserved

    return 0;
}
