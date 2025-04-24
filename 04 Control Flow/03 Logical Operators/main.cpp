/*
 * &&, ||, !
 */

#include <iostream>

int main() {

    bool is_raining = true;
    bool is_cold = false;

    std::cout << (is_raining && is_cold) << std::endl;
    std::cout << (is_raining || is_cold) << std::endl;
    std::cout << !is_raining << std::endl;
   
    return 0;
}