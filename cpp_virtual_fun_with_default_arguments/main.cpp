#include "module.h"

int main() {
    Circle circle;
    Shape* shapePtr = &circle;

    shapePtr->draw();         // Calls Circle::draw(int thickness = 2)
    shapePtr->draw(3);        // Calls Circle::draw(int thickness = 3)
    shapePtr->Shape::draw();  // Calls Shape::draw(int thickness = 1)

    Circle1 circle1;
    Shape1* shapePtr1 = &circle1;

    shapePtr1->draw();    // Calls Circle::draw(int thickness = 1)

    return 0;
}