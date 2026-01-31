#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size] = { 2, 2, 3, 3, 3, 1, 1, 1, 1, 2 };

    int maxCount = 1;
    int currentCount = 1;

    for (int i = 1; i < size; i++) {
        if (arr[i] == arr[i - 1]) {
            currentCount++;
        }
        else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 1;
        }
    }
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    cout << "Max: " << maxCount << endl;

    return 0;
}
