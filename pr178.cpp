#include <iostream>

int sum(int n)
{
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum(n / 10);
}

int main()
{
    std::cout << "Enter number N: " << std::endl;
    int n;
    std::cin >> n;

    std::cout << "Sum: " << sum(n) << std::endl;

    return 0;
}
