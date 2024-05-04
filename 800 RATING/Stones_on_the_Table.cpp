// https://codeforces.com/problemset/problem/266/A

// #include <bits/stdc++.h>
// using namespace std ; 
// int main ()
// {
//     int length;
//     cin>>length;
//     string s;
//     cin >> s;
//     int count = 0;
//     for(int i = 1; i<s.length() ; i++)
//     {
//         if(s[i-1]==s[i])
//         count++;
//     }
//     cout<<count;

// }


#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int length;
    cin>>length;
    string s;
    cin >> s;
    int count = 0;
    for(int i = 1; i<length ; i++)
    {
        if(s[i-1]==s[i])
        count++;
    }
    cout<<count;

}