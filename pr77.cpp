#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int a[1000];

    std::cout << "Enter array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    bubbleSort(a, n);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    int target;
    std::cout << "Element: ";
    std::cin >> target;

    int index = binarySearch(a, n, target);
    if (index != -1) {
        std::cout << "Find: " << index << std::endl;
    }
    else {
        std::cout << "Not find" << std::endl;
    }
}
