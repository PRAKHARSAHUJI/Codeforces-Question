
// https://codeforces.com/contest/2072/problem/A

// Greedy Implementation Math

// -------------------------------------------- Correct Code --------------------------------------

#include<bits/stdc++.h>
using namespace std;
void solve() {
    
    int n, k, p;
    cin >> n >> k >> p;

    int ans = ceil(abs(k) / (double)p);
    if(ans <= n) {
        cout << ans << endl;
    }else{
        cout << -1 << endl;
    }

}
int main() {
    ios::sync_with_stdio(0), cin.tie(0);
    int tt = 1;
    cin >> tt;
    while (tt--) {
        solve();
    }
}