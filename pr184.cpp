#include <iostream>
using namespace std;

void zeroBelowMainDiagonal(int (*arr)[3], int size = 3) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i > j) {
                arr[i][j] = 0;
            }
        }
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    zeroBelowMainDiagonal(matrix);

    cout << "Array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matrix[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
