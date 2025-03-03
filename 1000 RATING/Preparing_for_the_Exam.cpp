// https://codeforces.com/contest/2051/problem/C

// Constructive Algorithms Implementation *1000 Rating

// -------------------------------------------- Correct Code --------------------------------------

#include<bits/stdc++.h>
using namespace std;
void solve() {
    
    long long n; cin >> n;
    long long m; cin >> m;
    long long k; cin >> k;

    int arr[m];

    for(int i = 0; i < m; i++) cin >> arr[i];
    
    int brr[k];
    for(int i = 0; i < k; i++) cin >> brr[i];
    
   
    




    if(n-k > 1){
        for(int i = 0; i < m; i++){
            cout << 0;
        }
        cout << endl;
    }
    else if(n == k){
        for(int i = 0; i < m; i++){
            cout << 1;
        }
        cout << endl;
    }
    else{
        unordered_map<int,int>mp;
        for(int i = 0; i < k; i++){
         mp[brr[i]]++;
        }
     
        for(int i = 0; i < m; i++){
             if(mp[arr[i]] == 0){
                 cout << 1;
             }else{
                 cout << 0;
             }
        }
        cout << endl;
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
