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

    bool has_two_zeroes = false;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == 0 && arr[i + 1] == 0) {
            has_two_zeroes = true;
            break;
        }
    }

    if (has_two_zeroes) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

    return 0;
}
