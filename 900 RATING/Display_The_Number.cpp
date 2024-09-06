// https://codeforces.com/problemset/problem/1295/A

//  Greedy 900

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;cin>>n;
        while(n>0)
        {
        if(n%2==0)
        {
            cout<<"1";
            n-=2;
        }
        else
        {
           cout<<"7";
            n-=3; 
        }
        }
        cout<<endl;
    
    }
    
}