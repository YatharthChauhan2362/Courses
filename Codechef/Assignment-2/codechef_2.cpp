// Code By 20DCE019 - Yatharth Chauhan

#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n][m];

        int d;
        int result = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int max = INT_MIN;
            int min = INT_MAX;
            for (int j = 0; j < m; j++)
            {
                if (a[i][j] < min)
                {
                    min = a[i][j];
                }
                if (a[i][j] > max)
                {
                    max = a[i][j];
                }
            }
            d = max - min;
            if (d > result)
            {
                result = d;
            }
        }
        cout << result << endl;
    }
    return 0;
}
