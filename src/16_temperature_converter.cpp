#include <iostream>
#include <cmath>

int main()
{
    double temp;
    char unit;

    std::cout << "*****Temperature Converter*****\n";

    std::cout << "Which unit do you want to convert from? (C/F): ";
    std::cin >> unit;
    std::cout << "Please enter the temperature: ";
    std::cin >> temp;

    if(unit == 'C' || unit == 'c') {
        float result = temp * 1.8 + 32;
        std::cout << temp << " degrees Celsius is " << result << " degrees Fahrenheit.\n";
    }
    else if(unit == 'F' || unit == 'f') {
        float result = (temp - 32) / 1.8;
        std::cout << temp << " degrees Fahrenheit is " << result << " degrees Celsius.\n";
    }
    else {
        std::cout << "Invalid unit entered. Please enter 'C' for Celsius or 'F' for Fahrenheit.\n";
    }

    std::cout << "*******************************\n";

    return 0;
}