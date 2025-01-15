
// https://codeforces.com/contest/2007/problem/B

// Data Structures Greedy *900 Rating

// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    while(t--){
        long long n,m;
        cin >> n >> m;
        
        int arr[n];
        int mx = -1;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mx = max(mx,arr[i]);
        }
        while(m--){
            char sign;
            cin >> sign;
            long long l,r;
            cin >> l >> r;
            if(mx >= l && mx <= r){
                if(sign == '+')
                    mx++;
                else
                    mx--;
            }
            cout << mx;
        }
        
    }
        cout << endl;

    
}
