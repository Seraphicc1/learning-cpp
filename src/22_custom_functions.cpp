#include <iostream>

void newguest(std::string name, int age);

int main()
{
    std::string name = "Billy Joe";
    int age = 42;

    newguest(name, age);

    return 0;
}

void newguest(std::string name, int age)
{
    std::cout << "Welcome to the party, " << name << "! You are " << age << " years old." << std::endl;
}