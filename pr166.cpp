#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;

    int arr[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int maxSum = -1;
    int maxRowIndex = -1;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRowIndex = i;
        }
    }

    cout << "Max: " << (maxRowIndex + 1) << endl;
    cout << "Sum: " << maxSum << endl;

    return 0;
}
