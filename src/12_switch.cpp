#include <iostream>

int main()
{
    char grade;
    std::cout << "Enter your grade (A-F): ";
    std::cin >> grade;

    switch(grade)
    {
        case 'A':
            std::cout << "Excellent!" << std::endl;
            break;
        case 'B':
            std::cout << "Good job!" << std::endl;
            break;
        case 'C':
            std::cout << "You can do better." << std::endl;
            break;
        case 'D':
            std::cout << "Needs improvement." << std::endl;
            break;
        case 'F':
            std::cout << "Failing grade." << std::endl;
            break;
        default:
            std::cout << "Invalid grade entered." << std::endl;
    }

    return 0;
}