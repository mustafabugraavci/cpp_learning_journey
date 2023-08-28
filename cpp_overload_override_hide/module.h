#include <iostream>

class OverloadDemo {
public:
    void show(int x);

    void show(double y);
};

class Shape {
public:
    virtual void draw();
};

class Circle : public Shape {
public:
    void draw() override;
};

class Base {
public:
    void show();
};

class Derived : public Base {
public:
    void show();
};
