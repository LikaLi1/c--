template <typename T>
T maxElement(const T* arr, size_t size) {
    T maxVal = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
T minElement(const T* arr, size_t size) {
    T minVal = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

template <typename T>
size_t countPositive(const T* arr, size_t size) {
    size_t count = 0;
    for (size_t i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            ++count;
        }
    }
    return count;
}

template <typename T>
void bubbleSort(T* arr, size_t size) {
    for (size_t i = 0; i < size - 1; ++i) {
        for (size_t j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

template <typename T>
void copyArray(const T* source, T* destination, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        destination[i] = source[i];
    }
}

template <typename T>
bool compareArrays(const T* arr1, const T* arr2, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

template <typename T>
size_t indexMaxElement(const T* arr, size_t size) {
    size_t index = 0;
    T maxVal = arr[0];
    for (size_t i = 1; i < size; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            index = i;
        }
    }
    return index;
}

template <typename T>
void fillArray(T* arr, size_t size, T value) {
    for (size_t i = 0; i < size; ++i) {
        arr[i] = value;
    }
}

template <typename T>
bool isSortedAscending(const T* arr, size_t size) {
    for (size_t i = 0; i < size - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

#include <type_traits>
template <typename T>
double average(const T* arr, size_t size) {
    static_assert(std::is_arithmetic<T>::value, "Not number");
    T sum = 0;
    for (size_t i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / size;
}
