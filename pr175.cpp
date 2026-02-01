#include <iostream>
using namespace std;

inline int Sum(int arr[2][2]) {
    return arr[0][0] + arr[1][1];
}

int main() {
    int arr[2][2] = { {19, 27}, {57, 24} };

    cout << "Sum: " << Sum(arr) << endl;

    return 0;
}
