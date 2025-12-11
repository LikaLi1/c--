#include <iostream>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };

    printArray(arr, size);

    return 0;
}
