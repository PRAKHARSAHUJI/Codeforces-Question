// https://codeforces.com/problemset/problem/1475/A

// MATH , Number Theory 


// ---------------------------------- CORRECT CODE -------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        if((n&(n-1) )== 0) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
}


// to check power of 2  { n & (n-1) == 0 } 

// to check even { n & 1 == 0 }



// ---------------------------------- CORRECT CODE -------------------------------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long n;
//         cin >> n;
//         while(n%2==0)
//         n=n/2;

//         if(n==1) cout<<"NO"<<"\n";
//         else  cout<<"YES"<<"\n";
//     }
// }
