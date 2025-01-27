
// https://codeforces.com/problemset/problem/339/B


// ------------------------------------ Correct Code   -------------------------------------


// Implementation *1000 Rating 


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int arr[m];
    for(int i = 0; i < m; i++){
        cin >> arr[i];
    }
    long long ans = 0;

    ans += arr[0]-1;
    for(int i = 1; i < m; i++){
        if(arr[i] < arr[i - 1]){
            ans += n - arr[i - 1] + arr[i];
        }
        else{
            ans += arr[i] - arr[i - 1];
        }
    }
    cout << ans << endl;
    
}