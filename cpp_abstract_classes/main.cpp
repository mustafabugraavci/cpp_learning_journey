#include "module.h"

int main() {
    Shape* shapes[2];
    shapes[0] = new Circle;
    shapes[1] = new Rectangle;

    for (int i = 0; i < 2; ++i) {
        shapes[i]->draw(); // Polymorphic invocation
        delete shapes[i];
    }

    Circle1 circle(9);

    std::cout << "Area of circle: " << circle.area() << std::endl;
    std::cout << "Perimeter of circle: " << circle.perimeter() << std::endl;

    return 0;
}
