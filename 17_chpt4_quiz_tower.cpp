#include <iostream> 

constexpr float gravity {9.8};

double get_tower_height() {
    std::cout << "Enter the height of the tower in metres: "; 
    
    double tower_height{};
    std::cin >> tower_height;

    return tower_height;
}

double calc_ball_height(double initial_height, double seconds) {
    double fall_distance = gravity * (seconds*seconds) / 2;

    if (initial_height - fall_distance < 0)
        return 0;
    else
        return initial_height - fall_distance;
}

int main() {
    const double tower_height{get_tower_height()};

    for (int i = 0; i <= 5; i++) {
        double current_height {calc_ball_height(tower_height, i)};

        std::cout << "At " << i << " seconds, the ball is ";
        
        if (current_height > 0) 
            std::cout << "at height " << current_height << " metres" << "\n";
        else
            std::cout << "on the ground." << "\n";
    }
}