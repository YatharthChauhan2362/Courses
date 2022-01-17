// Code By 20DCE019 - Yatharth Chauhan

#include <iostream>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n, count = 0, result = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 != 0)
            {
                count = 0;
            }
            else
            {
                count++;
                result = max(result, count);
            }
        }
        cout << result << endl;
    }
    return 0;
}