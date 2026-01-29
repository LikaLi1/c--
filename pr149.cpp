#include <iostream>
using namespace std;

int main() {
	const int size = 6;
    int arr[size];

    cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i] % 2 == 0)
        {
            cout << "Even: " << arr[i] << endl;
        }
    }
    
    return 0;
}
