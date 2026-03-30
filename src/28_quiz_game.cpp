#include <iostream>

int main()
{
    std::cout << "**********************Welcome to the Quiz!**********************\n";
    std::cout << "****************************************************************\n";

    std::string questions[] =   {"1. What does 'CPU' stand for?: ",
                                 "2. Who created the Fortnite-Franchise?: ",
                                 "3. Which Battlefield is the newest?: ",
                                 "4. What does 'DAW' stand for?: ",
                                 "5. Which programming language is used in Unreal Eninge 5?: ",
                                 "6. What is the name of the new popular cat-breeding-roguelite?: "};

    std::string options[][3] =  {{"A: Central Processing Unit", "B: Computer Processing Unit", "C: Compiling Processer Unit"},
                                {"A: Ubisoft Montreal", "B: Activison Blizzard", "C: Epic Games"},
                                {"A: Battlefield 5", "B: Battlefield 2077", "C: Battlefield 6"},
                                {"A: Digital Audio Workstation", "B: Digital Audio Workspace", "C: Designing Audio Workplace"},
                                {"A: C++", "B: C#", "C: Python"},
                                {"A: BreedingMania", "B: Mewgenics", "C: Meowtation"}};

    char answers[] = {'A', 'C', 'C', 'A', 'A', 'B'};

    int size = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score;

    for(int i = 0; i < size; i++)
    {
        std::cout << questions[i] << std::endl;
        std::cout << "****************************************************************\n";

        for(int j = 0; j < sizeof(options[i]) / sizeof(options[i][0]); j++)
        {
            std::cout << options[i][j] << "\n";
        }

        std::cout <<"****************************************************************\n";
    }

    return 0;
}