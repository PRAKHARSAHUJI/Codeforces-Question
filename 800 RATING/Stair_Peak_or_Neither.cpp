// https://codeforces.com/problemset/problem/1950/A


#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int t ;
    cin >> t;

    while(t--)
    {
        int a ;
        int b ;
        int c ;
        cin >> a ;
        cin >> b ;
        cin >> c ;

        if(a <b && b < c)
        cout<<"STAIR"<<'\n';
        else if(a <b && b > c)
        cout<<"PEAK"<<'\n';
        else
        cout<<"NONE"<<'\n';    
    }

}