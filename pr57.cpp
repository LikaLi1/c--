#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;

    int a[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }

    int maxVal = a[0][0];
    int maxI = 0, maxJ = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (a[i][j] > maxVal) 
            {
                maxVal = a[i][j];
                maxI = i;
                maxJ = j;
            }
        }
    }
    cout << "Max = " << maxVal << " at (" << maxI << ", " << maxJ << ")" << endl;

    return 0;
}
