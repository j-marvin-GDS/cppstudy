#include <iostream>
#include "9_chapter_2_quiz_2_io.h"

int readNumber() {
    std::cout << "Provide your number: ";

    int number {};
    std::cin >> number; 

    return number;
}

void writeAnswer(int x, int y) {
    std::cout << x << " + " << y << " = " << x + y << "\n";
}