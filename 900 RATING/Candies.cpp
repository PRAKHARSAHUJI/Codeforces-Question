

// https://codeforces.com/problemset/problem/1343/A

// Brute Force Math *900 Rating

// // -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
    
    int n; cin>>n;
    int x = 0;
    for(int i =2;i<n;i++)
    {
        int  y = (pow(2,i) -1);
        if(n % y  == 0)
        {
        x = n / (pow(2,i) -1);
        break;
        }
    }
        cout << x << endl;
    
    }
    
}






