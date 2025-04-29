#include <iostream>

int main() {

    int value1 = 10;
    std::cout << value1 << std::endl;
    
    // Cannot have two variables with the same name in the 
    // same scope.
    // int value1;
    
    {
        // This is fine. This variable shadows the variable of
        // the same name at in the enclosing scope.
        int value1 = 20;
        std::cout << value1 << std::endl;
    }
    
    {
        int value2 = 30;
    }
    
    // Doesn't work. value2 is out of scope.
    //std::cout << value2 << std::endl;

    return 0;
}