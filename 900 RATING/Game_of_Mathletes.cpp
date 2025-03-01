// https://codeforces.com/contest/2060/problem/C

// Games Greedy Sortings Two Pointers *900 Rating

// ------------------------------------ Correct Code ------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        sort(arr.begin(),arr.end());
        int left = 0;
        int right = n-1;
        while(left<right){
            if( (arr[left] + arr[right]) == k){
                ans++;
                left++;
                right--;
            }
            else if( (arr[left] + arr[right]) > k){
                right--;
            }
            else if( (arr[left] + arr[right]) < k){
                left++;
            }
        }

        cout << ans << endl;
    }
}
