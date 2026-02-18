#include <iostream>

int main()
{
    int temp;
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> temp;
    bool sunny = true;

    if (temp <= 0 || temp >= 30) {
        std::cout << "The weather is extreme!" << std::endl;
    }
    else {
        std::cout << "The weather is okay." << std::endl;
    }

    if (sunny && temp <= 5) {
        std::cout << "It`s cold even with the sun!" << std::endl;
    }
    else if (!sunny && temp <= 5) {
        std::cout << "Its almost freezing!" << std::endl;
    }
    else {
        std::cout << "It`s cold but could be worse." << std::endl;
    }

    return 0;
}