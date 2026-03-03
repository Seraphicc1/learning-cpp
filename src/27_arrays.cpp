#include <iostream>

double GetTotal(double prices[], int size);

int main()
{
    std::string classroom[] = {"Teacher", "Smarthead", "Bully", "Clown"};

    classroom[0] = "Skipper";
    std::cout << classroom[0] << std::endl;
 
    std::cout << "This array has: " << sizeof(classroom) / sizeof(std::string) << " elements.\n";

    for(int i = 0; i < sizeof(classroom) / sizeof(classroom[1]); i++)
    {
        std::cout << classroom[i] << std::endl;
    }

    double prices[] = {0.99, 4.99, 16.99, 99.99, 50.00, 75.00};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = GetTotal(prices, size);

    for(double price : prices)
    {
        std::cout << "$" << price << '\n';
    }

    std::cout << "$" << total << std::endl;

    return 0;
}

double GetTotal(double prices[], int size)
{
    double total = 0;

    for(int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}