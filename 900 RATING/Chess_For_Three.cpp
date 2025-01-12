// https://codeforces.com/contest/1973/problem/A


// ------------------------------------ Correct Code   -------------------------------------

// Brute Force DP Implementation Math *900 Rating


/*
#include <bits/stdc++.h>
using namespace std;
int main()

{
    int t;
    cin >> t;
    while (t--)
    {
        
        int p1,p2,p3;
        cin >> p1 >> p2 >> p3;
        int check = p1 + p2 + p3;

        if(check % 2 == 0){
            int mx = max(p1,max(p2,p3));
            if(mx > check - mx)
            cout << check - mx << endl;
            else
            cout << check / 2 << endl;
        }
        else{
            cout << -1 << endl;
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
        
        int p1,p2,p3;
        cin >> p1 >> p2 >> p3;
        if((p1+p2+p3) % 2 == 0){
            cout << min(p1+p2 , (p1+p2+p3)/2) << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}
