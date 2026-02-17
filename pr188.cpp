#include <iostream>
using namespace std;

auto countAboveAverage(int arr[], int size) -> int;

int main() {
    int arr[] = {1, 4, 6, 8, 3, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count = countAboveAverage(arr, size);
    cout << "Number of elements above average: " << count << endl;

    return 0;
}

auto countAboveAverage(int arr[], int size) -> int {
    if (size <= 0) return 0;

    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    double average = sum / size;

    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > average) {
            count++;
        }
    }
    return count;
}
