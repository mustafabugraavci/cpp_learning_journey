#include <iostream>

class Shape {
    public:
        virtual void draw();
};

class Circle : public Shape {
    public:
        void draw() override;
};

class Shape2 {
    public:
        void draw();
};

class Circle2 : public Shape2 {
    public:
        void draw();
};
