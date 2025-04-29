/*
 * Comparison operators
 * == (equal to)
 * != (not equal to)
 * < (less than)
 * > (greater than)
 * <= (less than or equal to)
 * >= (greater than or equal to)
 */

#include <iostream>

int main() {
    int temperature = 18;

    std::cout << (temperature == 18) << std::endl; 
    
    bool is_cold = temperature < 20;
    std::cout << "is_cold: " << is_cold << std::endl;

    // Comparing two floats with == is unreliable! Don't do it.
    double value = 1.23;
    std::cout << "value == 1.23: " << (value == 1.23) << std::endl;
    
    return 0;
}