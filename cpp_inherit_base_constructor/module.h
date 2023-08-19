#include <iostream>

/*
class Base {
public:
    Base(int _value) : value(_value) {}

    void printValue() {
        std::cout << "Value: " << value << std::endl;
    }

private:
    int value;
};

class Derived : public Base {
public:
    // TODO: Inherit the Base constructor here

    void showValue() {
        printValue();
    }
};
*/

class Base {
public:
    Base(int _value) : value(_value) {}

    void printValue();

private:
    int value;
};

class Derived : public Base {
public:
    using Base::Base; // Inherit the Base constructor

    void showValue();
};

class A {
public:
    A(int _value) : value(_value) {}

    void printValue();

private:
    int value;
};

class B : public A {
public:
    using A::A; // Inherit the A constructor

    void printValue();
};

class C : public B {
public:
    using B::B; // Inherit the B constructor

    void printValue();
};
