#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90, 5, 8, 3 };
    int n = arr.size();
    int mid = n / 2;

    for (int i = 0; i < mid - 1; ++i) {
        for (int j = 0; j < mid - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = mid; i < n - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        std::swap(arr[min_idx], arr[i]);
    }

    for (int x : arr) std::cout << x << " ";
    return 0;
}
