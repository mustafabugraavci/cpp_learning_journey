#include <iostream>

template <typename T> T maximum(T a, T b);
template <typename T> T add(T a, T b);

int main()
{
    int x = 100, y = 50;
    float z = 23425e-3, t = 2.34;

    std::cout<<"sum of integers: " << add(x,y) << std::endl;
    std::cout<<"sum of floats: " << add(z,t) << std::endl;

    std::cout<<"max of integers: " << maximum(x,y) << std::endl;
    std::cout<<"max of floats: " << maximum(z,t) << std::endl;

    return 0;
}

template <typename T> T maximum(T a, T b)
{
    return (a>b) ? a : b;
}

template <typename T> T add(T a, T b)
{
    return a + b;
}
