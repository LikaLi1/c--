#include <iostream>
using namespace std;

void fillArray(int(&arr)[6]) {
    cout << "Enter 6 number:\n";
    for (int i = 0; i < 6; i++) {
        cin >> arr[i];
    }
}

int main() {
    int myArray[6];

    fillArray(myArray);

    cout << "It: ";
    for (int i = 0; i < 6; i++) {
        cout << myArray[i] << ' ';
    }
    cout << endl;

    return 0;
}
