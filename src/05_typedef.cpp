#include <iostream>

typedef std::string text_t;
using number_t = int;

int main() {

    text_t animal = "Gorilla";
    number_t age = 49;

    std::cout << animal << '\n';
    std::cout << age << '\n';

    return 0;
}