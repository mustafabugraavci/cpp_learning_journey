#include "cpp_multiple_files.hpp"
#include <iostream>

Car::Car(const std::string& make, const std::string& model, int year)
    : make(make), model(model), year(year) {}

void Car::displayInfo() const {
    std::cout << "Make: " << make << ", Model: " << model << ", Year: " << year << std::endl;
}
