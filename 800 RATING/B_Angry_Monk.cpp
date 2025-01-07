

// https://codeforces.com/contest/1992/problem/B

// Greedy Math Sortings *800 Rating 


//  ------------------------------------------------- Correct Code  ----------------------------------------------


#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n; cin >> n;
    int k; cin >> k;
    int arr[k];
    int mx = INT_MIN;
    for(int i = 0; i < k; i++) 
    {
    cin >> arr[i];
    mx = max(mx,arr[i]);    
    } 

    int cnt = 0;
    for(int i = 0; i < k; i++)
    {
        // cout << cnt <<endl;
        if(arr[i] == 1)
        cnt++;
        else
        {
            cnt += (2 * arr[i]) - 1;
        }
    }

    cnt -= (2 * mx) - 1;

    cout << cnt << endl;


    
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
    solve();
    }
}


/*

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
 
        vector<int> v(k);
 
        for (int i = 0; i < k; i++)
            cin >> v[i];
 
        sort(v.rbegin(), v.rend());
 
        int cnt = 0;
        for (int i = 1; i < k; i++)
        {
            cnt += v[i];
 
            if (v[i] >= 2)
                cnt += v[i] - 1;
        }
 
        cout<<cnt<<"\n";
    }
}

*/
