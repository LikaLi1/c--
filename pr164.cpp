#include <iostream>
using namespace std;

int main() {
    const int size = 4;
    int arr[size][size] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
     
    int transposed[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            transposed[j][i] = arr[i][j];
        }
    }

    cout << "Arr:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nT:" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << transposed[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
