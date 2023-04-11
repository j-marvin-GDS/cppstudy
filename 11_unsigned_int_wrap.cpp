#include <iostream>

int main() {
    unsigned short x {2};
    // std::cout << "Initial (unsigned short): " << sizeof(x) << " bytes\n";
    
    x = x - 4;
    // std::cout << "Updated (" << x << "): " << sizeof(x) << " bytes\n";

    std::cout << x;

    return 0;
}