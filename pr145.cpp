#include <iostream>
#include <vector>
#include <algorithm>
#include <chrono>
#include <random> 

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        if (min_idx != i)
            std::swap(arr[i], arr[min_idx]);
    }
}

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

template<typename Func>
double measureTime(Func sortFunc, std::vector<int> arr) {
    auto start = std::chrono::high_resolution_clock::now();
    sortFunc(arr);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> diff = end - start;
    return diff.count();
}

int main() {
    const int size = 1000;

    std::vector<int> baseArray(size);
    std::mt19937 gen(42);
    std::uniform_int_distribution<> dis(0, 10000);
    for (int& num : baseArray) {
        num = dis(gen);
    }

    std::vector<int> arrBubble = baseArray;
    std::vector<int> arrSelection = baseArray;
    std::vector<int> arrInsertion = baseArray;

    double timeBubble = measureTime(bubbleSort, arrBubble);
    double timeSelection = measureTime(selectionSort, arrSelection);
    double timeInsertion = measureTime(insertionSort, arrInsertion);

    std::cout << "Bubble time: " << timeBubble << " ms";
    std::cout << "Time sort: " << timeSelection << " ms";
    std::cout << "Sort: " << timeInsertion << " ms";

    return 0;
}
