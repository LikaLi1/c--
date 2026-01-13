#include <iostream>
using namespace std;

int main() {
    cout << "Enter array size: ";
    int n;
    cin >> n;

    int* arr1 = new int[n];
    int* arr2 = new int[n];
    int* arr3 = new int[n];

    std::cout << "1:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }

    std::cout << "2:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr2[i];
    }

    for (int i = 0; i < n; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    std::cout << "3:\n";
    for (int i = 0; i < n; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
