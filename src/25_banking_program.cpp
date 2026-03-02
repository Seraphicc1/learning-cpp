#include <iostream>
#include <iomanip>
#include <climits>

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "************************\n";
        std::cout << "Please choose an option.\n";
        std::cout << "************************\n";
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit\n";
        std::cout << "3. Withdraw\n";
        std::cout << "4. Exit\n";
        std::cin >> choice;

        std::cin.clear();
        std::cin.ignore(INT_MAX, '\n');

        switch(choice)
        {
            case 1: showBalance(balance);
                    break;
            case 2: balance += deposit();
                    showBalance(balance);
                    break;
            case 3: balance -= withdraw(balance);
                    showBalance(balance);
                    break;
            case 4: std::cout << "Thanks for visiting!\n";
                    break;
            default: std::cout << "Invalid choice.\n";
        }
    }
    while(choice != 4);

    return 0;
}

void showBalance(double balance)
{
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << std::endl;
}

double deposit()
{
    double giveamount;
    std::cout << "Please enter the amount: $";
    std::cin >> giveamount;

    if(giveamount > 0)
    {
        return giveamount;
    }
    else
    {
        std::cout << "Invalid amount.\n";
        return 0;
    }
}

double withdraw(double balance)
{
    double takeamount;
    std::cout << "How much do you wish to withdraw?: $";
    std::cin >> takeamount;

    if(takeamount > 0 && takeamount < balance)
    {
        return takeamount;
    }
    else if(takeamount > 0 && takeamount > balance)
    {
        std::cout << "Insufficient funds.\n";
        return 0;
    }
    else
    {
        std::cout << "Invalid amount.\n";
        return 0;
    }
}