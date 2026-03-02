#include <iostream>
using namespace std;

int strlenRecursive(const char* str)
{
    if (str[0] == '\0')
        return 0;
    return 1 + strlenRecursive(str + 1);
}

int main()
{
    const char* str = "Hello!";
    int len = strlenRecursive(str);
    cout << "Length string \"" << str << "\" = " << len << endl;
    return 0;
}


#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(const char* str, int left, int right)
{
    if (left >= right)
        return true;
    if (str[left] != str[right])
        return false;
    return isPalindrome(str, left + 1, right - 1);
}

int main()
{
    const char* str = "level";
    int len = strlen(str);
    if (isPalindrome(str, 0, len - 1))
        cout << "String \"" << str << "\" — palindrome." << endl;
    else
        cout << "String \"" << str << "\" no palindrome." << endl;
    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

bool isVowel(char c)
{
    c = tolower(c);
    return c == 'а' || c == 'е' || c == 'ё' || c == 'и' || c == 'о' || c == 'у' || c == 'ы' || c == 'э' || c == 'ю' || c == 'я';
}

int countVowels(const char* str, int index)
{
    if (str[index] == '\0')
        return 0;
    int count = isVowel(str[index]) ? 1 : 0;
    return count + countVowels(str, index + 1);
}

int main()
{
    const char* str = "Здравствуйте";
    int vowelsCount = countVowels(str, 0);
    cout << "Number  \"" << str << "\": " << vowelsCount << endl;
    return 0;
}


#include <iostream>
using namespace std;

void strcpyRecursive(char* dest, const char* src)
{
    if (*src == '\0')
    {
        *dest = '\0';
        return;
    }
    *dest = *src;
    strcpyRecursive(dest + 1, src + 1);
}

int main()
{
    const char* source = "Copy";
    char destination[50];

    strcpyRecursive(destination, source);
    cout << "First: " << source << endl;
    cout << "Copy: " << destination << endl;

    return 0;
}


#include <iostream>
using namespace std;

double fastPower(double base, int exponent)
{
    if (exponent == 0)
        return 1;
    if (exponent % 2 == 0)
        return fastPower(base * base, exponent / 2);
    else
        return base * fastPower(base, exponent - 1);
}

int main()
{
    double base = 2.0;
    int exponent = 10;
    cout << base << "^" << exponent << " = " << fastPower(base, exponent) << endl;
    return 0;
}


#include <iostream>
#include <climits>
using namespace std;

void findMaxMin(const int* arr, int size, int& maxVal, int& minVal, int index)
{
    if (index == size)
        return;
    if (arr[index] > maxVal)
        maxVal = arr[index];
    if (arr[index] < minVal)
        minVal = arr[index];
    findMaxMin(arr, size, maxVal, minVal, index + 1);
}

int main()
{
    int arr[] = { 3, 7, -2, 9, 0, -5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    findMaxMin(arr, size, maxVal, minVal, 0);
    cout << "Max: " << maxVal << ", Min: " << minVal << endl;
    return 0;
}


#include <iostream>
using namespace std;

void deleteAtIndex(int* arr, int size, int index)
{
    if (index >= size - 1)
        return;
    arr[index] = arr[index + 1];
    deleteAtIndex(arr, size, index + 1);
}

int main()
{
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int size = 6;
    int delIndex = 2;

    deleteAtIndex(arr, size, delIndex);
    cout << "Array after removal:\n";
    for (int i = 0; i < size - 1; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

void rotateLeft(int* arr, int size, int k)
{
    if (k == 0 || size == 0)
        return;
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++)
        arr[i] = arr[i + 1];
    arr[size - 1] = temp;
    rotateLeft(arr, size, k - 1);
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = 5;
    int k = 2;
    rotateLeft(arr, size, k);
    cout << "Array after cyclic shift to the left by " << k << " positions:\n";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}


#include <iostream>
using namespace std;

void mergeSorted(const int* arr1, int size1, const int* arr2, int size2, int* merged, int index1, int index2, int& index3)
{
    if (index1 == size1 && index2 == size2)
        return;

    if (index1 == size1)
        merged[index3++] = arr2[index2++];
    else if (index2 == size2)
        merged[index3++] = arr1[index1++];
    else if (arr1[index1] <= arr2[index2])
        merged[index3++] = arr1[index1++];
    else
        merged[index3++] = arr2[index2++];

    mergeSorted(arr1, size1, arr2, size2, merged, index1, index2, index3);
}

int main()
{
    int arr1[] = { 1, 3, 5 };
    int arr2[] = { 2, 4, 6 };
    int size1 = 3, size2 = 3;
    int merged[size1 + size2];
    int index3 = 0;

    mergeSorted(arr1, size1, arr2, size2, merged, 0, 0, index3);

    cout << "Merged sorted array:\n";
    for (int i = 0; i < size1 + size2; i++)
        cout << merged[i] << " ";
    cout << endl;

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

int partition(vector<double>& arr, int low, int high)
{
    double pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<double>& arr, int low, int high)
{
    if (low >= high)
        return;
    int pi = partition(arr, low, high);
    quickSort(arr, low, pi - 1);
    quickSort(arr, pi + 1, high);
}

int main()
{
    vector<double> arr = { 3.4, 2.1, 5.8, 1.2, 4.6 };
    quickSort(arr, 0, arr.size() - 1);
    cout << "Sorted array:\n";
    for (double num : arr)
        cout << num << " ";
    cout << endl;
    return 0;
}
