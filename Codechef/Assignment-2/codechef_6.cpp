// Code By 20DCE019 - Yatharth Chauhan

#include <bits/stdc++.h>
using namespace std;

void ID_20DCE019()
{
    int n, m;
    cin >> n >> m;

    int start_[n], end_[n];

    for (int i = 0; i < n; i++)
    {
        cin >> start_[i];
        cin >> end_[i];
    }

    int count[m] = {0}, max = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        count[start_[i] - 1]++;
        if (end_[i] < m)
        {
            count[end_[i]]--;
        }
    }

    for (int i = 0; i < m; i++)
    {
        sum = sum + count[i];
        if (max < sum)
        {
            max = sum;
        }
    }
    cout << max << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        ID_20DCE019();
    }

    return 0;
}