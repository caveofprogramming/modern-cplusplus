#include <iostream>

int main() {

    std::cout << "Enter the distance in km: ";
    int distance;
    std::cin >> distance;

    if(distance < 5) {
        std::cout << "Take the bicycle" << std::endl;
    } 

    std::cout << "Finished." << std::endl;
    
    return 0;
}