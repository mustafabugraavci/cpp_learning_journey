#ifndef CPP_MUTIPLE_FILES_HPP
#define CPP_MUTIPLE_FILES_HPP

#include <iostream>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    Car(const std::string& make, const std::string& model, int year);
    void displayInfo() const;
};

#endif
