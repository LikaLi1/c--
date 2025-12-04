#include <iostream>
using namespace std;

int maxelement(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int minelement(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

double aveValue(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size; 
}

int main() {
    int a[8] = {3, 9, -4, 7, 6, 1, 10, 2};
    cout << "Max = " << maxelement(a, 8) << endl;
    cout << "Min = " << minelement(a, 8) << endl;
    cout << "Average = " << aveValue(a, 8) << endl;

    return 0;
}
