#include <iostream>
int main() {
    int values[3] = {1, 2, 3};

    std::cout << values[3] << std::endl; // Undefined behavior, out of bounds access

    values[3] = 100; // Undefined behavior, out of bounds access

    for(int i=0; i < 4; i++) {
        std::cout << "Value at index " << i << ": " << values[i] << std::endl;
    }

    return 0;
}
