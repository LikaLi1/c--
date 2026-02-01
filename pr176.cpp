#include <iostream>
using namespace std;

inline int sumToN(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++)
        s += i;
    return s;
}

int main() {
    int n = 10;
    cout << sumToN(n) << endl;

    return 0;
}
