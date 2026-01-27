#include <iostream>
#include <vector>

void printArray(const std::vector<int>& arr) {
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void bubbleSortWithSteps(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
        std::cout << "После шага " << i + 1 << ": ";
        printArray(arr);
    }
}

int main() {
    std::vector<int> data = {5, 1, 4, 2, 8};
    std::cout << "Arr: ";
    printArray(data);
    bubbleSortWithSteps(data);
    return 0;
}
