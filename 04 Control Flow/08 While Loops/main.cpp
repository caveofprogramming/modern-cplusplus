#include <iostream>
int main() {
    
    int count = 0;

    while(count < 3) {
        std::cout << "Count is: " << count << std::endl;
        count++;
    }

    std::cout << "Final count: " << count << std::endl;

    return 0;
}
