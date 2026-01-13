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
        if (arr[i] > 0) {
            cout << "Positive " << i << endl;
        }
        else {
            cout << "Not positive " << i << endl;
        }
    }

    return 0;
}
