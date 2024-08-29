// https://codeforces.com/problemset/problem/479/A

// Brute force , Math

#include <bits/stdc++.h>
using namespace std;
int main()
{

   int a,b,c; 
   cin>>a>>b>>c;
   int arr[8];
   arr[0] = a+(b*c);
   arr[1] = a*(b+c);
   arr[2] = a*(b*c);
   arr[3] = (a+b)*c;
   arr[4] = (a+b)+c;
   arr[5] = a+b+c;


   int mx =INT_MIN;
   for(int i = 0 ; i<6;i++) 
   {
    mx = max(mx,arr[i]);
   }
    cout<<mx;
}