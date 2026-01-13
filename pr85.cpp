#include <iostream>
using namespace std;

inline int sign(int a) {
    if (a > 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cout << sign(5);
    return 0;
}
