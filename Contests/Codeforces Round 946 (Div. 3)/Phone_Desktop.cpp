// https://codeforces.com/contest/1974/problem/A


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x;
        cin >> x;
        int y;
        cin >> y;

        int space_1 = x;
        int space_2 = y * 4;
        int total_space = space_1 + space_2;

        if (y > 2)
        {
            if (y % 2 == 0)
            {
                {
                    if (x <= 7*(y/2))
                        cout << y / 2 << "\n";
                    else
                        cout << (y / 2) + (x%(7*(y/2))) << "\n";
                }
            }
            else
            {
                if (x <= 11+7*((y/2)+1) )
                cout << (y / 2) + 1 << "\n";
                else
                cout << (y / 2) + (x % (11+7*((y/2)+1))) << "\n";

            }
        }
        else
        {

            if (total_space % 15 < 0)
                cout << 1 << "\n";
            else if (total_space % 15 == 0)
                cout << total_space / 15 << "\n";
            else
                cout << (total_space / 15) + 1 << "\n";
        }
    }
}

