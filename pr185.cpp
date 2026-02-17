#include <iostream>
using namespace std;


auto maxIndex(int arr[], int size) -> int {
    if (size <= 0) return -1;

    int maxIdx = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }
    return maxIdx;
}

int main() {
    int arr[] = { 10, 50, 20, 80, 40 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int index = maxIndex(arr, size);

    if (index != -1)
        cout << "Index: " << index << endl;
    else
        cout << "Array net chisel" << endl;

    return 0;
}
