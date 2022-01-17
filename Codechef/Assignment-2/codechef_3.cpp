// Code By 20DCE019 - Yatharth Chauhan

#include <bits/stdc++.h>
using namespace std;

void ID_20DCE019()
{
    long long int n, flag_i = 0, flag_d = 0;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0 && arr[i] <= arr[i - 1])
        {
            flag_i = 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i != 0 && arr[i] >= arr[i - 1])
        {
            flag_d = 1;
        }
    }

    if (n == 1)
    {
        cout << "Yes" << endl;
        return;
    }

    if (flag_i == 0 || flag_d == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;

    while (t--)
    {
        ID_20DCE019();
    }

    return 0;
}
