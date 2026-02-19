#include <iostream>

int main()
{
    std::string fruit = "Apple";
    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name); // Read a line of input into the string variable 'name'

    if(name.length() > 12) {
        std::cout << "Your name is too long. \n";
    }
    else if (name.empty()) {
        std::cout << "You did not enter a name. \n";
    }
    else {
        name.append(", you are awesome!");
        name.insert(0, "the great ");
        name.erase(0, 3);
        std::cout << "Hello " << name << std::endl;
    }

    std::cout << name.find("n") << std::endl;

    std::cout << "My favorite fruit starts with: " << fruit.at(0) << std::endl;
    fruit.clear();
    std::cout << fruit << std::endl;

    return 0;
}
