// https://codeforces.com/contest/2009/problem/B
// Brute Force , Implementation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin>>n;
        char arr[n][4];
        for(int i =0;i<n;i++)
        {
            for(int j =1;j<=4;j++)
            {
                cin>>arr[i][j];    
            }
        }

        for(int i =n-1;i>=0;i--)
        {
            for(int j =1;j<=4;j++)
            {
                if(arr[i][j]=='#')
                cout<<j<<" ";
                // cout<<arr[i][j]<<" ";    
            }
        }
            cout<<endl;        
    }
    
}



// 3
// 4
// #...
// .#..
// ..#.
// ...#
// 2
// .#..
// .#..
// 1
// ...#
