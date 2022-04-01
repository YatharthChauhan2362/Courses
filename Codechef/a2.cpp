#include <iostream>
#include <bits/stdc++.h>
#define long long
using namespace std;


int A[1000000];

int main() {
    int n_sticks;
    cin >> n_sticks;
    for (int i = 0; i < n_sticks; i++) {
        cin >> A[i];
        //("%d", A+i);
    }
    sort(A, A+n_sticks);
    reverse(A, A+n_sticks);

    while (n_sticks>0) {

        int s = A[n_sticks-1];

        for (int i = n_sticks-1; i >= 0; i--) {
            A[i]-=s;
        }

        cout<<n_sticks<<endl;
        //("%d\n", n_sticks);
        while (n_sticks>0 && !A[n_sticks-1]) 
        n_sticks--;
    }

    return 0;
}