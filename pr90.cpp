#include <iostream>
using namespace std;

inline int min_of_three(int a, int b) {
    if (a < b) {
        return b;
    }
    else {
        return a;
    }
}

int main() {
    cout << min_of_three(1, 4);
    return 0;
}
