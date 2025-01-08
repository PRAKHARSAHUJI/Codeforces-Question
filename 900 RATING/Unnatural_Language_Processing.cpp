
// https://codeforces.com/problemset/problem/1915/D

// Greedy Implementation Strings *900 Ratings


// // -----------------------------------------------Correct Code---------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s; cin >>s;
        for(int i = 0; i < n; i++)
        {
            cout<<s[i];
            if((s[i] == 'a' || s[i] == 'e') && (s[i+2] == 'a' || s[i+2] == 'e'))
            cout << ".";
            if((s[i] == 'b' || s[i] == 'c'|| s[i] == 'd') && (s[i+1] == 'b' || s[i+1] == 'c' || s[i+1] == 'd'  )  )
            cout << ".";
        }
        cout << endl;

    }
}
