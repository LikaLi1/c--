#include <iostream>
using namespace std;

void printNumbers(int N) {
    for (int i = 0; i <= N; i++) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter number N: ";
    cin >> N;

    printNumbers(N);

    return 0;
}
