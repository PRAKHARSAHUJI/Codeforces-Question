// https://codeforces.com/contest/1335/problem/A

// Math




/*
6 -> 4,2 ; 5,1
8 -> 7,1 ; 6,2 ; 5,3


3 -> 2,1 
5 -> 4,1 ; 3,2 
*/


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ; 
    cin>> t ;

    while(t--)
    {

    int n ;
    cin >> n ;
    
    if(n%2==0)
    {
        cout<<(n/2)-1<<"\n";
    }
    else
    {
        cout<<(n/2)<<"\n";
    }
    }
}