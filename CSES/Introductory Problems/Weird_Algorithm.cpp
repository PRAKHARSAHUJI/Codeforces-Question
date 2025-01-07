

// https://cses.fi/problemset/task/1068

// ------------------------------------ Correct Code   -------------------------------------



#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t!=1)
    {
        cout<<t<<" ";
        if(t%2)
        {
            t=(t*3)+1;
        }
        else
        {
            t=t/2;
        }
    }
    cout<<1;
}
