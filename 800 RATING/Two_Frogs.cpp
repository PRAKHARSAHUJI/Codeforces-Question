// https://codeforces.com/contest/2055/problem/A

// ------------------------------------ Correct Code   -------------------------------------

// Constructive Algorithms Games Greedy


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        
        int n,a,b;
        cin >> n >> a >> b;

        if( abs(a-b)% 2 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }

    
}
