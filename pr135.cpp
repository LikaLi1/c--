#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Min: \n";

    int min = arr[0];
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
        std::cout << min << std::endl;

    return 0;
}
