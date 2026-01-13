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

    cout << "Enter index (0 to " << n - 1 << "): ";
    int k;
    cin >> k;

    if (k < 0 || k >= n) {
        cout << "Incorrct" << endl;
        return 1;
    }

    for (int i = k; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Array after deleting an element by index " << k << ":\n";
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
