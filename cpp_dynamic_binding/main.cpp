#include "module.h"

int main()
{
    Shape* shapes[3];
    Circle circle;
    Square square;

    shapes[0] = &circle;
    shapes[1] = &square;
    shapes[2] = new Shape();

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw(); // Dynamic binding in action
    }

    Dog dog;
    Animal* animalPtr = &dog;

    animalPtr->makeSound(); // Dynamic binding in action

    return 0;
}