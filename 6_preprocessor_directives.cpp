#include <iostream>
#define CONDITION2

int main() {
    int x {19};
    std::cout << x << "\n";


    // Will execution on condition that CONDITION has been #defined
    #ifdef CONDITION
    int y {20};
    std::cout << y << "\n";
    #endif

}