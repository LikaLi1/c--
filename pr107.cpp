#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num < 0) {
        cout << "< 0!!!!!!" << endl;
    }
    else {
        cout << "Factorial " << num << " = " << factorial(num) << endl;
    }

    return 0;
}
