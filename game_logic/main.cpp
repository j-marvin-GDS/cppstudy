#include <iostream>
#include <bitset>
#include <cmath>
#include <vector>
#include <algorithm>

constexpr double g_grid_width {4096};
constexpr double g_sm_reduced_by {4};
constexpr double g_sm_length {g_grid_width / g_sm_reduced_by};
constexpr float g_sm_radius {3.5};

class Point {
    public:

        double x;
        double y;

        double distance_to(double rem_x, double rem_y) {
            double x_dist {x - rem_x};
            double y_dist {y - rem_y};
            return std::sqrt(x_dist*x_dist + y_dist*y_dist);
        }

        double distance_to(Point& rem_point) {
            double x_dist {x - rem_point.x};
            double y_dist {y - rem_point.y};
            return std::sqrt(x_dist*x_dist + y_dist*y_dist);
        }

        double bitmap_index() {
            double inverse_x {(g_grid_width - x) -1};
            double inverse_y {(g_grid_width - y) -1};
            
            double bitmap_x;
            bitmap_x = std::floor(inverse_x / g_sm_reduced_by);
            
            double bitmap_y; 
            bitmap_y = std::floor(inverse_y / g_sm_reduced_by);

            double bitmap_index {(g_sm_length * bitmap_y) + bitmap_x};
            return bitmap_index;
        }

        std::vector<Point> points_in_rad() {
            double left {std::max(std::floor(x - g_sm_radius), 0.0)};
            double right {std::min(std::ceil(x + g_sm_radius), g_grid_width)};
            double top {std::min(std::ceil(y + g_sm_radius), g_grid_width)};
            double bottom {std::max(std::floor(y - g_sm_radius), 0.0)};

            std::vector<Point> points_in_rad {};

            for (double col = left; col <= right; col++) {
                for (double row = bottom; row <= top; row++) {
                    if (distance_to(col, row) <= g_sm_radius) {
                        Point my_point {col, row};
                        points_in_rad.push_back(my_point);
                    }
                }
            }

            return points_in_rad;
        }

        

};

void print_pir(std::vector<Point>& points) {
    for (uint16_t i=0; i<=points.size(); i++) {
        std::cout << points[i].x << " " << points[i].y << "\n";
    }
}

int main() {
    std::bitset<128*128> search_map {0};
    std::cout << search_map.to_ulong() << "\n";
    return 0;
}


