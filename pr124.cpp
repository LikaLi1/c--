#include <iostream>

int main() {
    std::cout << "Enter number: ";
    int A;
    std::cin >> A;

    int limit = A < 0 ? -A : A;

    std::cout << "Del: " << A << ":\n";

    for (int i = 1; i <= limit; ++i) {
        if (A % i == 0) {
            std::cout << i << " ";
        }
    }

    for (int i = -limit; i <= -1; ++i) {
        if (A % i == 0) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
