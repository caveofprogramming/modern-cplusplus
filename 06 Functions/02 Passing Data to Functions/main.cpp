#include <iostream>

void print_value(int value) {
    std::cout << "Value is: " << value << std::endl;
}

int main() {
    print_value(7);

    int number = 10;
    
    print_value(number);

    return 0;
}
