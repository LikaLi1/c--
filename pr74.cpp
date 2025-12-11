#include <iostream>

int sum(int a, int b);

int main() {
    int result = sum(3, 5);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}

int sum(int a, int b) {
    return a + b;
}
