
#include <bits/stdc++.h>

using namespace std;
int main()
{
    {
        int n; cin>>n;
        int m; cin>>m;
        double arr[n];
        int brr[n];
        for(int i =0 ;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i =0 ;i<n;i++)
        {
            cin>>brr[i];
        }
        double total = 0 ;

        for(int i =0 ;i<n;i++)  
        {
            if(brr[i]>=m)
            {
            total+=arr[i];
            }
        }
        for(int i =0 ;i<n;i++)
        {
            if(brr[i]<m)
            {
            cout<<"0.000000000"<<" ";
            }
            else
            cout<<fixed<<setprecision(9)<<arr[i]/total<<" ";
        }
    } 
}