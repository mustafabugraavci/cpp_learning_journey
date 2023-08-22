#include <iostream>

class Base {
    public:
        void show();
};

class Derived : public Base {
    public:
        void show();
};

class Animal {
    public:
        void makeSound();
};

class Dog : public Animal {
    public:
        void makeSound();
};