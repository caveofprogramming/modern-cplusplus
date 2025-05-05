#include <iostream>
#include <cstdint>
int main() {
    
    #pragma pack(push, 1)

    struct Data {
        int8_t c;
        int32_t i;
    } d1;

    #pragma pack(pop)

    std::cout << "Size of struct Data: " << sizeof(Data) << " bytes" << std::endl; 
    std::cout << "Size of struct Data: " << sizeof(d1) << " bytes" << std::endl;

    return 0;
}
