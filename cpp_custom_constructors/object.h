#include <iostream>

class Shape
{
    public:
        Shape();
};

class Circle : public Shape
{
    public:
        Circle();
};

class Vehicle
{
    public:
        Vehicle(int _speed);

    protected:
        int speed;
};

class Car : public Vehicle
{
    public:
        Car(int _speed, int _passengers);
    private:
        int passengers;
};

class A
{
    public:
        A();
};

class B : public A
{
    public:
        B();
};

class C : public B
{
    public:
        C();
};
