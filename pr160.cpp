#include <iostream>
using namespace std;

int main() {
	const int size = 20;
    int arr[size];
    int sum = 0;
    int count = 0;

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    double average = static_cast<double>(sum) / size;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > average) {
            ++count;
        }
    }

    cout << "Arithmetic mean: " << average << endl;
    cout << "X: " << count << endl;
    
    return 0;
}
