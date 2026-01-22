#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int A;
    std::cout << "Enter number A: ";
    std::cin >> A;

    int limit = A < 0 ? -A : A;

    std::cout << "B:\n";

    for (int B = -limit; B <= limit; ++B) {
        if (B == 0) continue; 

        long long B_squared = (long long)B * B;
        long long B_cubed = B_squared * B;

        if (A % B_squared == 0) {
            if (A % B_cubed != 0) {
                std::cout << B << std::endl;
            }
        }
    }

    return 0;
}
