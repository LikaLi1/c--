#include <iostream>
using namespace std;

inline int min_of_three(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    }
    else if (b <= a && b <= c) {
        return b;
    }
    else {
        return c;
    }
}

int main() {
    cout << min_of_three(10, 4, 8);
    return 0;
}
