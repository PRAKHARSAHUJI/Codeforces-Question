// https://codeforces.com/problemset/problem/25/A

// Brute Force *1300 Rating

// -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{    
        int n;cin>>n;
        int arr[n];
        int cnteven=0;
        int cntodd=0;
        for(int i = 0 ;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2)
            cntodd++;
            else
            cnteven++;
        }
        if(cnteven>cntodd)
        {
            for(int i = 0 ;i<n;i++)
            {
                if(arr[i]%2)
                cout<<i+1<<endl;
            }
        }
        else
        {
            for(int i = 0 ;i<n;i++)
            {
                if(arr[i]%2==0)
                cout<<i+1<<endl;
            }
        }
         
    
    return 0;
}
