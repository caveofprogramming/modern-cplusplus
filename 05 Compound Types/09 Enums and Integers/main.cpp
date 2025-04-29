#include <iostream>
int main() {

    enum Days 
    { 
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY=10, 
        FRIDAY=20, 
        SATURDAY, 
        SUNDAY
    };

    Days day = MONDAY;
    

    std::cout << "Days: " << day << std::endl;
    std::cout << "MONDAY == 1: " << (TUESDAY == 1) << std::endl;

    Days days[7] = { 
        MONDAY, 
        TUESDAY, 
        WEDNESDAY, 
        THURSDAY, 
        FRIDAY, 
        SATURDAY, 
        SUNDAY
    };

    for(int i = 0; i < 7; i++) {
        std::cout << "Day " << i << ": " << days[i] << std::endl;
    }

    return 0;
}
