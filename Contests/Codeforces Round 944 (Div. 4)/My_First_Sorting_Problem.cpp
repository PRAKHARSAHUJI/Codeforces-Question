// https://codeforces.com/contest/1971/problem/A




#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
    int x;
    int y;
    cin >> x ;
    cin >> y ;

    if(x < y)
        cout<<x<<" "<<y<<endl;
    else
        cout<<y<<" "<<x<<endl;

    }
}
