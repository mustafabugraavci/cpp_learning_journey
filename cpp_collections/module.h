#include <iostream>
#include <vector>

class Shape {
    public:
        virtual void draw();
};

class Circle : public Shape {
    public:
        void draw() override;
};
