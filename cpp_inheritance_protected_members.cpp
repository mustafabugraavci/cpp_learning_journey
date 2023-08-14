#include <iostream>

// Base class with protected member
class Shape {
protected:
    int sides;

public:
    Shape(int _sides) : sides(_sides) {}
};

// Derived class accessing protected member
class Triangle : public Shape {
public:
    Triangle() : Shape(3) {}

    void printSides() {
        std::cout << "Triangle has " << sides << " sides." << std::endl;
    }
};

// Base class with protected member
class Vehicle {
protected:
    int speed;

public:
    Vehicle(int _speed) : speed(_speed) {}
};

// Derived classes accessing protected member
class Car : public Vehicle {
public:
    Car() : Vehicle(100) {}

    void accelerate() {
        speed += 10; // Modifying protected member in the derived class
        std::cout << "Car accelerated to " << speed << " km/h." << std::endl;
    }
};

class Bicycle : public Vehicle {
public:
    Bicycle() : Vehicle(20) {}

    void pedalFaster() {
        speed += 5; // Modifying protected member in the derived class
        std::cout << "Bicycle pedaled to " << speed << " km/h." << std::endl;
    }
};

// Base class with protected member
class Animal {
protected:
    std::string name;

public:
    Animal(const std::string& _name) : name(_name) {}
};

// Derived classes accessing protected member
class Dog : public Animal {
public:
    Dog(const std::string& _name) : Animal(_name) {}

    void bark() {
        std::cout << name << " is barking." << std::endl;
    }
};

class Cat : public Animal {
public:
    Cat(const std::string& _name) : Animal(_name) {}

    void meow() {
        std::cout << name << " is meowing." << std::endl;
    }
};

int main()
{
    Triangle triangle;
    triangle.printSides(); // Accessing protected member in the derived class

    Car car;
    Bicycle bicycle;

    car.accelerate();
    bicycle.pedalFaster();

    Dog dog("Buddy");
    Cat cat("Whiskers");

    dog.bark();
    cat.meow();

    return 0;
}