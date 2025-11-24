#include <iostream>
using namespace std;

int main()
{
    int a[4][5];
    int sum = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
    }
    cout << "Sum: " << sum << endl;

    return 0;
}
