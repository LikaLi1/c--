#include <iostream>
#include <vector>
#include <algorithm>

void selectionSort(std::vector<int>& arr, int left, int right) {
    for (int i = left; i < right; ++i) {
        int minIdx = i;
        for (int j = i + 1; j <= right; ++j) {
            if (arr[j] < arr[minIdx]) minIdx = j;
        }
        std::swap(arr[i], arr[minIdx]);
    }
}

void insertionSort(std::vector<int>& arr, int left, int right) {
    for (int i = left + 1; i <= right; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= left && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> data = {64, 25, 12, 22, 11, 90, 5, 33, 1, 8};
    int n = data.size();
    int mid = n / 2;

    std::cout << "Original: ";
    for (int x : data) std::cout << x << " ";
    std::cout << std::endl;

    selectionSort(data, 0, mid - 1);
    insertionSort(data, mid, n - 1);

    std::cout << "Sorted:   ";
    for (int x : data) std::cout << x << " ";
    std::cout << std::endl;

    return 0;
}
