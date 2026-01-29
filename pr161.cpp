#include <iostream>
using namespace std;

int main() {
    const int size = 3;
    int arr[size][size];

    cout << "Array:\n";
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cin >> arr[i][j];
        }
    }
    
    bool symmetric = true;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (arr[i][j] != arr[j][i]) {
                symmetric = false;
                break;
            }
        }
        if (!symmetric) break;
    }

    if (symmetric) {
        cout << "Symmetric\n";
    } else {
        cout << "Not symmetric\n";
    }

    return 0;
}
