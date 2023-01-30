int five() {
    return 5;
}

int main() {
    [[maybe_unused]] int x { five() };      // Will generate an error if unused, unless [[maybe_unused]]
    6 + 9;                                  // Will generate an error where expression result unused
    return 0;
}