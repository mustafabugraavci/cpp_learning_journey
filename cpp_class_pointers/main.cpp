#include <iostream>
#include "cpp_multiple_files.hpp"

int main() {
    Car *myCar = new Car("Toyota", "Camry", 2022);
    myCar->displayInfo();
    (*myCar).displayInfo();

    delete myCar;

    return 0;
}
