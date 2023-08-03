#include "21_namespaces_def.h"
#include <string_view>

int main() {
    std::string_view user_name {my_def::get_user_input()};
    my_def::show_user_input(user_name);
    return 0;
}



