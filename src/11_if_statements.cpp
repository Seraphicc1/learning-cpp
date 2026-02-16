#include <iostream>

int main()
{
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 65)
    {
        std::cout << "Enjoy your senior citizen discount!";
    }
    else if(age >= 18)
    {
        std::cout << "Enjoy your club membership!";
    }
    else if(age <= 0)
    {
        std::cout << "Invalid age entered.";
    }
    else
    {
        std::cout << "Sorry, you must be at least 18 years old to join the club.";
    }

    return 0;
}