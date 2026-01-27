#include <iostream>
#include <vector>

bool isSorted(const std::vector<int>& arr) {
    if (arr.size() <= 1) return true;

    for (size_t i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> sorted = {1, 2, 5, 8, 10};
    std::vector<int> unsorted = {1, 5, 2, 8, 10};

    std::cout << (isSorted(sorted) ? "Sorted" : "Unsorted") << std::endl;
    std::cout << (isSorted(unsorted) ? "Sorted" : "Unsorted") << std::endl;

    return 0;
}
