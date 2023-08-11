#ifndef MAIN_H
#define MAIN_H

#include <iostream>

class MyClass {
public:
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

class Base {
public:
    Base() {
        std::cout << "Base constructor called." << std::endl;
    }

    ~Base() {
        std::cout << "Base destructor called." << std::endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Derived constructor called." << std::endl;
    }

    ~Derived() {
        std::cout << "Derived destructor called." << std::endl;
    }
};

class Inner {
public:
    Inner() {
        std::cout << "Inner constructor called." << std::endl;
    }

    ~Inner() {
        std::cout << "Inner destructor called." << std::endl;
    }
};

class Outer {
public:
    Outer() {
        std::cout << "Outer constructor called." << std::endl;
    }

    ~Outer() {
        std::cout << "Outer destructor called." << std::endl;
    }

private:
    Inner inner;
};

#endif