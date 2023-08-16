#include <iostream>
#include <cmath>

class Point {
    private: 
        int m_x {};
        int m_y {};

    public: 
        Point(int x = 0, int y = 0): 
            m_x {x}, 
            m_y {y}
        {
        }

        double angle_to(Point& point) {
            int x_diff {point.m_x - m_x};
            int y_diff {point.m_y - m_x};
            double angle {std::atan2(y_diff, x_diff)};
            return angle * 180/M_PI;
        }

        double distance_to(Point& point) {
            // Can access private members across different class instances
            int x_diff {m_x - point.m_x};
            int y_diff {m_y - point.m_y};
            return std::hypot(x_diff, y_diff);
        }

        bool in_proximity_of(Point& point, double radius) {
            return distance_to(point) <= radius;
        }

        // Return const references so values can't be changed
        const int& get_x() { return m_x; };
        const int& get_y() { return m_y; };
};

int main() {
    Point my_point {0, 0};
    Point your_point {3, 3};
    std::cout << my_point.angle_to(your_point) << "\n";
}