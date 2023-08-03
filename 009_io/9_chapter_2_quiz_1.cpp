#include <iostream>

int readNumber() {
    std::cout << "Provide your number: ";

    int number {};
    std::cin >> number; 

    return number;
}

void writeAnswer(int x, int y) {
    std::cout << x << " + " << y << " = " << x + y << "\n";
}

int main() {
    int x {readNumber()};
    int y {readNumber()};

    writeAnswer(x, y);
    return 0;
}