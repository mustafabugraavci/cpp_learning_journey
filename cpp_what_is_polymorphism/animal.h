#include <iostream>

class Animal {
    public:
        virtual void makeSound();
};

class Dog : public Animal {
    public:
        void makeSound() override;
};

class Cat : public Animal {
    public:
        void makeSound() override;
};
