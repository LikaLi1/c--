#include <iostream>
void checkPointerAndValue(int* ptr) {
    if (ptr != nullptr && *ptr > 0) {
        std::cout << "The pointer is not null and the value is positive\n";
    } else {
        std::cout << "Verification failed\n";
    }
}


#include <iostream>
int a = 0;
if (false && (a++ > 0)) {
}


#include <iostream>
#include <vector>
void printValues(std::vector<int*> arr) {
    for (auto ptr : arr) {
        if (ptr != nullptr && *ptr > 0) {
            std::cout << *ptr << ' ';
        }
    }
    std::cout << '\n';
}


#include <iostream>
void tryChangeByValue(int n) {
    n = 100;
}


#include <iostream>
void changeByRef(int& n) {
    n = 200;
}
void changeByPtr(int* n) {
    if (n != nullptr) {
        *n = 300;
    }
}


#include <iostream>
void incrementByPointer(int* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        ++arr[i];
    }
}

template <size_t N>
void incrementByReference(int (&arr)[N]) {
    for (size_t i = 0; i < N; ++i) {
        ++arr[i];
    }
}


#include <iostream>
void printArray(const int* arr, size_t size) {
    for (size_t i = 0; i < size; ++i) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}


#include <iostream>
void tryModify(const int* arr, size_t size) {
}


int (*compare)(int, int);


#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}


#include <iostream>
int a = 5, b = 10;
int (*funcPtr)(int, int) = max;
std::cout << funcPtr(a, b) << '\n'; 

funcPtr = min;
std::cout << funcPtr(a, b) << '\n';


#include <iostream>
void compareAndPrint(int a, int b, int (*comp)(int, int)) {
    std::cout << comp(a, b) << '\n';
}


#include <iostream>
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { 
    if (b == 0) {
        std::cerr << "Division by zero!\n";
        return 0;
    }
    return a / b; 
}

typedef int (*Op)(int, int);

Op operations[] = {add, subtract, multiply, divide};


#include <iostream>
int performOperation(size_t index, int a, int b) {
    if (index >= sizeof(operations)/sizeof(operations[0])) {
        std::cerr << "Incorrect index\n";
        return 0;
    }
    return operations[index](a, b);
}


#include <iostream>
typedef int (*ProcessFunc)(int);

int increase(int x) { return x + 1; }
int decrease(int x) { return x - 1; }

ProcessFunc getProcessingFunc(bool increaseFlag) {
    return increaseFlag ? increase : decrease;
}


auto funcPtr = getProcessingFunc(true);


#include <iostream>
void applyAndPrint(int value, int (*func)(int)) {
    std::cout << func(value) << '\n';
}


#include <iostream>
int main() {
    int (*menu[])(int) = {increase, decrease};

    int choice, value;
    std::cout << "Enter num: ";
    std::cin >> value;
    std::cout << "Select 0 to increase, 1 to decrease: ";
    std::cin >> choice;

    if (choice < 0 || choice >= sizeof(menu)/sizeof(menu[0])) {
        std::cerr << "Incorrect\n";
        return 1;
    }

    std::cout << "Rezult: " << menu[choice](value) << '\n';

    return 0;
}
