// https://codeforces.com/problemset/problem/467/A

#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int t ;
    cin>>t;
    int count = 0;
    while(t--)
    {
        int a ;
        int b;
        cin >> a ;
        cin >> b;
        
        if(a+2 < b)
        {
            count++;
        }

    }
    cout<<count<<endl;

}