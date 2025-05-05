#include <iostream>

/*
 * Note: structs are a bit topic! We'll talk about them later,
 * and here we'll get started with some simple forms of usage. 
 */
int main() {
    
    struct Point {
        int x;
        int y;
    } p4{70, 80}, p5;

    Point p1;
    p1.x = 10;
    p1.y = 20;

    std::cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << std::endl;

    Point p2 = {30, 40};
    std::cout << "Point p2: (" << p2.x << ", " << p2.y << ")" << std::endl;

    Point p3 {50, 60};
    std::cout << "Point p3: (" << p3.x << ", " << p3.y << ")" << std::endl;

    std::cout << "Point p4: (" << p4.x << ", " << p4.y << ")" << std::endl;
    std::cout << "Point p5: (" << p5.x << ", " << p5.y << ")" << std::endl;
    return 0;
}
