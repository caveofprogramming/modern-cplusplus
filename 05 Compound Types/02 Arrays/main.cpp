#include <iostream>
int main() {
    
    int values[5] = {1, 2, 3, 4, 5};

    values[3] = 100;

    for(int i=0; i < 5; i++) {
        std::cout << "Value at index " << i << ": " << values[i] << std::endl;
    }

    long values_size = sizeof(values);
    std::cout << "Size of values array: " << values_size << std::endl;

    long number_elements = sizeof(values) / sizeof(values[0]);
    std::cout << "Number of elements in values array: " << number_elements << std::endl;


    return 0;
}
