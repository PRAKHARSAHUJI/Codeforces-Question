// https://codeforces.com/problemset/problem/59/A
#include <bits/stdc++.h>
using namespace std ;
int main()
{
    string s;
    cin>>s;
    int count_lower = 0;
    int count_upper = 0;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if( s[i] >= 97)
            count_lower++;
        else
            count_upper++;

    }
    if(count_lower < count_upper)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<<s;

    }
    else 
    {   
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s;
    }


}