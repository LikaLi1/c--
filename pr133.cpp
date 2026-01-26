#include <iostream>
#include <cstdlib>
#include <ctime>

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

    std::cout << "X: \n";

    int FirstI = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x) {
            FirstI = i;
            break;
        }
    }

    if (FirstI != 0)
    {
        std::cout << x << " in " << FirstI << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    return 0;
}
