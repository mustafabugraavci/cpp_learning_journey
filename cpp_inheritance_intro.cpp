#include <iostream>

class Shape {
public:
    void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

// Derived class
class Circle : public Shape {
public:
    void drawCircle() {
        std::cout << "Drawing a circle." << std::endl;
    }
};

// Base class
class Animal {
public:
    void eat() {
        std::cout << "Animal is eating." << std::endl;
    }

protected:
    void sleep() {
        std::cout << "Animal is sleeping." << std::endl;
    }

private:
    void move() {
        std::cout << "Animal is moving." << std::endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        std::cout << "Dog is barking." << std::endl;
    }

    void performActivities() {
        eat();   // Accessible (public in base class)
        sleep(); // Accessible (protected in base class)
        // move(); // Not accessible (private in base class)
    }
};

int main()
{
    Circle circle;
    circle.draw();       // Accessing base class method
    circle.drawCircle(); // Accessing derived class method

    Dog dog;
    dog.performActivities(); // Accessing base class methods from derived class

    return 0;
}