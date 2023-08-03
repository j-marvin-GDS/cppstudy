#include "8_headers_test_adj.h"
#include <iostream>

int main() {
    int x {};
    int y {};

    std::cout << "Enter your first number: ";
    std::cin >> x;

    std::cout << "Enter your second number: ";
    std::cin >> y;

    std::cout << "Your multiplied number is: " << multiply(x, y) << "\n";
}