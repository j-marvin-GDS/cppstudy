#include <iostream>

int main() {
    const int x {5};

    // works because we know x and 3 @ compile
    [[maybe_unused]] constexpr int y {x*3}; 

    std::cout << "Enter a number: ";

    int input {};
    std::cin >> input;

    std::cout << input << "\n";

    return 0;

}