# include <iostream>

int main() {
    int a; // no initialiser - "default initialisation"
    int b = 5; // initialiser after equals sign - "copy initialisation"
    int c( 6 ); // initialiser in parenthesis - "direct initialisation" - spaces for readability
    int d{7}; // initialiser in braces - "brace", "uniform" or "list" initialisation

    // Three forms of brace initialisation: 
    int width {5}; // "direct" brace initialisation (preferred)
    int height = {6}; // "copy" brace initialisation 
    int depth {}; // value initialisation

    // "Narrowing conversions" are no allowed using brace initialisation

    // "Copy" initialisation allows int declarations with franctional values
    // The below statement would be accepted with a warning; truncate fractional part
    int x = 4.5; 

    // "Direct" initialisation is the same; will truncate fractional part
    int y (6.3); 

    // Should generate a compiler error
    // int z{4.5}; 

    // Value initialisation
    int occurrences {}; // Should default to 0
    std::cout << occurrences << std::endl;

    // Default initialisation
    int opportunities;
    std::cout << "Input value: ";
    std::cin >> opportunities;
    std::cout << "Value: " << opportunities << "\n";

    // Some compilers may generate an error when a variable is initialised 
    // but not used; [[maybe_unsed]] can be used to suppress those errors
    [[maybe_unused]] int xyz{5};

    int zxy;
    std::cout << "The value of zxy: " << zxy;

}