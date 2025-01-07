
// https://codeforces.com/problemset/problem/1992/C

// Constructive Algorithms Math *900 Rating

//  ------------------------------------------------- Correct Code  ----------------------------------------------


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int m; cin >> m;
    int k; cin >> k;
    vector<int> v;
    for(int i = n; i > 0; i--)
    {
        v.push_back(i);
    }
    sort(v.begin()+(n - m),v.end());

    for(int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    
}
int main()
{
    int t; cin >> t;
    while(t--)
    solve();
}