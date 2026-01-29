#include <iostream>
using namespace std;

int main() {
	const int size = 12;
    int arr[size];
    int sum = 0;

    cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if(arr[i] <= -1)
        {
            sum += arr[i];
            cout << "Sum -: " << sum << endl;
        }
    }
    
    return 0;
}
