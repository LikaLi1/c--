#include <iostream>
using namespace std;

int main() {
    cout << "Enter number: ";
    int a;
    cin >> a;

    cout << "Enter array size: ";
    int n;
    cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == a) {
            count++;
        }
    }

    cout << "Element " << a << " meets " << count << " time" << endl;

    return 0;
}
