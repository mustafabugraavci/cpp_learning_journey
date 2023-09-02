#include <iostream>

class Shape {
    public:
        virtual ~Shape() {}
};

class Circle : public Shape {
    public:
        void drawCircle() {
            std::cout << "Safely drawn Circle" << std::endl;
        }
};

int main() {
    Shape* shapePtr1 = new Circle;
    
    // Error: 'shapePtr' is of type 'Shape*', not 'Circle*'
    //Circle* circlePtr = shapePtr;

    Shape* shapePtr = new Circle;

    Circle* circlePtr = dynamic_cast<Circle*>(shapePtr);
    
    if (circlePtr) {
        // The conversion was successful, work with 'circlePtr'
        circlePtr->drawCircle();
    } else {
        // The conversion failed
        // Handle the case where 'shapePtr' is not pointing to a 'Circle' object
    }
    
    return 0;
}