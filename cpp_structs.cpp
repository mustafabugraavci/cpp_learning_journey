#include <iostream>

struct Employee {
    std::string name;
    int employeeID;
    double salary;
};

struct Student {
    std::string name;
    double gpa;
};

struct Rectangle {
    int width;
    int height;
};

struct Point {
    int x;
    int y;
};

// Function that displays student information
void displayStudent(const Student& student) {
    std::cout << "Name: " << student.name << ", GPA: " << student.gpa << std::endl;
}

int main()
{
    Employee john = {"John Doe", 12345, 50000.0};
    std::cout << "Employee Name: " << john.name << std::endl;
    std::cout << "Employee ID: " << john.employeeID << std::endl;
    std::cout << "Salary: $" << john.salary << std::endl;

    Student alice = {"Alice Smith", 3.8};
    displayStudent(alice);

    Rectangle rect = {5, 7};

    // Accessing and modifying struct members
    rect.width = 8;
    rect.height = 10;

    std::cout << "Rectangle dimensions: " << rect.width << " x " << rect.height << std::endl;


    Point p1 = {10, 20};
    std::cout << "Point coordinates: (" << p1.x << ", " << p1.y << ")" << std::endl;

    return 0;
}