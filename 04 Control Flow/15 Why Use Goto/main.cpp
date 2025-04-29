#include <iostream>
#include <iomanip> 
int main() {

    for(int i=1; i<=10; ++i) {

        for(int j=1; j<=10; ++j) {
            std::cout << std::setw(4) << i*j;

            if(i*j == 54)
                goto end;
        }

        std::cout << std::endl;
    }

    end:
    std::cout << "\nEnd of program" << std::endl;
    return 0;
}
