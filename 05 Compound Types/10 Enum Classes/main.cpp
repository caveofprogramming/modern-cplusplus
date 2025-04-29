#include <iostream>
int main() {
    enum class Color 
    {
        Red,
        Green,
        Blue,
    };

    Color color = Color::Red;

    std::cout << "Color: " << static_cast<int>(color) << std::endl;
    std::cout << "color == Color::Red: " << (color == Color::Red) << std::endl;

    return 0;
}
