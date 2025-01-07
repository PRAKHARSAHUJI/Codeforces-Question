


#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9 + 7;
void solve()
{
    long long n; cin >> n;
    long long ans = 1;
    for(long long i = 0; i < n; i++)
    {
        ans = (ans * 2) % MOD;
    }
    cout << ans;
}
int main()
{

    solve();
}
