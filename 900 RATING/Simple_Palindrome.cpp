
// https://codeforces.com/contest/2005/problem/A


// Combinatorics Constructive Algorithms Greedy Math *900

// ------------------------------------ Correct Code   -------------------------------------


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        string s = "aeiou";
        if (n > 5)
        {
            int m = n / 5;

            for(int i = 0; i < m; i++){
                cout << 'a';
            }
            if(n % 5 >= 1)
                cout << 'a';
            for(int i = 0; i < m; i++){
                cout << 'e';
            }
            if(n % 5 >= 2)
                cout << 'e';
            for(int i = 0; i < m; i++){
                cout << 'i';
            }
            if(n % 5 >= 3)
                cout << 'i';
            for(int i = 0; i < m; i++){
                cout << 'o';
            }
            if(n % 5 >= 4)
                cout << 'o';
            for(int i = 0; i < m; i++){
                cout << 'u';
            }

            cout << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }
}