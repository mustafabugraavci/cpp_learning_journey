#include "shape.h"

void Shape::draw()
{
    std::cout << "Drawing a shape" << std::endl;
}

void Circle::draw_circle()
{
    draw(); // Accessing public member from the base class
    std::cout << "Drawing a Circle" << std::endl; 
}
