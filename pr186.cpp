#include <iostream>
using namespace std;

int value = 100;

void showValues() {
    int value = 50;

    cout << "Local value = " << value << endl;
    cout << "Global value = " << ::value << endl;
}

int main() {
    cout << "Global value in main = " << value << endl;
    showValues();
    cout << "Global value = " << value << endl;

    return 0;
}
