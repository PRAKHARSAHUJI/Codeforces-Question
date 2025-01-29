

// https://codeforces.com/contest/1900/problem/B

// DP Math *900 Rating


// --------------------------------  Correct Code ----------------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){

        int a,b,c;
        cin >> a >> b >> c;
        int cnteven = 0;
        int cntodd = 0;
        if(a % 2 == 0) cnteven++;
        else cntodd++;
        if(b % 2 == 0) cnteven++;
        else cntodd++;
        if(c % 2 == 0) cnteven++;
        else cntodd++;

        if(cnteven == 3) cout << "1 1 1" << endl;
        else if(cntodd == 3) cout << "1 1 1" << endl;
        else if(cnteven == 2){
            if(a % 2 == 0)
            cout << 0 <<" ";
            else
            cout << 1 <<" ";
            if(b % 2 == 0)
            cout << 0 <<" ";
            else
            cout << 1 <<" ";
            if(c % 2 == 0)
            cout << 0 <<" ";
            else
            cout << 1 <<" ";
        }
        else{
            if(a % 2 == 0)
            cout << 1 <<" ";
            else
            cout << 0 <<" ";
            if(b % 2 == 0)
            cout << 1 <<" ";
            else
            cout << 0 <<" ";
            if(c % 2 == 0)
            cout << 1 <<" ";
            else
            cout << 0 <<" ";

        }
        cout << endl;
    }
    
    
}
