

// https://codeforces.com/problemset/problem/567/A

// // -----------------------------------------------Correct Code---------------------------------------------


// Greedy Implementation *900 Rating 


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int brr[n];
    for(int i =0;i<n;i++)
    {
        brr[i] = arr[i];
    }
    sort(brr, brr + n);

    int mn = 0;
    int mx = 0;
    for(int i = 0; i < n; i++)
    {
        if(i==0)
        {
         mn = (arr[i+1]-arr[i]);
         mx = (arr[n-1]-arr[i]);

        }
        else if(i==n-1)
        {
         mn = (arr[i]-arr[i-1]);
         mx = (arr[i]-arr[0]);

        }
        else
        {
        mn = min(arr[i+1]-arr[i], arr[i]-arr[i-1]);
        mx = max(arr[i]-arr[0], arr[n-1]-arr[i]);
        }
    cout << mn << " " << mx << endl;
    }    
}








