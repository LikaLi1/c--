#include <iostream>
#include <vector> 
#include <numeric> 

int main() {
    const int SIZE = 10;
    std::vector<int> numbers(SIZE);

    std::cout << "Введите " << SIZE << " целых чисел:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Элемент [" << i << "]: ";
        std::cin >> numbers[i];
    }

    std::cout << "\nВведенный массив:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    long long sum_positive = 0; 
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] > 0) {
            sum_positive += numbers[i];
        }
    }
    std::cout << "\nСумма всех положительных элементов: " << sum_positive << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>

int sum_even_indexed(const int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i += 2) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = sum_even_indexed(arr, SIZE);
    std::cout << "Сумма элементов на четных индексах: " << sum << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>

void replace_negatives_with_zeros(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, -2, 3, -4, 5, -6, 7, -8, 9, -10};

    std::cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    replace_negatives_with_zeros(arr, SIZE);

    std::cout << "Массив после замены отрицательных элементов: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

int find_min_element(const int arr[], int size);

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, 2, 8, 1, 9, 4, 7, 3, 6, 0};

    int min_val = find_min_element(arr, SIZE);
    std::cout << "Минимальный элемент массива: " << min_val << std::endl;

    return 0;
}

int find_min_element(const int arr[], int size) {
    if (size <= 0) {
        return std::numeric_limits<int>::max();
    }
    int min_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}


#include <iostream>
#include <vector>
#include <numeric>

int linear_search(const int arr[], int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int target_element = 50;

    int index = linear_search(arr, SIZE, target_element);

    if (index != -1) {
        std::cout << "Элемент " << target_element << " найден по индексу: " << index << std::endl;
    } else {
        std::cout << "Элемент " << target_element << " не найден в массиве." << std::endl;
    }

    target_element = 150;
    index = linear_search(arr, SIZE, target_element);
    if (index != -1) {
        std::cout << "Элемент " << target_element << " найден по индексу: " << index << std::endl;
    } else {
        std::cout << "Элемент " << target_element << " не найден в массиве." << std::endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int binary_search(const int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, 2, 8, 1, 9, 4, 7, 3, 6, 0};

    std::sort(arr, arr + SIZE);

    std::cout << "Отсортированный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int target_element = 4;
    int index = binary_search(arr, SIZE, target_element);

    if (index != -1) {
        std::cout << "Элемент " << target_element << " найден по индексу: " << index << std::endl;
    } else {
        std::cout << "Элемент " << target_element << " не найден в массиве." << std::endl;
    }

    target_element = 15;
    index = binary_search(arr, SIZE, target_element);
    if (index != -1) {
        std::cout << "Элемент " << target_element << " найден по индексу: " << index << std::endl;
    } else {
        std::cout << "Элемент " << target_element << " не найден в массиве." << std::endl;
    }

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void bubble_sort_descending(int arr[], int size) {
    bool swapped;
    for (int i = 0; i < size - 1; ++i) {
        swapped = false;
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] < arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, 2, 8, 1, 9, 4, 7, 3, 6, 0};

    std::cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    bubble_sort_descending(arr, SIZE);

    std::cout << "Массив после пузырьковой сортировки (по убыванию): ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}



#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int min_idx = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            std::swap(arr[i], arr[min_idx]);
        }
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, 2, 8, 1, 9, 4, 7, 3, 6, 0};

    std::cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    selection_sort(arr, SIZE);

    std::cout << "Массив после сортировки выбором: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {5, 2, 8, 1, 9, 4, 7, 3, 6, 0};

    std::cout << "Исходный массив: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertion_sort(arr, SIZE);

    std::cout << "Массив после сортировки вставками: ";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>

int main() {
    const int ROWS = 5;
    const int COLS = 5;
    int matrix[ROWS][COLS];

    std::cout << "Заполнение массива случайными числами:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            matrix[i][j] = rand() % 20 - 10;
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int diagonal_sum = 0;
    for (int i = 0; i < ROWS; ++i) {
        diagonal_sum += matrix[i][i];
    }

    std::cout << "Сумма элементов главной диагонали: " << diagonal_sum << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>
#include <limits>

const int ROWS = 4;
const int COLS = 4;

void find_max_in_each_row(const int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; ++i) {
        int max_in_row = std::numeric_limits<int>::min();
        for (int j = 0; j < COLS; ++j) {
            if (matrix[i][j] > max_in_row) {
                max_in_row = matrix[i][j];
            }
        }
        std::cout << "Максимальный элемент в строке " << i << ": " << max_in_row << std::endl;
    }
}

int main() {
    int matrix[ROWS][COLS] = {
        {1, 5, 3, 9},
        {4, 8, 2, 7},
        {6, 0, 10, 11},
        {12, 13, 14, 15}
    };

    std::cout << "Исходный двумерный массив 4x4:" << std::endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    find_max_in_each_row(matrix);

    return 0;
}


#include <iostream>

void increment_counter() {
    static int counter = 0;
    counter++;
    std::cout << "Значение счетчика: " << counter << std::endl;
}

int main() {
    std::cout << "Первый вызов:" << std::endl;
    increment_counter();

    std::cout << "Второй вызов:" << std::endl;
    increment_counter();

    std::cout << "Третий вызов:" << std::endl;
    increment_counter();

    return 0;
}


#include <iostream>

int my_variable = 100;

void demonstrate_scope() {
    int my_variable = 50;

    std::cout << "Внутри функции (локальная my_variable): " << my_variable << std::endl;
    std::cout << "Изнутри функции (глобальная my_variable через ::): " << ::my_variable << std::endl;
}

int main() {
    std::cout << "В main (глобальная my_variable): " << my_variable << std::endl;
    demonstrate_scope();
    std::cout << "Снова в main (глобальная my_variable): " << my_variable << std::endl;

    return 0;
}


#include <iostream>
#include <vector>
#include <numeric>

auto calculate_average(const std::vector<int>& vec) -> double
{
    if (vec.empty()) {
        return 0.0;
    }
    long long sum = 0;
    for (int val : vec) {
        sum += val;
    }
    return static_cast<double>(sum) / vec.size();
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double average = calculate_average(numbers);
    std::cout << "Среднее арифметическое элементов вектора: " << average << std::endl;

    std::vector<int> empty_vector;
    average = calculate_average(empty_vector);
    std::cout << "Среднее арифметическое пустого вектора: " << average << std::endl;

    return 0;
}


#include <iostream>

void print_char(char c = '*', int count = 10) {
    for (int i = 0; i < count; ++i) {
        std::cout << c;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "Вывод с аргументами по умолчанию:" << std::endl;
    print_char();

    std::cout << "Вывод с указанным символом:" << std::endl;
    print_char('#');

    std::cout << "Вывод с указанным количеством:" << std::endl;
    print_char('=', 5);

    return 0;
}
