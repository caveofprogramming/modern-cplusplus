/*
 * Write a program that asks the user for a password.
 * If the password is correct, print "Welcome!" and exit the program.
 * If the password is incorrect, print "Incorrect. Try again."
 * Check the password again.
 * 
 * If the user enters the wrong password three times, print
 * "Access denied." and exit the program.
 * 
 * (The correct password can just be "hello".)
 */

#include <iostream>
int main() {
    
    for(int i=0; i<3; i++) {
        std::string password;
        std::cout << "Enter your password: ";
        std::cin >> password;

        if(password == "hello") {
            std::cout << "Welcome!" << std::endl;
            return 0;
        } else {
            std::cout << "Incorrect. Try again." << std::endl;
        }
    }

    std::cout << "Access denied." << std::endl;
    return 0;
}
