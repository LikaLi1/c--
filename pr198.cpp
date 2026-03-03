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

    cout << "Sum " << N << ": " << sumDigits(N) << endl;

    return 0;
}


#include <iostream>
using namespace std;

int countEven(const int arr[], int size)
{
    if (size == 0)
        return 0;
    int count = (arr[size - 1] % 2 == 0) ? 1 : 0; 
    return count + countEven(arr, size - 1);
}

int main()
{
    int arr[] = { 3, -2, 5, 0, 7, -1 };
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Number of even elements: " << countEven(arr, size) << endl;
    return 0;
}


//Базовый случай рекурсии — это условие выхода из рекурсивной функции, которое прекращает дальнейшие самовызовы, возвращая конкретный результат
// Без него функция уйдет в бесконечный вызов, что приведет к переполнению стека (stack overflow)


#include <iostream>
#include <initializer_list>

template<typename T>
double average(T arg) {
    return static_cast<double>(arg);
}

template<typename T, typename... Args>
double average(T first, Args... args) {
    double sum = first + average(args...);
    return sum;
}

template<typename... Args>
double average_all(Args... args) {
    int count = sizeof...(args);
    if (count == 0) return 0;
    double sum = 0;
    for (auto val : {static_cast<double>(args)...}) {
        sum += val;
    }
    return sum / count;
}

int main() {
    std::cout << average_all(1, 2, 3, 4, 5) << std::endl;
    std::cout << average_all(10.5, 20.5) << std::endl;
    std::cout << average_all() << std::endl;
    return 0;
}

//Отсутствие строгой типизации
//Ошибки при неправильных типах
//Трудность поддержки и читаемости
//Обработка ошибок


#include <iostream>
int main() {
    int var = 5;
    int* p;
    p = &var;
    *p = 10;
    std::cout << var;
    return 0;
}


// int a = 10;
// int* p = &a;
// (*p)++;
// std::cout << a;


// a изначально равно 10
// p — указатель на a
// (*p)++ — увеличивает значение a на 1
// Вывод: 11
// Итоговая строка:
// 11


// оба варианта допустимы и означают одно и то же: объявление указателя на int
// int* p — стилевое предпочтение, указывающее, что p — указатель (*) на int
// int *p — более традиционный стиль, где * сливается с типом int


// NULL — это макрос, обычно определенный как 0
// nullptr — это ключевое слово, введенное в C++11, представляющее нулевой указатель


// int arr[3] = {1, 2, 3};
// int* p = arr;
// std::cout << *(p + 1);
// arr — массив [1, 2, 3]
// p — указатель на первый элемент arr[0] (значение 1)
// *(p + 1) — это элемент массива arr[1], который равен 2
// Итоговая строка:
// 2


// Сложение указателей — не определено и недопустимо, потому что не понятно, что это означает
// Вычитание указателей — позволяет узнать, сколько элементов находится между двумя указателями
// Сравнение указателей — часто используется для проверки, указывают ли они на один и тот же элемент или чтобы определить порядок элементов в массиве


#include <iostream>

int main() {
    int* arr = new int[5];

    for (int i = 0; i < 5; ++i) {
        arr[i] = i + 1;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}


// Утечка памяти — выделенная динамическая память не освобождается
// Со временем в программе может накапливаться всё больше неиспользуемых блоков памяти
// В простых программах это не всегда заметно, но в больших или долгоживущих приложениях — может привести к снижению производительности или сбоям из-за исчерпания доступной памяти
// Важно: Всегда вызывайте delete[], чтобы избежать утечек памяти при использовании new[] для массивов


void incrementByValue(int num) {
    num++;
}
void incrementByReference(int& num) {
    num++;
}
void incrementByPointer(int* num) {
    (*num)++;
}
// При передаче по значению — НЕ изменится, так как передается копия
// При передаче по ссылке — ДА изменится, так как функция работает с оригиналом через ссылку
// При передаче по указателю — ДА изменится, так как функция работает с адресом оригинальной переменной


#include <iostream>
double (*operation)(double, double);


#include <iostream>
double add(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}

int main() {
    double (*operation)(double, double);

    operation = add;
    std::cout << "Sum: " << operation(5.0, 3.0) << std::endl;

    operation = multiply;
    std::cout << "Mul: " << operation(5.0, 3.0) << std::endl;

    return 0;
}


#include <iostream>
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) return a / b;
    else {
        std::cerr << "Del 0!" << std::endl;
        return 0;
    }
}

int main() {
    double (*operations[])(double, double) = {add, subtract, multiply, divide};

    double a = 10, b = 5;

    std::cout << "Sum: " << operations[0](a, b) << std::endl;
    std::cout << "Sub: " << operations[1](a, b) << std::endl;
    std::cout << "Mul: " << operations[2](a, b) << std::endl;
    std::cout << "Del: " << operations[3](a, b) << std::endl;

    return 0;
}


#include <iostream>
typedef int (*FuncPtr)(int);
int multiplyByTwo(int x) {
    return x * 2;
}
void processArray(int* arr, int size, FuncPtr func) {
    for (int i = 0; i < size; ++i) {
        arr[i] = func(arr[i]);
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Before: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    processArray(arr, size, multiplyByTwo);

    std::cout << "After: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
