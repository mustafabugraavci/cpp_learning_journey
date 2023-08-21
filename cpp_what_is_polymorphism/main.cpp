#include "shape.h"
#include "animal.h"

int main()
{
    Shape* shapes[3];
    Circle circle;
    Square square;

    shapes[0] = &circle;
    shapes[1] = &square;
    shapes[2] = new Shape();

    for (int i = 0; i < 3; ++i) {
        shapes[i]->draw();
    }

    Animal* animals[2];
    Dog dog;
    Cat cat;

    animals[0] = &dog;
    animals[1] = &cat;

    for (int i = 0; i < 2; ++i) {
        animals[i]->makeSound();
    }

    return 0;
}