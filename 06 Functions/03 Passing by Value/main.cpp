#include <iostream>

void change_value(int value) {
    std::cout << "2. value in function: " << value << std::endl;
    value = 20;
    std::cout << "3. value in function: " << value << std::endl;
}


int main() {
    int value = 10;
    std::cout << "1. value before function: " << value << std::endl;
    change_value(value);
    std::cout << "4. value after function: " << value << std::endl;
    return 0;
}
