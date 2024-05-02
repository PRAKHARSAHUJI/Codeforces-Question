// https://codeforces.com/problemset/problem/617/A

#include <iostream>
using namespace std;
int main()

{
    int n;
    cin>>n;
    if(n%5==0)
    cout<<n/5;
    else if( n%5 == 1 || n%5 == 2 || n%5 == 3 || n%5 == 4 )
    cout<<(n/5)+1;
    // else if(n%4==0)
    // cout<<n/4;
    // else if(n%3==0)
    // cout<<n/3;
    // else if(n%2==0)
    // cout<<n/2;
    // else if(n==1)
    // cout<<1;
    


}
