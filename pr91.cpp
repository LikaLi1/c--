#include <iostream>
using namespace std;

inline int perimeter(int a, int b) {
    return 2 * (a + b);
}

int main() {
    cout << perimeter(1, 4);
    return 0;
}
