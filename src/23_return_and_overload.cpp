#include <iostream>

// Function return values
double square(double lenght);
double cube(double lenght);
std::string combiner(std::string first, std::string second);

// Function overloading
void icecream();
void icecream(std::string flavor);
void icecream(std::string flavor, int scoops);

int main()
{
    // Calling the functions and storing their return values in variables
    double lenght = 5.0;
    double result = square(lenght);
    double volume = cube(lenght);

    std::string first = "Billy";
    std::string second = "Joe";

    std::cout << "The area of the square is: " << result << "cm^2\n";
    std::cout << "The volume of the cube is: " << volume << "cm^3\n";
    std::cout << "Your name is: " << combiner(first, second) << std::endl;

    // Calling the overloaded functions

    icecream();
    icecream("strawberry");
    icecream("strawberry", 5);

    return 0;
}

// Defining the functions

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

void icecream()
{
    std::cout << "Enjoy your ice cream!\n";
}

void icecream(std::string flavor)
{
    std::cout << "Enjoy your " << flavor << " ice cream!\n";
}

void icecream(std::string flavor, int scoops)
{
    std::cout << "Enjoy your " << scoops << " scoops of " << flavor << " ice cream!\n";
}
