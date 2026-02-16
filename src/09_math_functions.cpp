#include <iostream>
#include <cmath>

int main()
{
    double x = 5.67;
    double y = 3;
    double z;

    z = pow(3, 4);
    z = sqrt(25);
    z = abs(-16);
    z = round(x);
    z = ceil(x);
    z = floor(x);

    z = std::max(x, y);
    z = std::min(x, y);

    std::cout << z;

    return 0;
}