#include <iostream>

int add(int a, int b);
float add(float a, float b);
std::string add(std::string a, std::string b);

int main() 
{
  int x = add(10, 20);
  float y = add(10.0f, 20.0f);
  std::string z = add("Hello ", "world");

  std::cout << x << std::endl;
  std::cout << y << std::endl;
  std::cout << z << std::endl;

  return 0;
}

int add(int a, int b) 
{
  return a + b;
}

float add(float a, float b) 
{
  return a + b;
}

std::string add(std::string a, std::string b) 
{
  return a + b;
}
