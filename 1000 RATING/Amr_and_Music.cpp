
// https://codeforces.com/problemset/problem/507/A


// greedyimplementationsortings*1000


//  ------------------------------------------------- Correct Code  ----------------------------------------------


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int a; cin >> a;
    vector<pair<int,int>>arr(n);

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i + 1;
    }
    sort(arr.begin(), arr.end());
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++ )
    {
        sum += arr[i].first;
        if(sum > a)
        {
            break;
        }
        cnt++;
    }
    cout << cnt << endl;
    for(int i = 0; i < cnt; i++ )
    {
        cout << arr[i].second << " ";
    }
}
int main()
{
    solve();
}