#include <iostream>

double GetTotal(double prices[], int size);
int SearchArray(double array[], int size, double element);
void sort(int sorting[], int capacity);

int main()
{
    // Array Creation, Changing an Element and getting the Size
    std::string classroom[] = {"Teacher", "Smarthead", "Bully", "Clown"};

    classroom[0] = "Skipper";
    std::cout << classroom[0] << std::endl;
 
    std::cout << "This array has: " << sizeof(classroom) / sizeof(std::string) << " elements.\n";

    for(int i = 0; i < sizeof(classroom) / sizeof(classroom[1]); i++)
    {
        std::cout << classroom[i] << std::endl;
    }

    std::cout << "************************************\n";

    // For each loop + The Sum of Elements of an Array
    double prices[] = {0.99, 4.99, 16.99, 99.99, 50.00, 75.00};
    int size = sizeof(prices) / sizeof(prices[0]);
    double total = GetTotal(prices, size);

    for(double price : prices)
    {
        std::cout << "$" << price << '\n';
    }

    std::cout << "$" << total << std::endl;

    std::cout << "************************************\n";

    // Searching for an Element inside an Array
    double myNum;
    int index;
    std::cout << "Enter the price you want to search for: \n";
    std::cin >> myNum;

    index = SearchArray(prices, size, myNum);

    if(index != -1)
    {
        std::cout << myNum << " is at index " << index << std::endl;
    }
    else
    {
        std::cout << myNum << " was not found inside this array.\n";
    }

    std::cout << "************************************\n";
    // Sorting an Array
    int sorting[] = {15, 12, 62, 2, 5, 9, 1, 24, 6};
    int capacity = sizeof(sorting) / sizeof(sorting[0]);

    sort(sorting, capacity);

    for(int number : sorting)
    {
        std::cout << number << " " << std::endl;
    }

    std::cout << "************************************\n";
    // Fill() Function
    const int SIZE = 12;
    int filling[SIZE];

    std::fill(filling, filling + (SIZE / 3), 1337);
    std::fill(filling + (SIZE / 3), filling + (SIZE / 3) * 2, 420);
    std::fill(filling + (SIZE / 3) * 2, filling + SIZE, 69);

    for(int number : filling)
    {
        std::cout << number << std::endl;
    }

    std::cout << "************************************\n";

    // User Input Practice
    std::string RedObj[6];
    int Size = sizeof(RedObj) / sizeof(RedObj[0]);
    std::string temp;

    for(int k = 0; k < Size; k++)
    {
        std::cout << "Name red objects or 'q' to quit #" << k + 1 << ": ";
        std::getline(std::cin >> std::ws, temp);

        if(temp == "q")
        {
            break;
        }
        else
        {
            RedObj[k] = temp;
        }
    }

    std::cout << "-----You named these objects-----\n";
    for(int k = 0; !RedObj[k].empty(); k++)
    {
        std::cout << RedObj[k] << std::endl;
    }

    std::cout << "************************************\n";

    // 2D-Array
    int sudoku[][3] =   {{4, 5, 9},
                        {1, 7, 8},
                        {2, 6, 3}};
    
    int rows = sizeof(sudoku) / sizeof(sudoku[0]);
    int columns = sizeof(sudoku[0]) / sizeof(sudoku[0][0]);

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            std::cout << sudoku[i][j] << " ";
        }
        std::cout << "\n";
    }

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

int SearchArray(double array[], int size, double element)
{
    for(int i = 0; i < size; i++)
    {
        if(array[i] == element)
        {
            return i;
        }
    }
    return -1;
}

void sort(int sorting[], int capacity)
{
    int temp;
    for(int i = 0; i < capacity - 1; i++)
    {
        for(int j = 0; j < capacity - i - 1; j++)
        {
            if(sorting[j] > sorting[j + 1])
            {
                temp = sorting[j];
                sorting[j] = sorting[j + 1];
                sorting[j + 1]= temp;
            }
        }
    }
}