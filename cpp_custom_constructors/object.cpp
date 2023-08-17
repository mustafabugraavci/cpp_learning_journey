#include "object.h"

Shape::Shape() 
{
    std::cout << "Shape constructor called." << std::endl;
}

Circle::Circle() 
{
    std::cout << "Circle constructor called." << std::endl;
}

Vehicle::Vehicle(int _speed) : speed{_speed} 
{
    std::cout << "Vehicle constructor called." << std::endl;
}

Car::Car(int _speed, int _passengers) : Vehicle(_speed), passengers{_passengers} 
{
    std::cout << "Car constructor called." << std::endl;
}

A::A()
{
    std::cout << "A constructor called." << std::endl;
}

B::B()
{
    std::cout << "B constructor called." << std::endl;
}

C::C()
{
    std::cout << "C constructor called." << std::endl;
}
