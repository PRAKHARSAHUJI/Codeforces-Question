
// https://codeforces.com/problemset/problem/903/C

// Greedy *1200 Rating


// // -----------------------------------------------Correct Code---------------------------------------------



#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    
    int arr[n];
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    int mx = -1;
    for(int i = 0 ; i<n;i++)
    {
    int cnt = 0;
        for(int j = 0 ; j<n;j++)
        {
            if(arr[i]==arr[j])
            cnt++;
        }
        mx = max(mx,cnt);
    }
    cout<<mx;
    
   
}
