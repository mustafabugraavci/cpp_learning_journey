#include <iostream>

class Base {
public:
  // This is a static member of the `Base` class.
  static int counter;
};


class Derived : public Base {
public:
  // This code increments the static counter of the `Base` class.
  void incrementCounter();
};
