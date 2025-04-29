#include <iostream>
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    for(int value: numbers) {
        std::cout << value << " ";
    }

    std::cout << std::endl;

    std::array<int, 5> values = {1, 2, 3, 4, 5};

    for(int value: values) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
    return 0;
}
