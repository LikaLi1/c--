#include <iostream>

int countNegative(int arr[], int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            ++count;
        }
    }
    return count;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, -3, 4, -5 };

    int negativeCount = countNegative(arr, size);
    std::cout << "Count negative: " << negativeCount << std::endl;
    printArray(arr, size);

    return 0;
}
