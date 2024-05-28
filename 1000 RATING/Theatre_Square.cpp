// https://codeforces.com/contest/1/problem/A




#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c ;

    long long x = a/c + (a%c!=0);
    long long y = b/c + (b%c!=0);


    cout << x*y; 

}