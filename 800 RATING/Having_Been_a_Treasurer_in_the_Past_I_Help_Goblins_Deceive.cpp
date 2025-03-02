
// https://codeforces.com/contest/2072/problem/B

// Combinatorics Constructive Algorithms Strings

// -------------------------------------------- Correct Code --------------------------------------

#include<bits/stdc++.h>
using namespace std;
void solve() {
    
    long long n;
    cin >> n;
    string s; cin >> s;
    long long top = 0;
    long long down = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '-'){
            top++;
        }else{
            down++;
        }
    }
    long long ans = down * (top / 2) * ((top+1)/2);
    if(top < 2){
        cout << 0 << endl;
    }else{
        cout << ans << endl;
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