#include <iostream>
using namespace std;

inline int rangeOfArray(int arr[], int size) {
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        else if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return maxVal - minVal;
}

int main() {
    int arr[5] = { 12, 3, 45, 7, 23 };

    cout << rangeOfArray(arr, 5) << endl;
    return 0;
}
