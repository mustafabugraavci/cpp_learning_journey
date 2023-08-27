#include <iostream>

class Shape {
public:
    virtual void draw();
};

class Circle : public Shape {
public:
    void draw() override;
};

/*
class Shape {
public:
    virtual void draw() {
        std::cout << "Drawing a shape." << std::endl;
    }
};

class Circle : public Shape {
public:
    // Mistake: Forgot to include 'override'
    void drw() {
        std::cout << "Drawing a circle." << std::endl;
    }
};
*/