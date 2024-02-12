#include <iostream>

std::string a = "test";
double b = 3.2 * 5 - 1;
// fixme: result is int
double c = 5 / 2;

// fixme: result is int
double d(int foo) { return foo / 2; }

double e(double foo) { return foo / 2; }
int f(double foo) { return int(foo / 2); }

void g(double c) {
    std::cout << c << std::endl;
}

int main() {

}

