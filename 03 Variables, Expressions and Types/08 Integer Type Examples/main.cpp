#include <iostream>

int main() {
    // 8 bits, min: -2^7=-128, max: 2^7-1=127 
    char c = 65;
    std::cout << "c: " << c << std::endl;

    char letter = 'A';
    std::cout << "letter: " << letter << std::endl;

    // 32 bits, min: -2^31=-2147483648, max: 2^31-1=2147483647
    int i = 123456789;
    std::cout << "i: " << i << std::endl;

    // 64 bits
    long li = 1234567890L;
    std::cout << "li: " << li << std::endl;

    long long lli = 1234567890123456789LL;
    std::cout << "lli: " << lli << std::endl;
    return 0;
}