#include <iostream>
int main() {
    unsigned short values[5] = {0};

    for(int i=0; i < sizeof(values)/sizeof(values[0]); i++) {
        std::cout << "value at " << i << ": " << values[i] << std::endl;
    }

    return 0;
}
