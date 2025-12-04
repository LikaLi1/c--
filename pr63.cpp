#include <iostream>
using namespace std;

int maxelement(int a, int b, int c) {
    int max = a;
    
    if (b > max) 
    {
          max = b;
    }

    if (c > max) 
    {
        max = c;
    }
    
    return max;
}

int main() {
    int a, b, c;

    cout << "Enter number up to 1000: " << endl;
    cin >> a;
    cout << "Enter number up to 1000: " << endl;
    cin >> b;
    cout << "Enter number up to 1000: " << endl;
    cin >> c;

    cout << "Max = " << maxelement(a, b, c) << endl;

    return 0;
}
