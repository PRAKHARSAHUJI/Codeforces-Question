
// https://codeforces.com/problemset/problem/1535/B

// Brute Force Greedy Math Number Theory Sortings *900 Rating

//  ------------------------------------------------- Correct Code  ----------------------------------------------



#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n,[](int x,int y){
            return x % 2 < y % 2;
        });
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans += __gcd(arr[i],arr[j]*2) > 1; 
            }
        }
        cout << ans << endl;
	}
}



/*


//  ------------------------------------------------- Correct Code  ----------------------------------------------


#include<bits/stdc++.h>
using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n,[](int x,int y){return x % 2 < y % 2;});
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                ans += __gcd(arr[i],arr[j]*2) > 1; 
            }
        }
        cout << ans << endl;
	}
}



*/