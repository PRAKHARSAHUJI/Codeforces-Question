// https://codeforces.com/contest/1808/problem/A

// Brute Force Implementation *900 Rating

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
        long long l,r;
        cin >> l >> r;
        int num = 0;
        
        int ans = -1;

        for(int i = l; i <= min(r,l+100); i++)
        {
            int mx = 0;
            int mn = 10; 
            int number = i;
            int lucky = 0;
            while(number != 0){

                mx = max(mx , number%10);
                mn = min(mn , number%10);
                number /= 10;

                lucky = mx - mn;
                if(lucky > ans ){
                   ans = lucky;
                   num = i;
                }
            }
        }

        cout << num << endl;
        
    }

    
}
