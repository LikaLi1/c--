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
    cout << "Количество чётных элементов: " << countEven(arr, size) << endl;
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
    // Создаем список и считаем сумму
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


на 6 остановилась
