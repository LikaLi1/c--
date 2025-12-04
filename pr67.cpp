#include <iostream>
using namespace std;

void Mul(int N) {
    for (int i = 1; i <= N; i++) {
        cout << N << " x " << i << " = " << N * i << endl;
    }
}

int main() {
    int number;
    cout << "Enter number: ";
    cin >> number;

    Mul(number);

    return 0;
}
