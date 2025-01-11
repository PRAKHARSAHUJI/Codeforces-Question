


// https://codeforces.com/problemset/problem/1921/C

// Greedy Math 900 Rating

//  ------------------------------------------------- Correct Code  ----------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long arr[n];
        long long f,a,b;
        cin >> f >> a >> b;
        arr[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }

        long long ans = 0;

        for(int i = 1; i <= n; i++){
            ans += min((arr[i]- arr[i - 1]) * a , b);
        }
        if(ans < f)
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
}
