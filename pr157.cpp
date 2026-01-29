#include <iostream>
using namespace std;

int main() {
	const int rows = 5;
	const int cols = 5;
    int arr[rows][cols];
    
    cout << "Enter array:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j > i) {
                cout << arr[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    
    return 0;
}
