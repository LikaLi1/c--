#include <iostream>
int countEvenElements(int* arr, int size) {
    int count = 0;
    int* start = arr;
    int* end = arr + size;

    for (int* p = start; p < end; ++p) {
        if ((*p) % 2 == 0) {
            ++count;
        }
    }
    return count;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array: ";
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << "\n";

    int result = countEvenElements(arr, size);
    std::cout << "Number of even elements: " << result << std::endl;

    return 0;
}

#include <iostream>
int findMin(const int* arr, int size) {
    const int* p = arr;
    const int* end = arr + size;
    int minValue = *p;

    for (++p; p < end; ++p) {
        if (*p < minValue) {
            minValue = *p;
        }
    }
    return minValue;
}

int main() {
    int arr[] = { 3, 7, 2, 9, 1, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);
    std::cout << "Minimum element of an array: " << min << std::endl;

    return 0;
}

#include <iostream>
int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    int* p = arr + size - 1;

    std::cout << "Array in reverse order: ";
    for (; p >= arr; --p) {
        std::cout << *p << " ";
    }
    std::cout << std::endl;

    return 0;
}

#include <iostream>
void processAndNullify(int*& ptr) {
    if (ptr != nullptr) {
        std::cout << "Processing the value: " << *ptr << std::endl;
        ptr = nullptr;
    }
}

int main() {
    int value = 42;
    int* p = &value;

    processAndNullify(p);

    if (p == nullptr) {
        std::cout << "The pointer after the function is nullptr" << std::endl;
    }
    else {
        std::cout << "The pointer is not nullptr" << std::endl;
    }

    return 0;
}

#include <iostream>
bool areEqual(const int* a, const int* b) {
    return (*a == *b);
}

int main() {
    int x = 5;
    int y = 5;
    int z = 10;

    std::cout << "x and y =? " << (areEqual(&x, &y) ? "Да" : "Нет") << std::endl;
    std::cout << "x and z =? " << (areEqual(&x, &z) ? "Да" : "Нет") << std::endl;

    return 0;
}

#include <iostream>
void copyArray(const int* src, int* dest, int size) {
    for (int* pSrc = (int*)src, *pDest = dest; pSrc < src + size; ++pSrc, ++pDest) {
        *pDest = *pSrc;
    }
}

int main() {
    int source[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(source) / sizeof(source[0]);
    int destination[size];

    copyArray(source, destination, size);

    std::cout << "Copy of the array: ";
    for (int i = 0; i < size; ++i)
        std::cout << destination[i] << " ";
    std::cout << std::endl;

    return 0;
}

#include <iostream>
void swapFirstLast(int* arr, int size) {
    if (size <= 1) return;

    int* first = arr;
    int* last = arr + size - 1;

    int temp = *first;
    *first = *last;
    *last = temp;
}

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before exchange: ";
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    swapFirstLast(arr, size);

    std::cout << "After the exchange: ";
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}

#include <iostream>
int countGreaterThan(const int* arr, int size, int value) {
    int count = 0;
    const int* p = arr;

    for (; p < arr + size; ++p) {
        if (*p > value) {
            ++count;
        }
    }
    return count;
}

int main() {
    int arr[] = { 3, 7, 2, 9, 1, 4 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int threshold = 4;

    int result = countGreaterThan(arr, size, threshold);
    std::cout << "Number of elements is greater " << threshold << ": " << result << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int a = 10, b = 20;

    const int* ptr1 = &a; 

    ptr1 = &b;
    std::cout << "ptr1 points to b: " << *ptr1 << std::endl;

    int* const ptr2 = &a;
    *ptr2 = 30;
    std::cout << "Value by ptr2: " << *ptr2 << std::endl;
    
    return 0;
}
