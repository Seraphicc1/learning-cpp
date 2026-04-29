#include <iostream>

void dart(int bullseyes);
int multiply(int num);

int main()
{
    dart(5);
    std::cout << multiply(5);

    return 0;
}

void dart(int bullseyes){
    if(bullseyes > 0){
        std::cout << "You got a bullseye " << bullseyes << " time/s!\n";
        dart(bullseyes - 1);
    }
}
int multiply(int num){
    if(num > 1){
        return num * multiply(num - 1);
    }
    else{
        return 1;
    }
}