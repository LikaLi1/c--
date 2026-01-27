#include <iostream>
#include <vector>

bool cmp(int a, int b) {
    return a > b;
}

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && cmp(arr[j], key)) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr = {5, 3, 8, 4, 2, 7, 1, 6};
    
    insertionSort(arr);
    
    std::cout << "Sort arr: ";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
