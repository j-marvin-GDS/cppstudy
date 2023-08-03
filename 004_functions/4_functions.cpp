#include <iostream>

int add(int x, int y);      // Forward declaration for function; "prototype"

int main() {
    int x {5};
    int y {6};

    std::cout << x << " + " << y << " = " << add(x, y) << "\n";
    return 1;
}

int add(int x, int y) {     // Definition for earlier "prototype"
    return x + y;
}