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

    int first_positive = 0;
    bool positive_found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            first_positive = arr[i];
            positive_found = true;
            break;
        }
    }

    if (positive_found) {
        cout << "Positive: " << first_positive << endl;
    }
    else {
        cout << "There are no positive elements in the array" << endl;
    }

    return 0;
}
