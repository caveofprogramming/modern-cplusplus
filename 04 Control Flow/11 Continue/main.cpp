#include <iostream>
int main() {
    
    int count = 0;

    while (count++ < 5) {
        
        if(count == 3) {
            std::cout << "Skipping count 3" << std::endl;
            count++;
            continue;
        }
        
        std::cout << "Count is: " << count << std::endl;
    }

    return 0;
}
