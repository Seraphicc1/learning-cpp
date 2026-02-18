#include <iostream>

int main()
{
    float price = 2.99;
    (price >= 5.00 ?    std::cout << "This is too expensive for me!" : 
                        std::cout << "I can buy this item.") << std::endl;

    int points = 55;
    std::string grade = points >= 90 ? "A" :
                        points >= 80 ? "B" :
                        points >= 70 ? "C" :
                        points >= 60 ? "D" : "F";
    std::cout << "Grade: " << grade << std::endl;

    bool hungry = false;
    std::cout << (hungry ? "Let`s eat together!" : "I`m not hungry right now.") << std::endl;

    return 0;
}
