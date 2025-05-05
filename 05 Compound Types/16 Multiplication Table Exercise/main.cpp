/*
 * Write a program that asks the user to enter a number from 1 to 20, then displays the
 * multiplication table for that number. The multiplication table should be displayed in a
 * grid format, with each cell containing the product of the row and column numbers.
 * 
 * Include as much error-checking as possible. Output appropriate messages if the user enters
 * invalid input.
 * 
 * Example output:
 * 
 *      Multiplication Table for 12:
 *      1   2   3   4   5   6   7   8   9  10  11  12
 *      2   4   6   8  10  12  14  16  18  20  22  24
 *      3   6   9  12  15  18  21  24  27  30  33  36
 *      4   8  12  16  20  24  28  32  36  40  44  48
 *      5  10  15  20  25  30  35  40  45  50  55  60
 *      6  12  18  24  30  36  42  48  54  60  66  72
 *      7  14  21  28  35  42  49  56  63  70  77  84
 *      8  16  24  32  40  48  56  64  72  80  88  96
 *      9  18  27  36  45  54  63  72  81  90  99 108
 *      10  20  30  40  50  60  70  80  90 100 110 120
 *      11  22  33  44  55  66  77  88  99 110 121 132
 *      12  24  36  48  60  72  84  96 108 120 132 144
 */

#include <iostream>
#include <iomanip> // for std::setw
int main() {
    std::cout << "Enter a number from 1 to 20: ";

    int number;
    std::cin >> number;

    if(std::cin.fail()) {
        std::cout << "Invalid input. Please enter a valid number." << std::endl;
        return 1;
    }

    if (number < 1 || number > 20) {
        std::cout << "Invalid input. Please enter a number between 1 and 20." << std::endl;
        return 1;
    }

    std::cout << "Multiplication Table for " << number << ":" << std::endl;
    
    for(int y = 1; y <= number; ++y) {
        for(int x = 1; x <= number; ++x) {
            std::cout << std::setw(4) << y * x;
        }
        std::cout << std::endl;
    }
    return 0;
}
