#include "vehicle.h"

void Vehicle::start()
{
    std::cout << "Vehicle is starting." << std::endl;
}

void Car::drive()
{
    start(); // Accessing public member from the base class
    std::cout << "Car is driving." << std::endl;
}
