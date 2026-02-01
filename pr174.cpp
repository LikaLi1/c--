#include <iostream>
using namespace std;

inline int inRange(int num, int min, int max) {
    return num >= min && num <= max;
}

int main() {
    if (inRange(10, 5, 15)) {
        cout << "Lies in the range" << endl;
    }
    return 0;
}
