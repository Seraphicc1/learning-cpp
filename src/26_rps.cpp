#include <iostream>
#include <ctime>

char choice();
char ai();
void ShowChoice(char choice);
void Winner(char player, char enemy);

int main()
{
    char player;
    char enemy;

    player = choice();
    std::cout << "Your choice: ";
    ShowChoice(player);

    enemy = ai();
    std::cout << "Computers choice: ";
    ShowChoice(enemy);

    Winner(player, enemy);

    return 0;
}

char choice()
{
    char player;
    std::cout << "Welcome to Rock/Paper/Scissors!\n";

    do
    {
        std::cout << "Choose 1 option below:\n";
        std::cout << "*******************************\n";
        std::cout << "Type 'R' for Rock\n";
        std::cout << "Type 'P' for Paper\n";
        std::cout << "Type 'S' for Scissors\n";
        std::cin >> player;
    }
    while(player != 'R' && player != 'P' && player != 'S');

    return player;
}

char ai()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch(num)
    {
        case 1: return 'R';
        case 2: return 'P';
        case 3: return 'S';
    }
    
    return 0;
}

void ShowChoice(char choice)
{
    switch(choice)
    {
        case 'R': std::cout << "Rock\n";
                break;
        case 'P': std::cout << "Paper\n";
                break;
        case 'S': std::cout << "Scissors\n";
                break;
    }
}

void Winner(char player, char enemy)
{
    switch(player)
    {
        case 'R':   if(enemy == 'R')
                    {
                        std::cout << "It's a tie!\n";
                    }
                    else if(enemy == 'P')
                    {
                        std::cout << "You lose!\n";
                    }
                    else
                    {
                        std::cout << "You win!\n";
                    }
                    break;

        case 'P':   if(enemy == 'P')
                    {
                        std::cout << "It's a tie!\n";
                    }
                    else if(enemy == 'S')
                    {
                        std::cout << "You lose!\n";
                    }
                    else
                    {
                        std::cout << "You win!\n";
                    }
                    break;

        case 'S':   if(enemy == 'S')
                    {
                        std::cout << "It's a tie!\n";
                    }
                    else if(enemy == 'R')
                    {
                        std::cout << "You lose!\n";
                    }
                    else
                    {
                        std::cout << "You win!\n";
                    }
                    break;
    }
}