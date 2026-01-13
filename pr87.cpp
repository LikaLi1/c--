#include <iostream>
using namespace std;

inline int arithmetic_mean(int a, int b) {
    return a + b / 2;
}

int main() {
    cout << arithmetic_mean(5, 10);
    return 0;
}
