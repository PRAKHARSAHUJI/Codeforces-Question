// https://codeforces.com/contest/124/problem/A

// Math 1000 Rating

// --------------------------------  Correct Code ----------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    t =1;
    // cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a; cin >> a;
        long long b; cin >> b;
        int ans = 0;
        for(int i = n - b; i <= n; i++){
            if(i - 1 >= a) ans++;
        }
        cout << ans << endl;

    }
}