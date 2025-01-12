
// https://codeforces.com/contest/1990/problem/A

// Brute Force Games Sortings Greedy *900 Rating 


// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
void solve(){

        int n; cin >> n;
        int arr[n];
        unordered_map<int>mp;
        for(int i =0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(auto it : mp){
            if(it.second % 2 == 1){
                cout << "YES" << endl;
                return;
            }
        }
        cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();   
    }
}

