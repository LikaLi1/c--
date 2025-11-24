#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int columnSum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            columnSum += a[i][j];
        }
    }
    cout << "Column: " << columnSum << endl;

    return 0;
}
