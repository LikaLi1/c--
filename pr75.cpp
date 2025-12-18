#include <iostream>

void task_1(){
    const int size = 10;
    int a[size];

    int n;
    std::cin >> n;

    double sum = 0;

    for (int i = 0; i < size; i++) {
        std::cin >> a[i];
        if (a[i] > 0) {
            sum += a[i];
        }
    }

    std::cout << "Sum of positive elements: " << sum << std::endl;

}

void task_2(){
    int n;
    std::cin >> n;

    int a[10];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
        }
    }

    std::cout << "Sum of even elements: " << sum << std::endl;

}

void task_3(){
    int n;
    std::cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            a[i] = 0;
        }
    }

    std::cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

}

void task_4(){
    int n;
    std::cin >> n;

    int a[1000];

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int min_element = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < min_element) {
            min_element = a[i];
        }
    }

    std::cout << "Min element: " << min_element << std::endl;

}



#include <iostream>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int a[1000];

    std::cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int target;
    std::cout << "Enter elemnt find: ";
    std::cin >> target;

    int index = linearSearch(a, n, target);
    if (index != -1) {
        std::cout << "Find: " << index << std::endl;
    }
    else {
        std::cout << "Not find" << std::endl;
    }

    return 0;
}



#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;

    int a[1000];

    std::cout << "Enter array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    bubbleSort(a, n);
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;

    int target;
    std::cout << "Element: ";
    std::cin >> target;

    int index = binarySearch(a, n, target);
    if (index != -1) {
        std::cout << "Find: " << index << std::endl;
    }
    else {
        std::cout << "Not find" << std::endl;
    }
}



#include <iostream>

void bubbleSortDescending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int array[] = { 5, 2, 9, 1, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]);

    bubbleSortDescending(array, size);

    std::cout << "Array bubble: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}




#include <iostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int array[] = { 5, 2, 9, 1, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);

    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



#include <iostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main() {
    int array[] = { 5, 2, 9, 1, 5, 6 };
    int size = sizeof(array) / sizeof(array[0]);

    selectionSort(array, size);

    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



#include <iostream>

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int array[] = { 5, 2, 9, 1, 5, 6 };
    int n = sizeof(array) / sizeof(array[0]);

    insertionSort(array, n);

    for (int i = 0; i < n; ++i) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



void task_10(){
    const int rows = 5;
    const int cols = 5;
    int arr[rows][cols] = {
        {2, 4, 6, 9, 69},
        {8, 10, 12, 3, 40},
        {14, 16, 18, 11, 1},
        {7, 19, 20, 51, 3},
        {1, 6, 4, 33, 90}
    };

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }

    int sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += arr[i][i];
    }

    std::cout << "Sum: " << sum << std::endl;
}
