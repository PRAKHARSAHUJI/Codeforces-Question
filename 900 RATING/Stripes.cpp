


// https://codeforces.com/problemset/problem/1742/C


// Implementation *900 Rating

// -------------------------------------Correct Code---------------------------------------------\

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    {
        int cntR;
        int cntB;
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < 8; i++)
        {
            
            cntR = 0;
        
            for(int j = 0; j < 8; j++)
                {
                    if(arr[i][j] == 'R')
                        cntR++;
                    
                }

            if(cntR == 8)
            {
                cout << 'R' <<endl;
                return;
            }

        }

        for (int col = 0; col < 8; col++) 
        {
            cntB = 0;
            for (int row = 0; row < 8; row++)
            {
                
                if (arr[row][col] == 'B')
                    cntB++;
            }

            if (cntB == 8)
            {
                cout << 'B' << endl;
                return;
            }
        }

    }

}
int main()
{
  
    int t;
    cin >> t;
    while (t--)
    solve();
    
}







/*

// -------------------------------------InCorrect Code---------------------------------------------\

 
#include <bits/stdc++.h>
using namespace std;

void solve()
{

    {
        int cntR;
        int cntB;
        char arr[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(int i = 0; i < 8; i++)
        {
            
            cntR = 0;
            cntB = 0;
        
            for(int j = 0; j < 8; j++)
                {
                    if(arr[i][j] == 'R')
                        cntR++;
                    else if(arr[i][j] == 'B')
                        cntB++;
                }

            if(cntR == 8)
            {
                cout << 'R' <<endl;
                return;
            }
            else if (cntB == 8)
            {
                cout << 'B' <<endl;
                return;
            }
        }

        for (int col = 0; col < 8; col++) 
        {
            cntR = 0;
            cntB = 0;
            for (int row = 0; row < 8; row++)
            {
                if (arr[row][col] == 'R')
                    cntR++;
                else if (arr[row][col] == 'B')
                    cntB++;
            }

            if (cntR == 8)
            {
                cout << 'R' << endl;
                return;
            }
            else if (cntB == 8)
            {
                cout << 'B' << endl;
                return;
            }
        }

    }

}
int main()
{
  
    int t;
    cin >> t;
    while (t--)
    solve();
    
}


*/
