#include <iostream>
using namespace std;

int main() {
	const int size = 8;
    int arr[size];

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    
    int max = arr[0];
    
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    std::cout << "Max: " << max << std::endl;
        
    int min = arr[0];
    
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
        std::cout << "Min: " << min << std::endl;
    
    return 0;
}
