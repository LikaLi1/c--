#include <iostream>
using namespace std;

int sumMainDiagonal(int arr[3][3]) {
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i][i]; 
    }
    return sum;
}

int main() {
    int array[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> array[i][j];
        }
    }

    int result = sumMainDiagonal(array);
    cout << "Sum: " << result << endl;

    return 0;
}
