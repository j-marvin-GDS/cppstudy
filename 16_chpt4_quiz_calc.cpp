#include <iostream>

double get_number() {
    std::cout << "Please enter a number: ";
    double input {};
    std::cin >> input;
    return input;
}

char get_symbol() {
    std::cout << "Please enter an operator: ";
    char input {};
    std::cin >> input;
    return input;
}

void print_result(double left, char op, double right) {
    if (op == '+') 
        std::cout << left << op << right << '=' << left+right << "\n";
    else if (op == '-')
        std::cout << left << op << right << '=' << left-right << "\n";
    else if (op == '*')
        std::cout << left << op << right << '=' << left*right << "\n";
    else if (op == '/')
        std::cout << left << op << right << '=' << left/right << "\n";
}

int main() {
    double left { get_number() };
    int op { get_symbol() }; 
    double right { get_number() };
    print_result(left, op, right);
}