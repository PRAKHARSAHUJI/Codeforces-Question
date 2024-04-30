// https://codeforces.com/problemset/problem/1878/A

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        int a;
        int y =0;
        cin >> x;
        cin >> a;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < x; i++)
        {
            if(a == arr[i])
            {
            cout<<"YES"<<endl;
            y=1;
            break;
            }
            
        }
        if (y==0)
        cout<<"NO"<<endl;
    }
}