#include <iostream>
#include "9_chapter_2_quiz_2_io.h"

int main() {
    int x {readNumber()};
    int y {readNumber()};

    writeAnswer(x, y);
    return 0;
}