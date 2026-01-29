#include <iostream>
using namespace std;

int main() {
	const int size = 10;
    int arr[size];
    
    cout << "Enter number x: " << endl;
    int x;
    cin >> x;

    cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        
    }
    
    for (int i = 0; i < size; i++)
    {
        if(x == arr[i])
        {
            cout << "Index x: " << i << endl;
        }
    }
    
    return 0;
}
