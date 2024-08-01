#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    if(s.length()==2)
    {
        if(s[0]<=s[1])
        cout<<s;
        else
        cout<<s[1]<<s[0];
    }
    // else
    // {
    //     for(int i = 0 ;i<s.length();i++)
    //     {

    //     }
    // }

}