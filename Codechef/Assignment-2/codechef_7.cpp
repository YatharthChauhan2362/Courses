// Code By 20DCE019 - Yatharth Chauhan

#include <bits/stdc++.h>
using namespace std;

void ID_20DCE019()
{

    long long int n;
    cin >> n;

    int arr[n], hash[100001] = {0}, start[100001], check[n] = {0};

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (hash[arr[i]] == 0)
        {
            start[arr[i]] = i;
        }
        else
        {
            check[i] = 1;
            check[start[arr[i]]] = 1;
        }
        hash[arr[i]]++;

        int flag = 0;
        while (j < i + 1)
        {
            if (check[j] == 0)
            {
                cout << j + 1 << " ";
                flag = 1;
                break;
            }
            else
            {
                j++;
            }
        }
        if (flag == 0)
        {
            cout << -1 << " ";
        }
    }

    cout << endl;
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