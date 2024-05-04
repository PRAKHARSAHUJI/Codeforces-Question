// https://codeforces.com/problemset/problem/32/B


//    < . >   as  0
//    < -. >   as  1
//    < -- >   as  2


#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    
    for(int i = 0 ; i < s.length() ; i++ )
    {
        if(s[i]=='-' && s[i+1]=='.')
        {
        cout<<1;
        i+=1;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
        cout<<2;
        i=i+1;
        }
        // else if(s[i]=='.')
        else
        cout<<0;

    }
 

}