#include <iostream>
#include <string>


int main() {
    std::string name = "Bob";

    std::cout << "Hello, " << name << "!" << std::endl;

    std::string password;
    std::cout << "Enter your password: ";
    std::cin >> password;

    std::cout << "You entered: " << password << std::endl;

    std::cout << (password == "hello") << std::endl;
    return 0;
}
