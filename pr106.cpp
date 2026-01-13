#include <iostream>
using namespace std;

void elementWiseSum(int arr1[], int arr2[], int arr3[], int size) {
    for (int i = 0; i < size; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }
}

int main() {
    cout << "Enter array size: ";
    int n;
    cin >> n;

    int* arr1 = new int[n];
    int* arr2 = new int[n];
    int* arr3 = new int[n];

    cout << "1:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    cout << "2:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    elementWiseSum(arr1, arr2, arr3, n);

    cout << "3:\n";
    for (int i = 0; i < n; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
