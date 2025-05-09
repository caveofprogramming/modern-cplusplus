#include <iostream>
#include <string>

void print_info(std::string name, int age, char grade) {
    std::cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << std::endl;
}

int main() {
    print_info("Bob", 20, 'A');
    return 0;
}
