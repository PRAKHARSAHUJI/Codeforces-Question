
// https://codeforces.com/contest/2060/problem/A

// Brute Force *800 Rating

// ------------------------------------ Correct Code ------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int ans = 1;
        int res = 0;
        int a1, a2, a4, a5;
        cin >> a1 >> a2 >> a4 >> a5;

        int a3 = a1 + a2;

        if (a3 + a2 == a4)
        {
            ans++;
        }
        if (a3 + a4 == a5)
        {
            ans++;
        }

        res = max(res, ans);

        ans = 0;

        a3 = a4 - a2;
        if (a3 + a2 == a4)
        {
            ans++;
        }
        if (a3 + a4 == a5)
        {
            ans++;
        }
        res = max(res, ans);
        ans = 0;

        cout << res << endl;
    }
}
