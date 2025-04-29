#include <iostream>

int main() {

    // Boolean conditions
    bool condition1 = 4 < 3;
    bool condition2 = 2 == 4;
    bool condition3 = 1 >= 6;

    // if statements
    if(condition1) {

    }
    else if(condition2) {

    }
    else {

    }

    // while loops and do...while loops
    while(condition1) {

    }

    do {

    } while(condition1);

    while(condition1) {
        if(condition2) {
            break;
        }

        if(condition3) {
            continue;
        }
    }

    // Switch statements
    int value = 5;
    switch (value) {
        case 1: 
            std::cout << "Case 1" << std::endl;
            break;
        case 2:
            std::cout << "Case 2" << std::endl;
            break;
        default:
            std::cout << "Default case" << std::endl;
    }

    // Goto
    goto label;
    label: int i = 0;

    // Also exception handling (but we'll cover this later)
    try {
        throw 5;
    } catch (int e) {
        
    }

    // Return statements
    return 0;
}