#include <iostream>

class Vehicle {
    public:
        void start();
};

class Car : private Vehicle {
    public:
        void drive();
};
