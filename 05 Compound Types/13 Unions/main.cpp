#include <iostream>
#include <cstdint>

int main() {
    
    union Id {
        int32_t left;
        int32_t right;
    } d{0};

    d.left = 123;

    std::cout << "d.left: " << d.left << std::endl;
    std::cout << "d.right: " << d.right << std::endl;

    return 0;
}
