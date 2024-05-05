// https://codeforces.com/problemset/problem/266/B


#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int number_of_children ;
    cin >> number_of_children ;

    int time ;
    cin >> time ;

    string s ;
    cin >> s ;

    while(time--)
    {
    for(int i = 1 ; i<s.length() ; i++)
    {
        if(s[i-1]=='B' && s[i]=='G')
        {
            s[i-1]='G';
            s[i]='B';
            i++;
        }
    }
    }
    cout << s ;

}