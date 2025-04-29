#include <iostream>
int main() {
    
    int count = 0;

    do {
        std::cout << "1st loop count is: " << count << std::endl;
        count++;
    } while (count < 3);

    do {
        std::cout << "2nd loop count is: " << count << std::endl;
        count++;
    } while(count < 3);

    return 0;
}
