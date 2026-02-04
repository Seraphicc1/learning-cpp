#include <iostream>

namespace first{
    int x = 3;
}
namespace second{
    int x = 15;
}

int main() {
    using namespace second;

    std::cout << first::x;

    return 0;
}