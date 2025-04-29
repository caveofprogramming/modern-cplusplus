#include <iostream>
int main() {
    int value1 = 5;
    int value2 = 3;
    int total = ++value1 + value2;

    std::cout << "total: " << total << std::endl; 
    std::cout << "value1: " << value1 << std::endl;

    std::cout << std::endl;

    value1 = 5;
    value2 = 3;
    total = value1++ + value2;
    std::cout << "total: " << total << std::endl; 
    std::cout << "value1: " << value1 << std::endl;


    return 0;
}
