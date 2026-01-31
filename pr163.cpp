#include <iostream>
using namespace std;

int main() {
    const int size = 6;
    int array[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            array[i][j] = i * size + j + 1;
        }
    }

    cout << "End: " << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i + j > size - 1) {
                cout << array[i][j] << " ";
            }
        }
    }
    cout << endl;

    return 0;
}
