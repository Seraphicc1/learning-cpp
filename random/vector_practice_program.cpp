#include <iostream>
#include <vector>
#include <iomanip>

std::vector<double> numbers;
std::vector<int> numbers2;
double largest;
double smallest;
double sum;
int target = 69;
bool IsPair = false;

int main()
{
    std::cout << "*****************************************\n";
    std::cout << "Hello user! Please enter 5 numbers below:\n";

    for(int i = 0; i < 5; i++)
    {
        double x;
        std::cin >> x;
        numbers.push_back(x);
    }

    std::cout << "*****************************************\n";

    largest = numbers[0];
    smallest = numbers[0];
    sum = 0;

    for (size_t i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] > largest)
        {
            largest = numbers[i];
        }
        if (numbers[i] < smallest)
        {
            smallest = numbers[i];
        }
        sum = sum + numbers[i];
    }

    std::cout << std::setprecision(15);
    std::cout << "The largest number is: " << largest << std::endl;
    std::cout << "The smallest number is: " << smallest << std::endl;
    std::cout << "The sum of all numbers is: " << sum << std::endl;
    std::cout << "*****************************************\n";
    std::cout << "Now please enter 10 whole numbers between 1-100.\n";

    for(int i = 0; i < 10; i++)
    {
        int y;
        std::cin >> y;
        numbers2.push_back(y);
    }

    for(size_t o = 0; o < numbers2.size(); o++)
    {
        for(size_t j = o + 1; j < numbers2.size(); j++)
        {
            if(numbers2[o] + numbers2[j] == target)
            {
                std::cout << "Found pair: " << numbers2[o] << " + " << numbers2[j] << " = " << target << std::endl;
                IsPair = true;
            }
        }
    }

    if(!IsPair)
    {
        std::cout << "No pair found.\n";
    }

    std::cout << "*****************************************\n";

    return 0;
}