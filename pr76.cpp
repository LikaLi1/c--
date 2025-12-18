#include <iostream>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int a[1000];

    std::cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int target;
    std::cout << "Enter elemnt find: ";
    std::cin >> target;

    int index = linearSearch(a, n, target);
    if (index != -1) {
        std::cout << "Find: " << index << std::endl;
    }
    else {
        std::cout << "Not find" << std::endl;
    }

    return 0;
}
