#include <iostream>

enum fruits{banana = 0, apple = 1, strawberry = 2, kiwi = 3, mango = 4, pineapple = 5};

int main()
{
    fruits favorite = strawberry;

    switch(favorite){
        case banana: std::cout << "You love banana!\n";
                        break;
        case apple: std::cout << "You love apple!\n";
                        break;
        case strawberry: std::cout << "You love strawberry!\n";
                        break;
        case kiwi: std::cout << "You love kiwi!\n";
                        break;
        case mango: std::cout << "You love mango!\n";
                        break;
        case pineapple: std::cout << "You love pineapple!\n";
                        break;
    }

    return 0;
}