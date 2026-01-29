#include <iostream>
using namespace std;

int main() {
	const int rows = 3;
	const int cols = 3;
    int arr[rows][cols];
    
    cout << "Enter array:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> arr[i][j];
        }
    }
    
    for (int i = 0; i < cols; ++i) 
    {
        cout << arr[i][i] << " ";
    }
    return 0;
}
