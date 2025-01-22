
// https://codeforces.com/contest/584/problem/A

// Math *1000 Rating


// ------------------------------------ Correct Code   -------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, t;
    cin >> n >> t;
    if(t != 10)
    {

    cout << t;
    for (int i = 1; i < n; i++)
    {
        cout << 0;
    }
    cout << endl;

    }
    else{
        if (n == 1)
        {
            cout << -1;
            return 0;
        }
        cout << t;
    for (int i = 2; i < n; i++)
    {
        cout << 0;
    }
    cout << endl;
    }
}
