const int* p1;


const int* p1;
int a = 10;
p1 = &a;


int* const p2;


int b = 15;
int* const p2 = &b;


*p2 = 25;


const int* const p3;


const int x = 100;
const int* const p3 = &x;


const int* p;


int a = 5, b = 10;
const int* p = &a;
p = &b;


const int x = 10;
int y = 20;
const int* p = &x;
*p = y;
p = &y;


#include <iostream>
int main() {
    double* p = new double; 
    *p = 3.14;
    std::cout << *p << std::endl;
    delete p;
    return 0;
}


#include <iostream>
int main() {
    int n = 10;
    int* arr = new int[n];

    for(int i=0; i<n; ++i) {
        arr[i] = i * 3;
    }

    for(int i=0; i<n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;
    return 0;
}


int max = arr[0];
for(int i=1; i<n; ++i) {
    if(arr[i] > max)
        max = arr[i];
}
std::cout << "Max: " << max << std::endl;


delete[] arr;


int* arr = new int[5];
delete arr; 
delete[] arr; 
