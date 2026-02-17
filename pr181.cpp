#include <iostream>
using namespace std;

void printAverage(int arr[], int size);

int main() {
    int arr[] = { 1, 5, 3, 7, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printAverage(arr, size);

    return 0;
}

void printAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    double avg = sum / size;
    cout << "Arithmetic mean: " << avg << endl;
}
