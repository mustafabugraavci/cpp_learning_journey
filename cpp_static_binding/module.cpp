#include "module.h"

void Base::show()
{
    std::cout << "Base::show()" << std::endl;
}

void Derived::show()
{
    std::cout << "Derived::show()" << std::endl;
}

void Animal::makeSound()
{
    std::cout << "Animal makes a sound." << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Dog barks." << std::endl;
}
