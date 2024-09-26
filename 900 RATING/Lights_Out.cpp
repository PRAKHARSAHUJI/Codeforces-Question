// https://codeforces.com/problemset/problem/275/A

// Implementation


// // -----------------------------------------------Correct Code---------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
   int a1,a2,a3,a4,a5,a6,a7,a8,a9;
   cin >>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9;
   int a11,a22,a33,a44,a55,a66,a77,a88,a99;
   a11 = a1+a2+a4;
   a22 = a1+a2+a3+a5;
   a33= a3+a2+a6;
   a44 = a4+a1+a5+a7;
   a55= a2+a5+a4+a6+a8;
   a66=a3+a9+a5+a6;
    a77=a7+a8+a4;
    a88=a8+a9+a7+a5;
    a99=a9+a8+a6;

    if(a11%2) cout<<0;else cout<<1;
    if(a22%2) cout<<0;else cout<<1;
    if(a33%2) cout<<0;else cout<<1;
    cout<<endl;
    if(a44%2) cout<<0;else cout<<1;
    if(a55%2) cout<<0;else cout<<1;
    if(a66%2) cout<<0;else cout<<1;
    cout<<endl;
    if(a77%2) cout<<0;else cout<<1;
    if(a88%2) cout<<0;else cout<<1;
    if(a99%2) cout<<0;else cout<<1;
    cout<<endl;

}
