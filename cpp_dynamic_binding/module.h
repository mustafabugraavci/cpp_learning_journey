#include <iostream>

class Shape {
    public:
        virtual void draw();
};

class Circle : public Shape {
    public:
        void draw() override;
};

class Square : public Shape {
    public:
        void draw() override;
};

class Animal {
    public:
        virtual void makeSound();
};

class Dog : public Animal {
    public:
        void makeSound() override;
};
