#include <iostream>
int main() {
    
    int count = 0;

    while (true) {
        
        if(count == 3) {
            std::cout << "Breaking out of the loop." << std::endl;
            break;
        }

        std::cout << "Count is: " << count << std::endl;

        count++;
    }

    std::cout << "Loop has ended." << std::endl;

    return 0;
}
