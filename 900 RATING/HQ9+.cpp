// https://codeforces.com/problemset/problem/133/A
// Implementation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    bool flag = false ;
    for (int i =0 ; i < s.length();i++)
    {
        if(s[i]=='H'|| s[i]=='Q' ||  s[i]=='9')
        {
        cout<<"YES";
        return 0;
        }
        else
        {
        flag = true;
        }
    }
    if(flag)
    cout<<"NO";
    return 0;
}



// #include <iostream>
// using namespace std;
// int main()
// {
//     string s;
//     cin>>s;

//     for (int i =0 ; i < s.length();i++)
//     {
//         if(s[i]=='H'|| s[i]=='Q' ||  s[i]=='9' || s[i]=='+' )
//         {
//         cout<<"YES";
//         return 0;
//         }
//         else
//         {
//         cout<<"NO";
//         return 0;
//         }

//     }
//     return 0;
// }

