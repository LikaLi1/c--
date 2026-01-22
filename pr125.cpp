#include <iostream>

int main() {
    std::cout << "Enter number: ";
    int A;
    std::cin >> A;

    std::cout << "Enter number: ";
    int B;
    std::cin >> B;

    int a = A;
    int b = B;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int g = a;

    for (int i = 1; i <= g; ++i) {
        if (g % i == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}
