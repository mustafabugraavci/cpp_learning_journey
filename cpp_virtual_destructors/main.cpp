#include "module.h"

int main() {
    Shape* shapePtr = new Circle;
    delete shapePtr; // Only calls Shape::~Shape(), not Circle::~Circle()

    Shape1* shapePtr1 = new Circle1;
    delete shapePtr1; // Calls Circle::~Circle() via virtual destructor

    Resource* resPtr = new FileResource;
    // Work with the resource
    delete resPtr; // Calls FileResource::~FileResource() via virtual destructor


    return 0;
}