#include "shape.h"
#include "animal.h"
#include "vehicle.h"

int main()
{
    Circle circle;
    circle.draw_circle(); // Accessing public member in the derived class

    Dog dog;
    Cat cat;

    dog.consume(); // Accessing protected member in the derived class
    cat.consume(); // Accessing protected member in the derived class

    Car car;
    car.drive(); // Accessing private member in the derived class

    return 0;
}
