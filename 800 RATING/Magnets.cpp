// https://codeforces.com/problemset/problem/344/A



#include <bits/stdc++.h>
using namespace std ;
int main()
{
    int n ;
    cin >> n ;
    int count=1;
    int arr[n];
    for(int i =0; i<n ; i++)
    {
        cin>>arr[i];
    }
    for(int i =1; i<n ; i++)
    {
        if(arr[i-1] == arr[i])
            count +=0;
        else
            count +=1;  

    }
    cout<<count<<endl;
}