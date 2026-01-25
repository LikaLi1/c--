#include <iostream>

int main() {
    const int size = 10;
    int arr[size];
    int sum = 0;

    std::cout << "Enter array:\n";
    for (int i = 0; i < size; i++) 
    {
        std::cin >> arr[i];
    }

    std::cout << "Sum\n";
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    std::cout << sum << std::endl;

    return 0;
}
