#include <iostream>
#include <cstdint>

int main() {
    
    union Data {
        int32_t i;
        char c[4];
    } d;

    d.i = 0x12345678;

    std::cout << "d.i (decimal): " << d.i << std::endl;
    std::cout << "d.i (hexadecimal): " << std::hex << d.i << std::endl;

    for(int i=0; i < 4; ++i) {
        std::cout << std::hex << static_cast<int>(d.c[i]) << " ";
    }

    std::cout << std::endl;

    return 0;
}
