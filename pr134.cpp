#include <iostream>

int main() {
    const int size = 10;
    int arr[size];

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Enter number X:\n";
    int x;
    std::cin >> x;

    std::cout << "Sum index X: \n";

    int Index = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x) {
            Index++;
        }
    }

        std::cout << x << " in " << Index << std::endl;

    return 0;
}
