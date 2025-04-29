#include <iostream>
int main() {
    int value = 3;

    std::cout << "Initial value: " << value << std::endl;

    value++;

    std::cout << "Value after postfix increment: " << value << std::endl;
    
    ++value;

    std::cout << "Value after prefix increment: " << value << std::endl;

    value--;
    std::cout << "Value after postfix decrement: " << value << std::endl;

    --value;
    std::cout << "Value after prefix decrement: " << value << std::endl;

    std::cout << std::endl;

    
    return 0;
}
