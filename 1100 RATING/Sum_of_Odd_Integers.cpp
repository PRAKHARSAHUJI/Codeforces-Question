

// https://codeforces.com/problemset/problem/1327/A

// Math 1100 Rating

// // -----------------------------------------------Correct Code---------------------------------------------



#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n; cin>>n;
        long long k; cin>>k;

        long long sum = k*k;
        if(n>=sum)
        {
        if(n%2==0 && k%2==0)
        cout<<"YES"<<endl;
        else if(n%2!=0 && k%2!=0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }

}

