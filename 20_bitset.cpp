#include <iostream>
#include <bitset>

// Sample solution (using test/set)
std::bitset<4> rotl(std::bitset<4> bits) {
    const bool leftbit { bits.test(3) };
    bits <<= 1;
    if (leftbit)
        bits.set(0);
    return bits;
}

// The solution I arrived at (using test/set)
std::bitset<4> rotl2(std::bitset<4> bits) {
    std::bitset<4> out { bits << 1 };
    if (bits.test(3))
        out.set(0);
    return out;
}

// The solution without using test/set methods (I cheated)  
std::bitset<4> rotl3(std::bitset<4> bits) {
    return (bits << 1) | (bits >> 3);
}

int main() {
    std::bitset<4> bits1{ 0b0001 };
    std::cout << rotl(bits1) << "\n";
    std::cout << rotl2(bits1) << "\n";
    std::cout << rotl3(bits1) << "\n";

    std::bitset<4> bits2{ 0b1001 };
    std::cout << rotl(bits2) << "\n";
    std::cout << rotl2(bits2) << "\n";
    std::cout << rotl3(bits2) << "\n";

    return 0;
}