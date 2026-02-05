#include <iostream>

int main() {

    int correct = 15;
    int questions = 88;
    double score = correct / (double) questions * 100; // Explicit

    std::cout << score << "%" << '\n';
    std::cout << char (117) << '\n'; // Implicit (ASCII Table)

    return 0;
}