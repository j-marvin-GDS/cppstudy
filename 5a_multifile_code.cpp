#include <iostream>

int add(int x, int y);

int main() {

    int x {11};
    int y {13};

    std::cout << x << " + " << y << " = " << add(x, y) << "\n";

    for (int z = 0; z <= y; z++) {
        std::cout << z << "\n";
    }

    return 0; 
}