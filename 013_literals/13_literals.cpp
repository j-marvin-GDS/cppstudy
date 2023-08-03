#include <iostream>

int main() {

    constexpr float x {4.1}; // compiler warning (type conversion)
    constexpr double y {4.1}; // OK; literal as double by default
    constexpr float z {4.1f}; // OK literal suffix cast as float

    std::cout << x << y << z << "\n";

    return 0;
}