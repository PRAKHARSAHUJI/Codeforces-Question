// https://codeforces.com/problemset/problem/427/A



#include <bits/stdc++.h>
using namespace std;
int main()
{
int  n ;
cin >> n ; 

int check = 0 ;  
int count = 0 ;  
int arr[n] ; 
for(int i =0 ; i<n ; i++)
{
    cin>>arr[i];
}
for(int i =0 ; i<n ; i++)
{
    check+= arr[i];
    if(check < 0)
    {
    count++;
    check=0;
    }
}
cout<<count;

}
