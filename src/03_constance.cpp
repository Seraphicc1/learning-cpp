#include <iostream>

int main() {

    const int WIDTH = 2560;
    const int HEIGHT = 1440;

    // adding "HEIGHT = 1080" <-- would be an error

    int resolution = WIDTH * HEIGHT;
    
    std::cout << "Your resolution is " << resolution << "px .";

}