// https://codeforces.com/contest/1977/problem/A

// Math

/*
3 - +1,-1,+1 = 1 ; +1,+1,-1 = 1 ; +1,+1+1 = 3


4 = +1,+1,+1,+1 = 4 ; +1,-1,+1,+1 = 2 ; +1,+1,-1,+1 = 2 ; +1,+1,+1,-1 = 2 ; +1,1,-1,-1 = 0 ; +1,+1,-1,-1 = 0 ;

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x, y;
        cin >> x >> y;

        if (x < y)
            cout << "NO" << "\n";
        else
        {
            if (x % 2 != 0)
            {
                if (y % 2 != 0)
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
            else
            {
                if (y % 2 == 0)
                    cout << "YES" << "\n";
                else
                    cout << "NO" << "\n";
            }
        }
    }
}



// #include <bits/stdc++.h>
// using namespace std;
 
// int main () {
//   ios_base::sync_with_stdio(0); cin.tie(0);
//   int T;
//   cin >> T;
//   while (T--) {
//     int n, m;
//     cin >> n >> m;
//     cout << (n >= m && (n%2) == (m%2) ? "Yes" : "No") << '\n';
//   }
// }





// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int a,b;
//         cin>>a>>b;
 
//         if(a-b<0 || (a-b)%2!=0)
//         cout<<"NO"<<endl;
//         else
//         cout<<"YES"<<endl; 
//     }
// }