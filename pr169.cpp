#include <iostream>
using namespace std;

inline int logic(int arr[], int size) {
    int minVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            return true;
        }
        else {
            return false;
        }
    }
}

int main() {
    int arr[5] = { 12, 3, -45, 7, -23 };

    cout << logic(arr, 5) << endl;
    return 0;
}
