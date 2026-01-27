#include <iostream>
#include <vector>
#include <algorithm>

bool isSorted(const std::vector<int>& arr) {
    for (size_t i = 0; i + 1 < arr.size(); ++i) {
        if (arr[i] > arr[i + 1]) return false;
    }
    return true;
}

int countPassesToSorted(std::vector<int>& arr) {
    int n = arr.size();
    int passes = 0;

    for (int i = 0; i < n - 1; ++i) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        passes++;
        if (isSorted(arr))
            break;
        if (!swapped)
            break;
    }
    return passes;
}

int main() {
    std::vector<int> data = {5, 1, 4, 2, 8};

    int passes = countPassesToSorted(data);

    std::cout << "Min count: " << passes << std::endl;

    return 0;
}
