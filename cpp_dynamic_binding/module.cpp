#include "module.h"

void Shape::draw()
{
    std::cout << "Drawing a shape." << std::endl;
}

void Circle::draw()
{
    std::cout << "Drawing a circle." << std::endl;
}

void Square::draw()
{
    std::cout << "Drawing a square." << std::endl;
}

void Animal::makeSound()
{
    std::cout << "Animal makes a sound." << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Dog barks." << std::endl;
}
