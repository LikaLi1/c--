#include <iostream>
using namespace std;

inline double maxOfThree(double a, double b, double c) {
    return std::max({ a, b, c });
}

inline double maxOfThreeAlt(double a, double b, double c) {
    if (a >= b && a >= c) {
        return a;
    }
    else if (b >= a && b >= c) {
        return b;
    }
    else {
        return c;
    }
} 

int main() {

    double x = 10.5, y = 25.7, z = 15.2;
    std::cout << "Max: " << maxOfThree(x, y, z) << std::endl;
    return 0;
}
