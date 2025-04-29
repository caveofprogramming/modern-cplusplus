#include <iostream>
int main() {
    
    std::cout << "Enter a, b or something else: ";
    char c;
    std::cin >> c;

    switch (c)
    {
    case 'a':   
        std::cout << "You entered 'a'" << std::endl;      
        break;

    case 'b':
        std::cout << "You entered 'b'" << std::endl;      
        break; 
    
    default:
        std::cout << "You entered something other than 'a' or 'b'" << std::endl;
        break;
    }
    return 0;
}
