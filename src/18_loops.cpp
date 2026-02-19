#include <iostream>

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

    std::cout << "Kaboom! *you are dead*" << std::endl;

    return 0;
}