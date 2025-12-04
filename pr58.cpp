#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int divi(int a, int b) {
    return a / b;
}

int per_of_num(int a, int b) {
    return a * b / 100;
}

int num_of_per(int a, int b) {
    return a / 100 * b;
}

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int result1 = sum(a, b);
    cout << "Sum: " << result1 << endl;
    
    int result2 = sub(a, b);
    cout << "Sub: " << result2 << endl;
    
    int result3 = mul(a, b);
    cout << "Mul: " << result3 << endl;
    
    int result4 = divi(a, b);
    cout << "Divi: " << result4 << endl;
    
    int result5 = per_of_num(a, b);
    cout << "Percentage of number: " << result5 << endl;
    
    int result6 = num_of_per(a, b);
    cout << "Number of percent: " << result6 << endl;

    return 0;
}
