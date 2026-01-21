#include <iostream>
#include <cmath>

int main() {
    std::cout << "Enter x: ";
    int x;
    std::cin >> x;

    std::cout << "Enter y: ";
    int y;
    std::cin >> y;

    int result = pow(x, y);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
