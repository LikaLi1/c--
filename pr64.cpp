#include <iostream>
using namespace std;

double aveValue(double a, double b, double c) {
    return (a + b + c) / 3.0;
}

int main() {
    double a, b, c;

    cout << "Enter number: " << endl;
    cin >> a;
    cout << "Enter number: " << endl;
    cin >> b;
    cout << "Enter number: " << endl;
    cin >> c;

    cout << "Max = " << aveValue(a, b, c) << endl;

    return 0;
}
