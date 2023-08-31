#include <iostream>

class Shape {
public:
    virtual void draw(int thickness = 1) {
        std::cout << "Drawing a shape with thickness " << thickness << std::endl;
    }
};

class Circle : public Shape {
public:
    void draw(int thickness = 2) override {
        std::cout << "Drawing a circle with thickness " << thickness << std::endl;
    }
};

class Shape1 {
public:
    virtual void draw(int thickness = 1) {
        std::cout << "Drawing a shape with thickness " << thickness << std::endl;
    }
};

class Circle1 : public Shape1 {
public:
    // No need to repeat the default argument
    void draw(int thickness) override {
        std::cout << "Drawing a circle with thickness " << thickness << std::endl;
    }
};