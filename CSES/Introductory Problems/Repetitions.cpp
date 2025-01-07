

// https://cses.fi/problemset/task/1069/

// ------------------------------------ Correct Code   -------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {

        string s;
        cin >> s;
        int cnt;
        int mx = INT_MIN;
        for(int i = 0; i < s.length(); i++)
        {
            cnt = 1;
            char ch;
            ch = s[i];
           while(ch == s[i+1])
           {
            cnt++;
            i++;
           }
            mx = max(mx, cnt);
        }
        cout << mx;
    }
}
