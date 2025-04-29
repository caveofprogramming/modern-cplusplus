#include <iostream>
int main() {
     // Explicit conversion; prevents warnings.
     float f_value = 65.5f;
     int i_value = static_cast<int>(f_value);
 
     std::cout << "i_value: " << i_value << std::endl;

     // Old c-style explicit conversion
    i_value = (int)f_value;

    char c_value = static_cast<char>(i_value);
    std::cout << "c_value: " << c_value << std::endl;

    return 0;
}
