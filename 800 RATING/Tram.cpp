// https://codeforces.com/problemset/problem/116/A

#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int t ;
    cin>>t;
    int passenger_left = 0;
    int max = 0;
    while(t--)
    {
        int a;
        int b;
        cin>>a;
        cin>>b;
        passenger_left -=a;
        passenger_left +=b;
        int total = passenger_left;
        if(total>max)
        max=total;
    }
        cout<<max<<endl;
        
}