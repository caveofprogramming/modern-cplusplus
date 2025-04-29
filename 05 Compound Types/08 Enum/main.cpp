#include <iostream>
int main() {
    enum Color { RED, GREEN, BLUE };

    Color color = RED;

    switch (color) {
        case RED:
            std::cout << "Color is Red" << std::endl;
            break;
        case GREEN:
            std::cout << "Color is Green" << std::endl;
            break;
        case BLUE:
            std::cout << "Color is Blue" << std::endl;
            break;
        default:
            std::cout << "Unknown Color" << std::endl;
    }

    return 0;
}
