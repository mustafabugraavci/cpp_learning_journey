#include <iostream>

/*
class Base {
public:
    void method() {
        std::cout << "Base::method()" << std::endl;
    }
};

class Derived : public Base {
private:
    void method() {
        std::cout << "Derived::method()" << std::endl;
    }
};
*/

class Base {
public:
    void method();
};

class Derived : private Base {
    public:
        void method();
    public:
        using Base::method; // Resurrecting method() from Base
};

class Base1 {
    public:
        void commonMethod1();
};

class Base2 {
    public:
        void commonMethod2();
};

class Derived1 : private Base1, private Base2 {
    public:
        using Base1::commonMethod1; // Resurrecting commonMethod() from Base1
        using Base2::commonMethod2; // Resurrecting commonMethod() from Base2
};
