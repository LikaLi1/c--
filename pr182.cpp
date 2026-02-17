#include <iostream>
using namespace std;

int counter = 0;

void incrementCounter() {
    counter++;
}

void printCounter() {
    cout << "Current counter: " << counter << endl;
}

int main() {
    printCounter();
    incrementCounter();
    incrementCounter();
