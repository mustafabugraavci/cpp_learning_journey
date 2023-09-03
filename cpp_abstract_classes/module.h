#include <iostream>

/*
class Shape {
public:
    virtual void draw() = 0; // Pure virtual function
};
*/

class Shape {
    public:
        virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape {
    public:
        void draw() override;
};

class Rectangle : public Shape {
    public:
        void draw() override ;
};

class GeometricShape {
    public:
        virtual double area() const = 0;
        virtual double perimeter() const = 0;
};

class Circle1 : public GeometricShape {
    private:
        double radius;

    public:
        Circle1(double r) : radius(r) {}

        double area() const override
        {
            return 3.14159265359 * radius * radius;
        }

        double perimeter() const override
        {
            return 2 * 3.14159265359 * radius;
        }
};
