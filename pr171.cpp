#include <iostream>
using namespace std;

inline int absValue(int x) {
    return x < 0 ? -x : x;
}

inline double absValue(double x) {
    return x < 0 ? -x : x;
}


int main() {

    cout << absValue(-2) << endl;
    return 0;
}
