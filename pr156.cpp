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
    
    int max = arr[0];
    int MaxIndex = 0;
    
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            MaxIndex = i;
        }
    }
    
    std::cout << "Max: " << max << std::endl;
        
    int min = arr[0];
    int MinIndex = 0;
    
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            MinIndex = i;
        }
    }
        std::cout << "Min: " << min << std::endl;
        
    std::swap(arr[MaxIndex], arr[MinIndex]);
    
    for(int x : arr) std::cout << x << " ";
    
    return 0;
}
