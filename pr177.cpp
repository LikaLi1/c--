#include <iostream>

void parity(int n)
{
    if (n == 0) {
        return;
    }
  
    parity(n - 1);
    if (n % 2 == 0) {
        std::cout << n << " ";
    }
}

int main()
{
    std::cout << "Enter number N: " << std::endl;
    int n;
    std::cin >> n;

    std::cout << "Even numbers: " << std::endl;
    parity(n);
    std::cout << std::endl;

    return 0;
}
