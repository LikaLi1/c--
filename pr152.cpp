#include <iostream>
using namespace std;

int main() {
	const int rows = 4;
	const int cols = 4;
    int arr[rows][cols];
    int sum = 0;
    
    cout << "Enter array:\n";

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) 
        {
            cin >> arr[i][j];
            
            sum += arr[i][j];
        }
    }
    
    cout << sum << endl;
    
    return 0;
}
