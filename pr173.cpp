#include <iostream>
using namespace std;

inline int square(int a) {
    return a * a;
}

int main() {
  
    std::cout << "Square: " << square(5) << std::endl;
    return 0;
}
