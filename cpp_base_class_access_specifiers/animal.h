#include <iostream>

class Animal {
    protected:
        void eat();
};

class Dog : protected Animal {
    public:
        void consume();
};

class Cat : protected Animal {
    public:
        void consume();
};
