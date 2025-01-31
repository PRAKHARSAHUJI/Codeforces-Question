// https://codeforces.com/problemset/problem/1353/C

// MATH 1000 RATING


// --------------------------------  Correct Code ----------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long x = (n - 1) / 2;
        
        long long ans = (x * (x + 1) * ((2 * x) + 1)) / 6;
        cout << 1LL * ans * 8 << endl;

    }
}

/*

//  TLE 
        for(int i = 1; i <= a; i++)
        {
            for(int j = 1; j <= n; j++){
                if(i == a && j == a) break;
                ans += max(abs(a - i), abs(a - j));
            }
        }
        ans = 1LL * ans * 2;
        cout << ans << endl;
*/
 
/*

// --------------------------------  Correct Code ----------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long ans; cin >> ans;

        for(int i = 1; i <= n / 2; i++){
            ans += i * 1LL * i;
        }
        cout << ans * 1LL * 8 << endl;

    }
}



*/

