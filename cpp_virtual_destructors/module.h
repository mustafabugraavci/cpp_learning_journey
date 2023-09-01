#include <iostream>

class Shape {
    public:
        ~Shape() {
            // Base class destructor
        }
};

class Circle : public Shape {
    public:
        ~Circle() {
            // Derived class destructor
        }
};

///////////////Vritual Base

class Shape1 {
public:
    virtual ~Shape1() {
        // Virtual destructor
    }
};

class Circle1 : public Shape1 {
public:
    ~Circle1() {
        // Derived class destructor
    }
};

class Resource {
public:
    virtual ~Resource() {
        // Clean up resource
    }
};

class FileResource : public Resource {
public:
    ~FileResource() {
        // Clean up file-specific resources
    }
};
