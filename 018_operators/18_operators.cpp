#include <iostream>
#include <string>

bool is_even(int input) {
    return input % 2 == 0;
}

int main() {
    const int neg_number{-5};
    const int unary_plus_neg_number{+neg_number};
    const int unary_minus_neg_number{-neg_number};

    std::cout << "Initial number: " << neg_number << "\n";
    std::cout << "Unary plus number: " << unary_plus_neg_number << "\n";
    std::cout << "Unary minus number: " << unary_minus_neg_number << "\n";

    int comma_input_left{5};
    int comma_input_right{10};

    /* Evaluate left of comma; evauluate and return right of comma.
    Should show 11 */ 
    std::cout << "Comma operation: " << (--comma_input_left, ++comma_input_right) << "\n";

    // should print 4
    std::cout << "Comma input left post-operation: " << comma_input_left << "\n";

    // should print 11
    std::cout << "Comma input right post-operation: " << comma_input_right << "\n";

    // conditional operation: cond_expr ? expr_if_true : expr_if_false
    const int my_input_val{15};
    const std::string is_even_output{(is_even(my_input_val) ? "It's even!" : "It's odd!")};

    std::cout   << "I've had a look at the input val (" 
                << my_input_val 
                << "), and I can tell you - " 
                << is_even_output << "\n";
                
    return 0;
}