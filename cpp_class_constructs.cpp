#include <iostream>

// Example class with constructors
class ExampleClass {
public:
    // Default constructor
    ExampleClass() {
        std::cout << "Default constructor called!" << std::endl;
    }

    // Parameterized constructor
    ExampleClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }

    // Copy constructor
    ExampleClass(const ExampleClass& other) {
        std::cout << "Copy constructor called!" << std::endl;
    }
};

// Example class with default constructor
class DefaultConstructorClass {
public:
    // Default constructor
    DefaultConstructorClass() {
        std::cout << "Default constructor called!" << std::endl;
    }
};

// Example class with parameterized constructor
class ParameterizedConstructorClass {
public:
    // Parameterized constructor
    ParameterizedConstructorClass(int value) {
        std::cout << "Parameterized constructor called with value: " << value << std::endl;
    }
};

// Example class with copy constructor
class CopyConstructorClass {
public:

    // Copy constructor
    CopyConstructorClass() {
        std::cout << "Default Copy constructor called!" << std::endl;
    }
    // Copy constructor
    CopyConstructorClass(const CopyConstructorClass& other) {
        std::cout << "Copy constructor called!" << std::endl;
    }
};

int main()
{
    // Default constructor
    ExampleClass example_obj;

    // Parameterized constructor
    ExampleClass example_obj2(3U);
    
    // Copy constructor
    ExampleClass example_obj1 = example_obj;


    // Default constructor is called automatically
    DefaultConstructorClass obj;

    // Parameterized constructor is called with the argument 42
    ParameterizedConstructorClass obj3(42);

    CopyConstructorClass obj1;
    // Copy constructor is called to initialize obj2 with obj1
    CopyConstructorClass obj2 = obj1;

    return 0;
}
