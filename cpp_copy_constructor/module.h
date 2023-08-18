#include <iostream>

class Shape {
public:
    Shape(int _sides) : sides(_sides) {}

    Shape(const Shape& other) : sides(other.sides) {
        std::cout << "Shape copy constructor called." << std::endl;
    }

protected:
    int sides;
};

class Triangle : public Shape {
public:
    Triangle(int _sides, int _height) : Shape(_sides), height(_height) {}

private:
    int height;
};

class Vehicle {
public:
    Vehicle(int _speed) : speed(_speed) {}

    Vehicle(const Vehicle& other) : speed(other.speed) {
        std::cout << "Vehicle copy constructor called." << std::endl;
    }

protected:
    int speed;
};

class Car : public Vehicle {
public:
    Car(int _speed, int _passengers) : Vehicle(_speed), passengers(_passengers) {}

    Car(const Car& other) : Vehicle(other), passengers(other.passengers) {
        std::cout << "Car copy constructor called." << std::endl;
    }

private:
    int passengers;
};

class A {
public:
    A(int _value) : value(_value) {}

    A(const A& other) : value(other.value) {
        std::cout << "A copy constructor called." << std::endl;
    }

protected:
    int value;
};

class B : public A {
public:
    B(int _value, int _modifier) : A(_value), modifier(_modifier) {}

    B(const B& other) : A(other), modifier(other.modifier) {
        std::cout << "B copy constructor called." << std::endl;
    }

private:
    int modifier;
};
