#include "22_encapsulated_global_alt.h"

constexpr float some_float {16.9};

float get_some_float() {
    return some_float;
}