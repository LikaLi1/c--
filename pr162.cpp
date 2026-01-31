#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int arr1[size] = { 1, 2, 3, 4, 5 };
    int arr2[size] = { 6, 7, 8, 9, 10 };
    int arr3[size];

    for (int i = 0; i < 5; i++) {
        arr3[i] = arr1[i] + arr2[i];
    }

    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;

    return 0;
}
