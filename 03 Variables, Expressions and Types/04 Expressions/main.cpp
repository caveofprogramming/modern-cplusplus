#include <iostream>

/*
 * Arithmetical operators: +, -, *, /, %
 */

int main() {
   double temperature_f = 99.2;

   double temperature_c = (temperature_f - 32) * 5 / 9;

   std::cout 
        << temperature_f 
        << " degrees Fahrenheit is " 
        << temperature_c 
        << " degrees Celsius." 
        << std::endl;
}