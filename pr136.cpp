#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Max: \n";

    int max = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
        std::cout << max << std::endl;

    return 0;
}
