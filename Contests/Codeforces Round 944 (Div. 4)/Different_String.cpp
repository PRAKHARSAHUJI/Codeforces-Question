// https://codeforces.com/contest/1971/problem/B

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.length() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            bool all_same = true;
            for (int i = 1; i < s.length(); i++)
            {
                if (s[i] != s[0])
                {
                    all_same = false;
                    break;
                }
            }
            if (all_same)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;

                string r = s;
                sort(r.begin(), r.end());

                if (r == s)
                {
                    reverse(r.begin(), r.end());
                }

                cout << r << endl;
            }
        }
    }
    return 0;
}