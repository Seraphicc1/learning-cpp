#include <iostream>

class Car
{
    public:
        std::string make;
        int horsepower;
        char rating;

        Car(std::string make)
        {
            this->make = make;
        }

        Car(std::string make, int x, char rating)
        {
            this->make = make;
            horsepower = x;
            this->rating = rating;
        }
};

int main()
{
    // Constructor makes it possible to assign values as arguments
    Car Car1("Mercedes", 270, 'B');
    Car Car2("Audi");

    std::cout << Car1.make << std::endl;
    std::cout << Car1.horsepower << std::endl;
    std::cout << Car1.rating << std::endl;
    std::cout << Car2.make << std::endl;

    return 0;
}