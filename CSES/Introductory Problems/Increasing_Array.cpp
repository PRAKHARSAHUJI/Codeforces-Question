

// https://cses.fi/problemset/task/1094

// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n; cin >> n;
    long long arr[n];
    for(long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long ans = 0;
    for(long long i = 1; i < n; i++)
    {
        if(arr[i]< arr[i-1] )
        {
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << ans;

}


