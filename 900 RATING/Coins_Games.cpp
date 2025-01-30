
// https://codeforces.com/contest/1972/problem/B

// GAMES 900 RATING 

// --------------------------------  Correct Code ----------------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        int cntU = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == 'U') cntU++;
        }
        if(cntU % 2) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
    
}

