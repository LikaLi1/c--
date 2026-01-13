#include <iostream>
using namespace std;

int main() {
    cout << "Enter array size: ";
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << "arr[" << i << "] = " << arr[i] << endl;
        }
    }

    return 0;
}
