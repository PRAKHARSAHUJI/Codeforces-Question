// https://codeforces.com/problemset/problem/734/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ; 
    cin>>n;
    string s;
    cin>>s;
    int anton_won = 0;
    int danik_won = 0;

    for(int i = 0 ; i<s.length() ; i++)
    {
        if(s[i]=='A')
        anton_won++;
        else
        danik_won++;
    }
    if(anton_won > danik_won)
    cout<<"Anton";
    else if(anton_won < danik_won)
    cout<<"Danik";
    else
    cout<<"Friendship";
}