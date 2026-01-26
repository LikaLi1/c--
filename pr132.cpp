#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int size = 10;
    int ans[10];
    int n = 0;
    int arr[size];
    int sum = 0;

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter number X:\n";
    int x;
    std::cin >> x;

    std::cout << "X: \n";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x) {
            ans[n++] = i;
        }
    }

    if (n != 0) 
    {
        for (int i = 0; i < n; i++) 
        {
            std::cout << x << " in " << ans[i] << std::endl;
        }
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    std::cout << sum << std::endl;

    return 0;
}
