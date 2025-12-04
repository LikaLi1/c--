#include <iostream>
using namespace std;

int isEven(int a)
{
    if (a % 2 == 0)
    {
        return true;
    } else {
        return false;
    }
}
    
int main() {
    int a;

    cout << "Enter number: " << endl;
    cin >> a;

    cout << "Is the number even? " << isEven(a) << endl;

    return 0;
}
