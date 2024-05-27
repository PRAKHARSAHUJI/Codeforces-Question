
// https://codeforces.com/problemset/problem/1901/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int min_val = 0; 
        vector<int> v(n+2);
        v[0]=0;
        for(int i = 1 ; i <= n ; i++ )
        {
            cin>>v[i];
        }
        v[n+1]=x;
        for(int i = 1 ; i <= n+1 ; i++ )
        {
           int mx = v[i]-v[i-1];
           if(i==(n+1))
           mx*=2;
           if(mx>min_val)
           min_val=mx;

        }
        cout<<min_val<<"\n";

    }
}




