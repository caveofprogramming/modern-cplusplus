#include <iostream>

/*
 * += (Addition and Assignment)
 * -= (Subtraction and Assignment)
 * *= (Multiplication and Assignment)
 * /= (Division and Assignment)
 * %= (Modulo and Assignment)
*/

int main() {
    int value = 0;

    value += 5;
    std::cout << "value: " << value << std::endl;
    
    int another_value = 18;
    another_value %= value;
    std::cout << "another value: " << another_value << std::endl;



}