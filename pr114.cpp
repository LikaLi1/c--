#include <iostream>

int main() {
    std::cout << "Enter a: ";
    int a;
    std::cin >> a;

    int sum = 0;
    for (int i = a; i <= 500; ++i) {
        sum += i;
    }

    std::cout << "Sum " << a << " and 500 = " << sum << std::endl;

    return 0;
}
