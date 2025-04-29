#include <iostream>
#include <typeinfo>

int main() {
    auto value = 5;
    std::cout << "Value: " << value << std::endl;
    std::cout << typeid(value).name() << std::endl;
    std::cout << sizeof(value) << std::endl;
    
    value = 123;
    std::cout << "Value: " << value << std::endl;

    // The following won't work. "Hello" is a string.
    // value = "Hello";

    // This won't work either.
    // Cannot have two variables with the same name here.
    // auto value = 7;

    return 0;
}