#include <iostream>
using namespace std;

inline int sumTwo(int arr[], int i, int j) {
    return arr[i] + arr[j];
}


int main() {
    int arr[] = { 1, 2, 3, 4 };

    cout << sumTwo(arr, 1, 2);
    return 0;
}
