#include <iostream>

void swapNumbers(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before: x = " << x << ", y = " << y << std::endl;
    swapNumbers(x, y);
    std::cout << "After: x = " << x << ", y = " << y << std::endl;
    return 0;
}
