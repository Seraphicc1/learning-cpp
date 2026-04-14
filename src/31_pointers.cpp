#include <iostream>

int main()
{
    int score = 15;
    int *Pscore = &score;
    std::string status[] = {"100%", "50%", "0%"};
    std::string *Pstatus = status;

    std::cout << "The pointer displays the address of 'score': " << Pscore << std::endl;
    std::cout << "Dereferencing the pointer display the value of 'score': " << *Pscore << std::endl;
    std::cout << "An array already returns an adress: " << Pstatus << std::endl;
    std::cout << "Dereferencing an arrays returns the first element: " << *Pstatus << std::endl;

    return 0;
}