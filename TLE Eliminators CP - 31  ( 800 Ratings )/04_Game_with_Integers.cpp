// https://codeforces.com/problemset/problem/1899/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    int n ;
    cin >> n;
    if((n-1)%3==0)
    cout<<"First"<<"\n";
    else if((n+1)%3==0) 
    cout<<"First"<<"\n";
    else
    cout<<"Second"<<"\n";
    }
}