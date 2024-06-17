// https://codeforces.com/problemset/problem/474/A



// Implementation 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    char l ;
    cin >> l;
    string s;
    cin >> s;
    string s1 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string s_new;
    for(int i = 0 ; i < s.length();i++)
    {
        if(l == 'R')
        {
        for(int j = 0 ; j < s1.length();j++)
        {
            if(s[i]==s1[j])
            s_new+=s1[j-1];
        }
        }
        else
        {
        for(int j = 0 ; j < s1.length();j++)
        {
            if(s[i]==s1[j])
            s_new+=s1[j+1];
        }
        }
    }
    cout<<s_new;
}
