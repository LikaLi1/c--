#include <iostream>
using namespace std;

inline bool parity(int a) {
    if (a % 2 == 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cout << parity(10);
    return 0;
}
