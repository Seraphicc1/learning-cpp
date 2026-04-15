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
    
    std::cout << "******************************************************************\n";

    int *Pvalue = nullptr;
    int y = 1;
    Pvalue = &y;

    if (Pvalue == nullptr)
    {
        std::cout << "Memory address not assigned.\n";
    }
    else
    {
        std::cout << "Memory address assigned.\n";
        std::cout << Pvalue;
    }

    return 0;
}