#include <iostream>

int main() {
    // Widening conversion
    int i_value = 42;
    double d_value = i_value;
    std::cout << "d_value: " << d_value << std::endl;

    // Narrowing conversion
    // This may cause a warning or error in some compilers
    float f_value = 3.14f;
    int i_value = f_value;
    std::cout << "i_value: " << i_value << std::endl;

    // Widening conversion
    char c_value = 12;
    i_value = c_value;
    std::cout << "i_value: " << i_value << std::endl;

    // Narrowing conversion
    // This may cause a warning or error in some compilers
    i_value = 123;
    c_value = i_value; 
    std::cout << "c_value: " << c_value << std::endl;


    return 0;
}
