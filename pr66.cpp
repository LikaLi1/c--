#include <iostream>
using namespace std;

int sumUpToN(int N) {
    return N * (N + 1) / 2;
}

int main() {
    int N;
    cout << "Enter number N: ";
    cin >> N;

    int sum = sumUpToN(N);
    cout << "Sum of numbers from 1 to " << N << " = " << sum << endl;

    return 0;
}
