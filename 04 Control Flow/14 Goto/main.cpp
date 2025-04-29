#include <iostream>
int main() {

    int count = 0;

    start: 
    
    ++count;
    std::cout << "Count is: " << count << std::endl;

    if(count < 3) goto start;

    
    return 0;
}
