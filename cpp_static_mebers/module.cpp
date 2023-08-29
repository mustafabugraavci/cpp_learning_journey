#include "module.h"

int Base::counter = 0;

void Derived::incrementCounter()
{
  Base::counter++;
}