#include <iostream>
#include <variant>

/*
 * Note: may need to configure VS Code to use C++23
 * Open Command Palette (Ctrl+Shift+P).
 * Search for "C/C++: Edit Configurations (JSON)".
 * Modify c_cpp_properties.json:
 * Change the "cppStandard" to "c++23".
 */

int main() {
    std::variant<int, std::string> var;

    var = 123;
    std::cout << "The value is: " << std::get<int>(var) << std::endl;
    std::cout << "Current type index: " << var.index() << std::endl;

    var = "Hello, World!";
    std::cout << "The value is: " << std::get<std::string>(var) << std::endl;
    std::cout << "Current type index: " << var.index() << std::endl;
 
    return 0;
}
