#include <iostream>
#include <cmath>


template <typename T>
T distance(T x1, T y1, T x2, T y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    
    double x1, y1, x2, y2;


    std::cout << "Enter the coordinates of point 1 (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Enter the coordinates of point 2 (x2 y2): ";
    std::cin >> x2 >> y2;

 
    std::cout << "Distance between point 1 and point 2: " << distance(x1, y1, x2, y2) << std::endl;

    return 0;
}