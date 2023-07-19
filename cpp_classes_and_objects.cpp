#include <iostream>

class Person {
  // Data members
  public:
      std::string name;
      int age;
      std::string address;
    
      // Member functions
      void walk() {
          std::cout << "The person is walking." << std::endl;
      }
    
      void talk() {
          std::cout << "The person is talking." << std::endl;
      }
    
      void eat() {
          std::cout << "The person is eating." << std::endl;
      }
};

int main()
{
    // This code declares an object of the `Person` class.
    Person person;
    // This code sets the name of the person object.
    person.name = "John Doe";

    // This code prints the name of the person object.
    std::cout << person.name << std::endl;

    // This code calls the `walk()` member function of the person object.
    person.walk();

    // This code calls the `talk()` member function of the person object.
    person.talk();

    // This code calls the `eat()` member function of the person object.
    person.eat();

    return 0;
}