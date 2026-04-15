#include <iostream>
#include <ctime>

void DrawBoard(char *spaces);
void PlayerMove(char *spaces, char player);
void ComputerMove(char *spaces, char computer);
bool CheckWinner(char *spaces, char player, char computer);
bool CheckTie(char *spaces);

int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;

    DrawBoard(spaces);

    while(running)
    {
        PlayerMove(spaces, player);
    }

    return 0;
}

void DrawBoard(char *spaces)
{
    std::cout << "*******************\n";
    std::cout << "*     |     |     *" << "\n";
    std::cout << "*  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << "  *" << "\n";
    std::cout << "*_____|_____|_____*" << "\n";
    std::cout << "*     |     |     *" << "\n";
    std::cout << "*  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << "  *" << "\n";
    std::cout << "*_____|_____|_____*" << "\n";
    std::cout << "*     |     |     *" << "\n";
    std::cout << "*  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << "  *" << "\n";
    std::cout << "*     |     |     *" << "\n";
    std::cout << "*******************\n";
}

void PlayerMove(char *spaces, char player)
{
    
}

void ComputerMove(char *spaces, char computer)
{

}

bool CheckWinner(char *spaces, char player, char computer)
{
    return true;
}

bool CheckTie(char *spaces)
{
    return true;
}