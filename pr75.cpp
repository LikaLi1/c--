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
