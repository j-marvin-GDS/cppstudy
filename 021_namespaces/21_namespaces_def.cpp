#include "21_namespaces_def.h"
#include <iostream>
#include <string>
#include <string_view>

namespace my_def {

    std::string get_user_input() {
        std::cout << "Please enter your name: ";

        std::string user_name{};
        std::cin >> user_name;

        return user_name;
    }

    void show_user_input(std::string_view input) {
        std::cout << "Thanks, " << input << "!";
    }
    
}