#include <iostream>

struct pcs{
    char rating;
    int year;
    std::string gpu = "RTX 3080";
};

void BuyPc(pcs PC);
void InStock(pcs PC);

int main()
{
    pcs hellraiser;
    hellraiser.rating = 'A';
    hellraiser.year = 2025;

    pcs multimedia;
    multimedia.rating = 'C';
    multimedia.year = 2018;

    std::cout << hellraiser.rating << '\n';
    std::cout << hellraiser.year << '\n';
    std::cout << hellraiser.gpu << '\n';
    std::cout << "**********\n";
    std::cout << multimedia.rating << '\n';
    std::cout << multimedia.year << '\n';
    std::cout << multimedia.gpu << '\n';
    std::cout << "**********\n";

    BuyPc(hellraiser);

    std::cout << "**********\n";
    std::cout << &multimedia << '\n';
    InStock(multimedia);

    return 0;
}

void BuyPc(pcs PC){
    double offer;

    PC.year = 2026;

    std::cout << "What is your offer in $: ?";
    std::cin >> offer;

    std::cout << PC.rating << '\n';
    std::cout << PC.year << '\n';
    std::cout << PC.gpu << '\n';
    std::cout << offer << "$\n";
}

void InStock(pcs PC){
    std::cout << &PC << '\n';
}