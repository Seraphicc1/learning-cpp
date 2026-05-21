#include <iostream>
#include <string>

int main()
{
    std::string name;
    int seconds;

    while(name.empty()) {
        std::cout << "Enter your name: ";
        std::getline(std::cin, name);
    }

    do{
        std::cout << "Enter a positive number: ";
        std::cin >> seconds;
    } while(seconds <= 0);

    std::cout << "Hello " << name << std::endl;
    std::cout << "You have " << seconds << " seconds left to live." << std::endl;

    for(int i = seconds; i > 0; i--) {
        if(i == 69) {
            std::cout << "Nice!" << std::endl;
            continue;
        }
        if(i == 7) {
            std::cout << "Oops! You stepped on a landmine!" << std::endl;
            break;
        }
        std::cout << i << std::endl;
    }

    std::cout << "Kaboom! *you are dead* haha, btw here are the other numbers." << std::endl;

    for(int ix = 1; ix <= 3; ix++)
    {
    for(int j = 7; j > -1; j--)
        {
            std::cout << j << std::endl;
        }
        std::cout << "3rr0r|" << std::endl;
    }

    std::cout << "Also let me make a rectangle for you, since you stepped on my landmine." << std::endl;

    int rows;
    int columns;
    char symbol;

    std::cout << "Pick a number from 1-10: ";
    std::cin >> rows;

    std::cout << "Pick another number from 1-15: ";
    std::cin >> columns;

    std::cout << "Pick a symbol you like: ";
    std::cin >> symbol;

    for(int ixj = 1; ixj <= rows; ixj++)
    {
    for(int jx = 7; jx <= columns; jx++)
        {
            std::cout << symbol;
        }
        std::cout << '\n';
    }

    return 0;
}