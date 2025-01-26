
// https://codeforces.com/problemset/problem/476/A

//  Implementation Math *1000 Rating 


// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    bool flag = true;
    if(m > n){
        cout << -1 << endl;
    }
    else if(n % 2 == 0){
        int ans  = n / 2;
        while(ans <= n){
            if(ans % m == 0){
                cout << ans;
                flag = false;
                break;
            }
            else{

                ans += 1;
            }
        }
        if(flag){
            cout << -1 << endl;
        }
    }
    else if(n % 2){
        int ans  = (n / 2) + 1;
        while(ans <= n){
            if(ans % m == 0){
                cout << ans;
                flag = false;
                break;
            }
            else{

                ans += 1;
            }
        }
        if(flag){
            cout << -1 << endl;
        }
    }
}


/*

29 7
Participant's output
7
Jury's answer
21

*/