
// https://codeforces.com/problemset/problem/1997/A
// Brute Force Implementation Strings *800


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        int index = INT_MAX;
        // string ans = "";
        string ans ;
        int mn = INT_MAX;

        bool flag = false;

        for (int i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                index = i;
                mn = min(mn, index);
                flag = true;
                break;
            }
        }
        if (s.length() == 1)
        {
            if (s[0] == 'z')
                cout << char(s[0] - 1) << s << endl;
            else
                cout << char(s[0] + 1) << s << endl;
        }
        else if (flag)
        {
            for (int i = 0; i <= mn; i++)
            {
                ans += s[i];
            }
            if (s[mn] == 'z')
                ans += char(s[mn] - 1);
            else
                ans += char(s[mn] + 1);
            for (int i = mn + 1; i < s.length(); i++)
                ans += s[i];
            cout << ans << endl;
        }
        else
        {
            if (s[s.length() - 1] == 'z')
                cout << s << char(s[s.length() - 1] - 1) << endl;
            else
                cout << s << char(s[s.length() - 1] + 1) << endl;
        }
    }
}