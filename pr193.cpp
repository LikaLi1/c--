#include <iostream>
template <typename T>
T max_value(const T& a, const T& b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Max " << x << " and " << y << " = " << max_value(x, y) << std::endl;

    double a = 3.14, b = 2.72;
    std::cout << "Max " << a << " and " << b << " = " << max_value(a, b) << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
void swap_values(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before: x = " << x << ", y = " << y << std::endl;

    swap_values(x, y);
    std::cout << "After: x = " << x << ", y = " << y << std::endl;

    double a = 1.23, b = 4.56;
    std::cout << "Before: a = " << a << ", b = " << b << std::endl;

    swap_values(a, b);
    std::cout << "After: a = " << a << ", b = " << b << std::endl;

    return 0;
}

#include <iostream>
#include <cmath>
template <typename T>
T Square_value(T& a) {
    return pow(2, a);
}

int main() {
    int x = 10;
    std::cout << "Square of the passed value: " << x << " = " << Square_value(x) << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
T print_value(const T& a) {
    std::cout << print_value << std::endl;
}

int main() {
    int x = 10;
    double e = 2.5;
    std::string d = "Hi";

    print_value(x);
    print_value(e);
    print_value(d);

    return 0;
}

#include <iostream>
template <typename T>
T min_value(T a, T b)
{
    return (a < b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    std::cout << "Min " << x << " and " << y << " = " << min_value(x, y) << std::endl;

    double a = 3.14, b = 2.72;
    std::cout << "Min " << a << " and " << b << " = " << min_value(a, b) << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
T sum_array(const T* arr, size_t size) {
    T sum = T();
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int intArr[] = { 1, 2, 3, 4, 5 };
    size_t sizeInt = sizeof(intArr) / sizeof(intArr[0]);
    std::cout << "Sum int array: " << sum_array(intArr, sizeInt) << std::endl;

    double doubleArr[] = { 1.1, 2.2, 3.3 };
    size_t sizeDouble = sizeof(doubleArr) / sizeof(doubleArr[0]);
    std::cout << "Sum double array: " << sum_array(doubleArr, sizeDouble) << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
int linearSearch(T arr[], int size, T key)
{
    for (int i = 0; i < size; i++)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int arr[] = { 5, 3, 8, 1, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    int index = linearSearch(arr, size, key);
    if (index != -1)
        std::cout << "Yes: " << index << std::endl;
    else
        std::cout << "No" << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
void bubbleSort(T arr[], int size) {
    for (int i = 0; i < size - 1; i++)
        for (int j = 0; j < size - i - 1; j++)
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j + 1]);
}

int main() {
    int arr[] = { 5, 3, 8, 1, 9 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;

    bubbleSort(arr, size);

    std::cout << "End: ";
    for (int i = 0; i < size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
T findMax(const T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main() {
    int arrInt[] = { 4, 7, 2, 9, 1 };
    double arrDouble[] = { 3.14, 2.71, 1.61, 4.67 };

    int sizeInt = sizeof(arrInt) / sizeof(arrInt[0]);
    int sizeDouble = sizeof(arrDouble) / sizeof(arrDouble[0]);

    std::cout << "Max int: " << findMax(arrInt, sizeInt) << std::endl;
    std::cout << "Max double: " << findMax(arrDouble, sizeDouble) << std::endl;

    return 0;
}

#include <iostream>
template <typename T>
int countGreaterThan(const T arr[], int size, T threshold) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > threshold)
            count++;
    }
    return count;
}

int main() {
    int arrInt[] = { 4, 7, 2, 9, 1 };
    double arrDouble[] = { 3.14, 2.71, 1.61, 4.67 };

    int sizeInt = sizeof(arrInt) / sizeof(arrInt[0]);
    int sizeDouble = sizeof(arrDouble) / sizeof(arrDouble[0]);

    int thresholdInt = 3;
    double thresholdDouble = 2.0;

    std::cout << thresholdInt << " int: "
        << countGreaterThan(arrInt, sizeInt, thresholdInt) << std::endl;

    std::cout << thresholdDouble << " double: "
        << countGreaterThan(arrDouble, sizeDouble, thresholdDouble) << std::endl;

    return 0;
}
