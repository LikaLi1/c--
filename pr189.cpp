#include <iostream>

int* createArray(int size) {
    int* arr = new int[size];
    return arr;

}
int main()
{
    int* data = createArray(10);

    delete[] data;
}
