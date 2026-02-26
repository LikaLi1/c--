#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;

    cout << "Meaning a: " << a << endl;
    cout << "Address a: " << &a << endl;
    cout << "Value via pointer: " << *p << endl;

    *p = 25;
    cout << "New meaning a: " << a << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;

    *p = 25;
    cout << "New meaning a: " << a << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;
    int* o = p;

    *p = 25;
    cout << "New meaning a: " << *o << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = nullptr;

    if (p == nullptr)
        cout << "The pointer is not initialized";

    return 0;
}

#include <iostream>
int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* p = arr;

    std::cout << "Addresses of array elements:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "arr[" << i << "] = " << &arr[i]
            << " via pointer = " << (p + i) << "\n";
    }

    return 0;
}

#include <iostream>
void multiplyByThree(int* ptr) {
    if (ptr != nullptr) {
        *ptr *= 3;
    }
}

int main() {
    int num = 10;
    std::cout << "Before calling the function: " << num << std::endl;

    multiplyByThree(&num);

    std::cout << "After calling the function: " << num << std::endl;

    return 0;
}

#include <iostream>
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main()
{
    int a = 5, b = 9;
    swap(&a, &b);

    cout << a << " " << b;
    return 0;
}

#include <iostream>
int sumArray(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += *(arr + i);

    return sum;
}

#include <iostream>
int maxElement(int* arr, int size)
{
    int max = *arr;
    for (int i = 1; i < size; i++)
        if (*(arr + i) > max)
            max = *(arr + i);

    return max;
}

#include <iostream>
void replaceNegativesWithZero(int* arr, int size) {
    for (int* ptr = arr; ptr < arr + size; ++ptr) {
        if (*ptr < 0) {
            *ptr = 0;
        }
    }
}

int main() {
    int arr[] = { 5, -3, 7, -1, 0, -6 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before processing: ";
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    replaceNegativesWithZero(arr, size);

    std::cout << "After processing: ";
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}
