#include <iostream>

class Base final {
    // Class implementation
};

class Vehicle {
    // Vehicle class implementation
};

class Car final : public Vehicle {
    // Car class implementation
};

// Error: Cannot derive from final class 'Car'
class SportsCar : public Car {
    // SportsCar class implementation
};

class Shape {
public:
    virtual void draw() final {
        // Default drawing behavior
    }
};

class Circle : public Shape {
public:
    // Error: Cannot override final function 'draw'
    void draw() override {
        // Circle-specific drawing behavior
    }
};

int main()
{

}