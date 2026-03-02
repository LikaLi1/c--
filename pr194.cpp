#include <iostream>
using namespace std;

void printEvenNumbers(int n)
{
    if (n < 2)
        return;
    printEvenNumbers(n - 1);
    if (n % 2 == 0)
        cout << n << " ";
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Even from 1 to " << N << ": ";
    printEvenNumbers(N);
    cout << endl;

    return 0;
}


#include <iostream>
using namespace std;

int sumDigits(int n)
{
    if (n < 10)
        return n;
    return (n % 10) + sumDigits(n / 10);
}

int main()
{
    int N;
    cout << "Enter N: ";
    cin >> N;

    cout << "Сумма цифр числа " << N << ": " << sumDigits(N) << endl;

    return 0;
}

#include <iostream>
#include <cstdlib>
using namespace std;

int countZeros(int n)
{
    if (n == 0)
        return 1;

    n = abs(n);

    if (n == 0)
        return 0;

    int count = (n % 10 == 0) ? 1 : 0;
    return count + countZeros(n / 10);
}

int main()
{
    int N;
    cout << "Enter num: ";
    cin >> N;

    int zerosCount = countZeros(N);
    cout << "Number of zeros in a number: " << zerosCount << endl;

    return 0;
}


#include <iostream>
using namespace std;

void printArrayReverse(const int arr[], int index, int size)
{
    if (index >= size)
        return;
    printArrayReverse(arr, index + 1, size);
    cout << arr[index] << " ";
}

int main()
{
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array in reverse order: ";
    printArrayReverse(arr, 0, size);
    cout << endl;

    return 0;
}


#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    if (n == 1)
        return true;
    if (n < 1 || n % 2 != 0)
        return false;
    return isPowerOfTwo(n / 2);
}

int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    if (isPowerOfTwo(num))
        cout << num << " Yes" << endl;
    else
        cout << num << " No" << endl;

    return 0;
}


#include <iostream>
using namespace std;

int maxRecursive(int arr[], int size)
{
    if (size == 1)
        return arr[0];
    int max = maxRecursive(arr, size - 1);
    return (arr[size - 1] > max) ? arr[size - 1] : max;
}

int main()
{
    const int size = 5;
    int arr[size];

    cout << "Enter size: " << size << "\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int maxElement = maxRecursive(arr, size);
    cout << "Max: " << maxElement << endl;

    return 0;
}


#include <iostream>
using namespace std;

int countPositive(const int arr[], int size)
{
    if (size == 0)
        return 0;
    int count = (arr[size - 1] > 0) ? 1 : 0;
    return count + countPositive(arr, size - 1);
}

int main()
{
    int arr[] = { 3, -2, 5, 0, 7, -1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of positive elements: " << countPositive(arr, size) << endl;
    return 0;
}


#include <iostream>
using namespace std;

bool isDescending(const int arr[], int size)
{
    if (size <= 1)
        return true;
    if (arr[size - 2] < arr[size - 1])
        return false;
    return isDescending(arr, size - 1);
}

int main()
{
    int arr[] = { 9, 7, 5, 3, 2 };
    int size = sizeof(arr) / sizeof(arr[0]);
    if (isDescending(arr, size))
        cout << "The array is sorted in descending order" << endl;
    else
        cout << "The array is not sorted in descending order" << endl;
    return 0;
}


#include <iostream>
using namespace std;

void replaceNegatives(int arr[], int size, int index = 0)
{
    if (index == size)
        return;
    if (arr[index] < 0)
        arr[index] = 0;
    replaceNegatives(arr, size, index + 1);
}

int main()
{
    int arr[] = { 3, -2, 5, -7, 0, -1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    replaceNegatives(arr, size);

    cout << "Array after replacement:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

int findElement(const int arr[], int size, int target, int index = 0)
{
    if (index == size)
        return -1;
    if (arr[index] == target)
        return index;
    return findElement(arr, size, target, index + 1);
}

int main()
{
    int arr[] = { 4, 2, 7, 1, 9, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter num: ";
    cin >> target;

    int index = findElement(arr, size, target);
    if (index != -1)
        cout << "Element " << target << " found in position: " << index << endl;
    else
        cout << "Not found" << endl;

    return 0;
}
