#include <iostream>

int main()
{
    std::string *pCars = nullptr;
    int size;

    std::cout << "How many cars do you wanna name?: ";
    std::cin >> size;

    pCars = new std::string[size];

    for(int i = 0; i < size; i++){
        std::cout << "Name car #" << i + 1 << ": ";
        std::cin >> pCars[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << "You named: " << pCars[i] << std::endl;
    }

    delete[] pCars;

    return 0;
}