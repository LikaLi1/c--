#include <iostream>
#include <iostream>
#include <vector>

int bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    int swapsCount = 0;
    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapsCount++;
                swapped = true;
            }
        }
        if (!swapped) break;
    }
    return swapsCount;
}

int selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    int swapsCount = 0;
    for (int i = 0; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
            swapsCount++;
        }
    }
    return swapsCount;
}

int main() {
    std::vector<int> data = { 5, 3, 8, 4, 2, 7, 1, 6 };

    std::vector<int> dataForBubble = data;
    std::vector<int> dataForSelection = data;

    int bubbleSwaps = bubbleSort(dataForBubble);
    int selectionSwaps = selectionSort(dataForSelection);

    std::cout << "Bubble swaps: " << bubbleSwaps << "\n";
    std::cout << "Selection swaps: " << selectionSwaps << "\n";

    return 0;
}
