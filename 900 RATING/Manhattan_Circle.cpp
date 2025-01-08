
// https://codeforces.com/problemset/problem/1985/D


// Implementation Math *900 Rating

// // -----------------------------------------------Correct Code---------------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long m;
        cin >> m;
        int x = INT_MAX;
        int y = 0;
        int ans = 0;
        int row = 0;

        char s[n+1][m+1];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin>>s[i][j];        
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if(s[i][j]=='#')
                {
                    y = j;
                    break;    
                }
                
            }
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if(s[i][j]=='#')
                {
                   ans = j;
                   if(ans < x)
                   {
                    x = ans;
                    row = i;
                   }
                }
                
            }
        }

        cout << row << " " << y << endl;
    }
}

