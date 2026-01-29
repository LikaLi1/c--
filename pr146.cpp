#include <iostream>
using namespace std;

int main() {
	const int size = 5;
    int arr[size];

    std::cout << "Enter array:\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
}
