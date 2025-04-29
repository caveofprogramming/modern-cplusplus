#include <iostream>
#include <array>

int main() {
    int values[5] = {1, 2, 3, 4, 5};

    for(int i=0; i < sizeof(values)/sizeof(values[0]); i++) {
        std::cout << "Value at index " << i << ": " << values[i] << std::endl;
    }

    std::cout << std::endl;

    std::array<int, 5> numbers = {1, 2, 3, 4, 5};
    numbers[2] = 100; // This still works
    numbers.at(3) = 150; // Safer way

    for(int i=0; i < numbers.size(); i++) {
        std::cout << "Value at index " << i << ": " << numbers.at(i) << std::endl;
    }

    numbers.at(5) = 200; 

    return 0;
}
