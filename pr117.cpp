#include <iostream>
using namespace std;

int main() {
    int a;
    long long product = 1;

    cout << "Enter number a (1 <= a <= 20): ";
    cin >> a;

    if (a < 1 || a > 20) {
        cout << "1 TO 20" << endl;
        return 1;
    }

    for (int i = a; i <= 20; ++i) {
        product *= i;
    }

    cout << "Result " << product << endl;

    return 0;
}
