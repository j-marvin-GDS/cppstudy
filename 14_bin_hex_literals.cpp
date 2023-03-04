#include <iostream>
#include <bitset>

int main() {
    // May be used later to set bitset size
    constexpr int grid_width {64};

    // 254 in Hex
    constexpr int x {0xFE};

    // 254 in Binary
    constexpr int y {0b11111110};

    // 254 in Decimal
    constexpr int z {254};

    // A bitset of size GRID_WIDTH to represent 254
    constexpr std::bitset<grid_width> bin {0b11111110};

    std::cout << x << " " << y << " " << z << " " << bin << "\n";

    return 0;
}