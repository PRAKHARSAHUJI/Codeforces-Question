// https://codeforces.com/problemset/problem/1296/B

// Math *900 Rating

//  ------------------------------------------------- Correct Code  ----------------------------------------------



#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
    int ans = 0;
    int coins_back = 0;
	while (t--) {
		long long n;
		cin >> n;
        if(n >= 10){
            ans = n;
            while(n >= 10){
               coins_back = n / 10;
               n = n - (10 * coins_back);
               n = n + coins_back;
               ans += coins_back;

            }
            cout << ans << endl;
        }
        else{
            cout << n << endl;
        }
        
	}
}


// 19
// ans = 19

// coinsback = 19 / 10 = 1
// n = 19 - 10 * 1 = 9
// n = 9  + 1;
// ans + coins_back = 20


// 35
// ans = 35

// coinsback = 35 / 10 = 3
// n = 35 - 10 * 3 = 5
// n = 5  + 3;
// ans + coins_back = 35 + 
