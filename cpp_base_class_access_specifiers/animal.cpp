#include "animal.h"

void Animal::eat()
{
    std::cout << "Animal is eating" << std::endl;
}

void Dog::consume()
{
    eat(); // Accessing protected member from the base class
    std::cout << "Dog is eating" << std::endl;
}

void Cat::consume()
{
    eat(); // Accessing protected member from the base class
    std::cout << "Cat is consuming" << std::endl;
}
