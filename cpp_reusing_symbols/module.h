#include <iostream>

/*
class Base {
public:
    void show() {
        std::cout << "Base::show()" << std::endl;
    }
};

class Derived1 : public Base {
public:
    // TODO: Add derived-specific functionalities
};

class Derived2 : public Base {
public:
    // TODO: Add derived-specific functionalities
};

int main() {
    Derived1 d1;
    Derived2 d2;

    // TODO: Call the show() function for d1 and d2

    return 0;
}
*/

class Base {
public:
    void show() {
        std::cout << "Base::show()" << std::endl;
    }
};

class Derived1 : public Base {
public:
    void show() {
        std::cout << "Derived1::show()" << std::endl;
    }
};

class Derived2 : public Base {
public:
    void show() {
        std::cout << "Derived2::show()" << std::endl;
    }
};
