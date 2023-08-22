#include "module.h"

int main() {
    Derived derived;
    Base* basePtr = &derived;

    // TODO: Call the show() function using basePtr

    Dog dog;
    Animal* animalPtr = &dog;

    // TODO: Call the makeSound() function using animalPtr

    return 0;
}