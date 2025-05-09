#include <iostream>

int calculate_sum(int a, int b) {

    int sum = a + b;
    return sum;
}

int main() {
    int result = calculate_sum(5, 7);
    std::cout << "The sum is: " << result << std::endl;
    return 0;
}
