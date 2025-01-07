
// https://cses.fi/problemset/task/1083

// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;
    long long arr[t-1];
    long long sum_all=0;
    for(long long i = 0 ; i<t-1;i++)
    {
    cin>>arr[i];
    sum_all+=arr[i];
    }
    long long sum = (t*(t+1))/2;
    
    cout<<sum-sum_all;
}



