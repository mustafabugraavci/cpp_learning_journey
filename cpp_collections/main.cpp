#include "module.h"

int main() 
{
    std::vector<Shape*> shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Shape());

    for (Shape* shape : shapes) 
    {
        std::cout << "Size of shape: " << sizeof(*shape) << " bytes" << std::endl;
    }

    // TODO: Properly deallocate memory

    for (Shape* shape : shapes) 
    {
    std::cout << "Size of shape: " << sizeof(*shape) << " bytes" << std::endl;
    delete shape;
    }

    return 0;
}
