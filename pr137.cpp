#include <iostream>
#include <vector>
#include <algorithm>

void Sort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> data = { 1, 2, 5, 4, 3, 6, 8, 7 };
    Sort(data);
    for (int x : data) std::cout << x << " ";
    return 0;
}
