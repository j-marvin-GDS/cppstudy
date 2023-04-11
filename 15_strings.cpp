#include <iostream>
#include <string>

void show_input_number() {
    // Using the std::string type from <string>
    std::string number_prompt {"Enter a number: "};
    std::string output_prefix {"The number you entered was: "};

    std::cout << number_prompt; 

    int16_t input {};
    std::cin >> input;

    std::cout << output_prefix << input << "\n";
}

void show_input_string() {
    std::string string_prompt {"Enter a string: "};
    std::string output_prefix {"The string you entered was: "};

    std::cout << string_prompt;

    std::string input {};
    std::getline(std::cin >> std::ws, input);

    // length method returns size_t; static cast is required
    int input_length {static_cast<int>(input.length())};

    // ssize (string) returns an unsigned int (no cast required) - CPP20 only!
    // size seems to do the same?
    input_length = std::size(input);

    std::cout << output_prefix << input; 

    std::cout << " (which is of " << input_length << " length)\n";


}

int main() {
    show_input_number();
    show_input_string();
    return 0;
}