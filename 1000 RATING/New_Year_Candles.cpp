
// https://codeforces.com/problemset/problem/379/A

//  Implementation *1000 Rating 

// ------------------------------------ Correct Code   -------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    int ans = a;
    while(a >= b){
        ans += a / b;
        a = a / b + (a % b);
        // cout << ans <<" "<< rem <<" " << a << " "<< b << endl;

    }
    cout << ans;
    
    
}

/*

// ------------------------------------ Correct Code   -------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b;
    cin >> a >> b;
    
    
    cout << ((a-1)/(b-1) + a);
}

*/
