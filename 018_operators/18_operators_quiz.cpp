#include <iostream>

bool is_even(int value) {
    return value % 2 == 0;
}

int main() {
    std::cout << "Please enter a number: ";
    int user_input{};
    std::cin >> user_input;

    bool input_is_even{is_even(user_input)};
    std::cout << user_input << " is even: " << std::boolalpha << input_is_even;
    return 0;
}

