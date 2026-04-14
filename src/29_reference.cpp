#include <iostream>

void swap(double &x, double &y);

int main()
{
    int number = 16;
    std::cout << &number << std::endl;

    double x = 5.55;
    double y = 99.99;

    swap(x, y);

    std::cout << "X = " << x << std::endl;
    std::cout << "Y = " << y << std::endl;

    return 0;
}
void swap(double &x, double &y)
{
    double temp;
    temp = x;
    x = y;
    y = temp;
}