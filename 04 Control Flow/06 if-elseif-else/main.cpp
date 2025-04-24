#include <iostream>

int main() {

    std::cout << "Enter the distance in km: ";
    int distance;
    std::cin >> distance;

    
    if(distance < 2) {
        std::cout << "Walk" << std::endl;
    } 
    else if(distance < 5) {
        std::cout << "Take the bicycle" << std::endl;
    }
    else {
        std::cout << "Take the car" << std::endl;
    }

    std::cout << "Finished." << std::endl;
    
    return 0;
}