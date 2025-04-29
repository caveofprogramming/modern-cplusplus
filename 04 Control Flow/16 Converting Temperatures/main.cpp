#include <iostream>

/*
 * Write a program that converts a temperature from Celsius to Fahrenheit.
 * The formula for conversion is:
 * Fahrenheit = (Celsius * 9/5) + 32
 */

int main() {
    
    std ::cout << "Enter temperature in Celsius: ";
    double celsius;
    std::cin >> celsius;
    double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
