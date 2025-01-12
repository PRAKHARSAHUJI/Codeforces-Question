// https://codeforces.com/contest/1988/problem/A


// Brute Force Greedy Implementation Math*900

// ------------------------------------ Correct Code   -------------------------------------


/*
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n,k; cin >> n >> k;

        if(n == 1 )
            cout << 0 << endl;
        else if(k > n )
            cout << 1 << endl;
        else{
            int cnt = 0;
            while(n > 1){
                cnt++;
                n -= (k - 1);
            }
            cout << cnt << endl;
        }
    }
}

*/


// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        
        int n,k; cin >> n >> k;

        cout << ceil((double)(n-1) / (k-1)) << endl;
        
        
        // ceil  method ((n - 1) + (k - 2)) / (k - 1); 
        // ceil(n / k) = (n+k-1)/k; 


    }
}