
// https://codeforces.com/problemset/problem/149/A

// Implementation,Greedy,Sortings 

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k ; cin>>k;
    int arr[12];
    for(int i = 0 ;i < 12;i++)
    cin>>arr[i];
    if(k==0)
    {
        cout<<0;
        return 0;
    }
    sort(arr, arr + 12, greater<int>());
    int cnt=0;
    int sum=0;
    
    for(int i = 0 ;i < 12;i++)
    {
        sum +=arr[i];
        if(sum>=k)
        {
            cout<<i+1;
            return 0;
        }
    }
    cout<<-1;

}
