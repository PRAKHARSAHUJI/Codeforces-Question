// https://codeforces.com/problemset/problem/677/A

#include <bits/stdc++.h>
using namespace std ; 
int main ()
{
    int num_friends;
    int max_height;
    cin>>num_friends;
    cin>>max_height;
    int width_total = 0;
    // int max = 0;
    while(num_friends--)
    {
        int height;
        cin>>height;
        if(height<=max_height)
        width_total+=1;
        else
        width_total+=2;

    }
        cout<<width_total<<endl;
        
}
