

// https://codeforces.com/problemset/problem/1033/B

// Math Number Theory *1100 Rating

// // -----------------------------------------------Correct Code---------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c = a + b;
        bool check = true;
        if (a - b == 1)
        {
            for (int i = 2; i < c; i++)
            {
                if (c % i == 0)
                {
                    check = false;
                    break;
                }
            }
            if (check)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
            cout << "NO" << endl;
    }
}

