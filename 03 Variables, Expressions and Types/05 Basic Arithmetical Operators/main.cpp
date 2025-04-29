/*
 * +, -, *, /, %
 */

#include <iostream>

int main() {
    int a = 4 + 6;

    double b = 45.0/a;

    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;

    double c = 6/2;
    std::cout << "c: " << c << std::endl;   
    
    std::cout << 12 % 5 << std::endl;

    return 0;
}