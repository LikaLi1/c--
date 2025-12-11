#include <iostream>

void counter() {
    static int count = 0;
    count++;

    std::cout << "Count: " << count << std::endl;
}

int main() {
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}
