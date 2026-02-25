#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum)
    {
        case 1: std::cout << "You get All Stats Down 3!\n";
            break;
        case 2: std::cout << "Lose all your Gold and Boots!\n";
            break;
        case 3: std::cout << "Nothing happens. Walk away.\n";
            break;
        case 4: std::cout << "Upgrade your Weapon +3!\n";
            break;
        case 5: std::cout << "All Stats Up 2 and 250 Gold for you Traveler!";
            break;
    }

    return 0;
}