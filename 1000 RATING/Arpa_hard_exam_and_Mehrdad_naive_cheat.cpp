// https://codeforces.com/problemset/problem/742/A

// Implementation  Math Number Theory *1000 Rating

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
        if(n == 0) cout << 1 << endl;
        else if(n % 8 == 1) cout << 8 << endl;
        else if(n % 8 == 2) cout << 4 << endl;
        else if(n % 8 == 3) cout << 2 << endl;
        else if(n % 8 == 4) cout << 6 << endl;
        else if(n % 8 == 5) cout << 8 << endl;
        else if(n % 8 == 6) cout << 4 << endl;
        else if(n % 8 == 7) cout << 2 << endl;
        else if(n % 8 == 0) cout << 6 << endl;

    }
}