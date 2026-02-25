#include <iostream>

double square(double lenght);
double cube(double lenght);
std::string combiner(std::string first, std::string second);

int main()
{
    double lenght = 5.0;
    double result = square(lenght);
    double volume = cube(lenght);

    std::string first = "Billy";
    std::string second = "Joe";

    std::cout << "The area of the square is: " << result << "cm^2\n";
    std::cout << "The volume of the cube is: " << volume << "cm^3\n";
    std::cout << "Your name is: " << combiner(first, second) << std::endl;

    return 0;
}

double square(double lenght)
{
    return lenght * lenght;
}

double cube(double lenght)
{
    return lenght * lenght * lenght;
}

std::string combiner(std::string first, std::string second)
{
    return first + " " + second;
}