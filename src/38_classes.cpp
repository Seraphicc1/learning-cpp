#include <iostream>

class Dog
{
    public:
        int age = 7;
        float weight;
        std::string name;

        void DoBark()
        {
            std::cout << name << " barks furiously!\n";
        }
        void GoSleep()
        {
            std::cout << name << " is tired and goes to sleep now...\n";
        }
};

int main()
{
    Dog Labrador1;
    Dog Labrador2;

    // age = 7 because we assigned it in the class already
    Labrador1.weight = 26.78;
    Labrador1.name = "Bruno";

    Labrador2.age = 5;
    Labrador2.weight = 15.98;
    Labrador2.name = "Francis";

    std::cout << "He is " << Labrador1.age << " years old.\n";
    std::cout << "He weights " << Labrador1.weight << "kg.\n";
    std::cout << "His name is " << Labrador1.name << " and he is happy to meet you.\n";
    std::cout << "He is " << Labrador2.age << " years old.\n";
    std::cout << "He weights " << Labrador2.weight << "kg.\n";
    std::cout << "His name is " << Labrador2.name << " and he is happy to meet you.\n";

    Labrador1.DoBark();
    Labrador2.GoSleep();

    return 0;
}