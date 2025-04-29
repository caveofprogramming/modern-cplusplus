#include <iostream>
#include <iomanip>

int main() {
    // without std::fixed, setprecision sets number
    // of significant digits, not digits after decimal point.
    std::cout << std::fixed << std::setprecision(20);

    float value1 = 0.12345678901234567890f;
    std::cout << value1 << std::endl;
    std::cout << "Float size: " << sizeof(float) << std::endl;
    
    double value2 = 0.12345678901234567890;
    std::cout << value2 << std::endl;
    std::cout << "Double size: " << sizeof(double) << std::endl;

    long double value3 = 0.12345678901234567890L;
    std::cout << value3 << std::endl;
    std::cout << "Long double size: " << sizeof(long double) << std::endl;
    
    return 0;
}