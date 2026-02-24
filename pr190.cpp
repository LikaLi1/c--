#include <iostream>

void change(int* x) {
    *x = 100;
}

int main()
{
    int a = 5;
    change(&a);
    std::cout << a;
}

#include <iostream>

void change(int& x) {
    x = 100;
}

int main()
{
    int a = 5;
    change(a);
    std::cout << a;
}
