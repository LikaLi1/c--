#include <iostream>
using namespace std;

int sq(int a)
{
    return a * a;
}
    
int main() {
    int a;

    cout << "Enter number: " << endl;
    cin >> a;

    int result = sq(a);

    cout << "Square of the number: " << result << endl;
    return 0;
}
