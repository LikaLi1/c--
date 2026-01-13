#include <iostream>
using namespace std;

inline int maxValue(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    cout << maxValue(-10, 5);
    return 0;
}
