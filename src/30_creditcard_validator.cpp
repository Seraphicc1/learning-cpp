#include <iostream>

int GetNumber(const int Number);
int SumOdd(const std::string CardNumber);
int SumEven(const std::string CardNumber);

int main()
{
    std::string CardNumber;
    int result = 0;

    std::cout << "Enter your credit card number: \n";
    std::cin >> CardNumber;

    result = SumOdd(CardNumber) + SumEven(CardNumber);

    if (result % 10 == 0)
    {
        std::cout << "Your card is valid.\n";
    }
    else
    {
        std::cout << "Your card in invalid.\n";
    }

    return 0;
}

int GetNumber(const int Number)
{


    return Number % 10 + (Number / 10 % 10);
}

int SumOdd(const std::string CardNumber)
{
    int sum = 0;

    for (int i = CardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += CardNumber[i] - '0';
    }

    return sum;
}

int SumEven(const std::string CardNumber)
{
    int sum = 0;

    for (int i = CardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += GetNumber((CardNumber[i] - '0') * 2);
    }

    return sum;
}