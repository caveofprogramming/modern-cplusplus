#include <iostream>

/* 
 * char, short, int, long, long long
 * Can all be prefixed with signed or unsigned
 * 
 * Synonyms:
 * short int = short
 * long int = long
 * long long int = long long
 */


int main() {

    std::cout << "char: " << sizeof(char) << std::endl;
    std::cout << "short: " << sizeof(short) << std::endl;
    std::cout << "int: " << sizeof(int) << std::endl;
    std::cout << "long: " << sizeof(long) << std::endl;
    std::cout << "long long: " << sizeof(long long) << std::endl;

    return 0;
}