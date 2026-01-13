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

    int sum = 0;
    for (int i = 0; i < n; i += 2) {
        sum += arr[i];
    }

    cout << "Sum 0, 2, 4, ...: " << sum << endl;

    return 0;
}
