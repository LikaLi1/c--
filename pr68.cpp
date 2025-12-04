#include <iostream>
using namespace std;

int sumArr(int arr[], int size) 
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int size;
    cout << "Enter array size: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter Array Elements: ";
    for (int i = 0; i < size; i++) 
    {
        cin >> arr[i];
    }

    int total = sumArr(arr, size);
    cout << "Sum of array elements: " << total << endl;

    return 0;
}
