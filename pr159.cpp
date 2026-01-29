#include <iostream>
using namespace std;

int main() {
	const int size = 15;
    int arr[size];

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    
    int MinIndex = 0;
    
    for (int i = 0; i < size; ++i)
    {
        MinIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[j] < arr[MinIndex]) 
            {
                MinIndex = j;
            }
        }
        swap(arr[i], arr[MinIndex]);
    }
    
    cout << "Sorted array:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
