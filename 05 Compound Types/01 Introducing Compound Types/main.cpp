#include <iostream>
#include <cstdint>
int main() {
    
    // Primitive arrays
    int values[] = {1, 2, 3, 4, 5};

    // STL arrays
    std::array<int, 5> arr = {1, 2, 3, 4, 5};
    
    // structs
    struct Point {
        int x;
        int y;
    };

    // enums
    enum Color {
        RED,
        GREEN,
        BLUE
    };

    // unions
    union main
    {
        int32_t value;
        int8_t bytes[4];
    };
    
    return 0;
}
