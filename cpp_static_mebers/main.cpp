#include "module.h"

int main() {
  // This code creates a `Derived` object.
  Derived derived;

  // This code increments the static counter of the `Base` class.
  derived.incrementCounter();

  // This code prints the value of the static counter.
  std::cout << Base::counter << std::endl;

  return 0;
}