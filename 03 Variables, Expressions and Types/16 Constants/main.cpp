#include <iostream>
int main() {
    const int COUNT = 10 * 5 / 20;

    constexpr int VALUE = 10 * 5 / 20;

    #define NUMBER 10 * 5 / 20

    std::cout << "COUNT: " << COUNT << std::endl;
    std::cout << "VALUE: " << VALUE << std::endl;
    std::cout << "NUMBER: " << NUMBER << std::endl;
    return 0;
}
