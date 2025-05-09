#include <iostream>

double calculate_area(double length, double width);

int main() {
    double result = calculate_area(5.0, 3.0);
    std::cout << "The area is: " << result << std::endl;
    return 0;
}

double calculate_area(double length, double width) {
    return length * width; 
}