#include <iostream>
using namespace std;

inline int module(int a) {
    if (a < 0) {
        return -a;
    }
    else {
        return a;
    }
}

int main() {
    cout << module(-5);
    return 0;
}
