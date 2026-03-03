#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << sum(2, 3) << endl;
    cout << sum(2.5, 3.1) << endl;
    cout << sum(1, 2, 3) << endl;
    return 0;
}


void print(int x) {
    cout << "int: " << x << endl;
}

void print(double x) {
    cout << "double: " << x << endl;
}

void print(char c) {
    cout << "char: " << c << endl;
}


#include <iostream>
using namespace std;

int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

double maxValue(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    double double1 = 5.5, double2 = 3.3;

    cout << "max " << int1 << " and " << int2 << " (int): " << maxValue(int1, int2) << endl;
    cout << "max " << double1 << " and " << double2 << " (double): " << maxValue(double1, double2) << endl;

    return 0;
}


#include <iostream>
using namespace std;

int square(int a) {
    return a * a;
}

double square(double a) {
    return a * a;
}

int main() {
    int intVal = 5;
    double doubleVal = 3.14;

    cout << "square " << intVal << " (int): " << square(intVal) << endl;
    cout << "square " << doubleVal << " (double): " << square(doubleVal) << endl;

    return 0;
}


#include <iostream>
using namespace std;

int absValue(int a) {
    return (a < 0) ? -a : a;
}

double absValue(double a) {
    return (a < 0) ? -a : a;
}

int main() {
    int intVal = -42;
    double doubleVal = -3.14;

    cout << "Abs " << intVal << " (int): " << absValue(intVal) << endl;
    cout << "Abs " << doubleVal << " (double): " << absValue(doubleVal) << endl;

    return 0;
}


#include <iostream>
using namespace std;

double average(int a, int b) {
    return (a + b) / 2.0;
}

double average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}

int main() {
    int x = 10, y = 20, z = 30;

    cout << "Average of " << x << " and " << y << " = " << average(x, y) << endl;
    cout << "Average of " << x << ", " << y << " and " << z << " = " << average(x, y, z) << endl;

    return 0;
}


void print(int arr[], int size) {
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void print(int arr[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}


#include <iostream>
using namespace std;

int maxValue(int a, int b) {
    return (a < b) ? a : b;
}

double maxValue(double a, double b) {
    return (a < b) ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    double double1 = 5.5, double2 = 3.3;

    cout << "min " << int1 << " and " << int2 << " (int): " << maxValue(int1, int2) << endl;
    cout << "min " << double1 << " and " << double2 << " (double): " << maxValue(double1, double2) << endl;

    return 0;
}


#include <iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapValues(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    double dx = 3.14, dy = 2.71;

    cout << "Before (int): x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After (int): x = " << x << ", y = " << y << endl;

    cout << "Before (double): dx = " << dx << ", dy = " << dy << endl;
    swapValues(dx, dy);
    cout << "After (double): dx = " << dx << ", dy = " << dy << endl;

    return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

double power(double a) {
    return a * a;
}

double power(double a, int n) {
    return pow(a, n);
}

int main() {
    double num = 3.0;
    int degree = 4;

    cout << "squer " << num << " = " << power(num) << endl;
    cout << "number " << num << " to a degree " << degree << " = " << power(num, degree) << endl;

    return 0;
}
