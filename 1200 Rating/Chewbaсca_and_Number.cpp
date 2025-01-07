// https://codeforces.com/problemset/problem/514/A

// Greedy Implementation *1200 Rating


// // -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    string s;cin>>s;
    int mn = INT_MAX;
    for(int i = 0 ; i<s.length();i++)
    {
        if(9 - (s[i]-'0') ==0 && i==0)
        cout<<s[0]-'0';
        else if(s[i]-'0' > 9 - (s[i]-'0')  )
        cout<<9 - (s[i]-'0');
        else
        cout<<s[i]-'0';
    }
   
            
}

