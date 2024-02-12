#include <iostream>

int half(int x, int divisor = 2) {
    std::cout << "1" << std::endl;
    return x / divisor;
}

double half(double x) {
    std::cout << "2" << std::endl;
    return x / 2;
}

int main() {
    half(4);
    half(3, 3);
    half(3.0);
    return 0;
}

