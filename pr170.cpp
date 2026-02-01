#include <iostream>
using namespace std;

inline void logic(int arr[], int index1, int index2) {
    if (arr[index1] == arr[index2]) 
    {
        cout << "Yes" << endl;
    }
    else 
    {
        cout << "No" << endl;
    }
}

int main() {
    int arr[5] = { 12, 7, -45, 7, -23 };

    logic(arr, 1, 2);
    return 0;
}
